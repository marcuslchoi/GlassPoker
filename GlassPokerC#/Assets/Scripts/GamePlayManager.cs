using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Photon;

public class GamePlayManager : Photon.PunBehaviour {

	//GENERATE A HAND FOR EACH PLAYER IN GAME. MAKE SURE THERE ARE 5 COMM CARDS.
	//COMPARE THEM AND ADD POINTS TO THE WINNER

	//CREATE A GAME OBJECT THAT STORES THE SHUFFLED CARDS, POT AMOUNT, CURRENT PLAYER, ETC!!!

	private PhotonView myPhotonView;

	//these are the players that are present in the current game, identified by player number
	public static List<int> playerIDs = new List<int>();

	//use this to determine who comes next
	public static List<Player> playerList;

	public static List<string> commCards;

	static int indexOfShuffledDeck;

	static List<List<string>> twoCardLists;

	//only populated if get to showdown. Used to add points and win to winner(s)
	static List<Player> winningPlayers;

	//connect
	void Start () {
		PhotonNetwork.ConnectUsingSettings ("0.1");
	}

	void OnGUI()
	{
		GUILayout.Label(PhotonNetwork.connectionStateDetailed.ToString());
	}

	//join a random room
	public override void OnJoinedLobby()
	{
		RoomOptions roomOptions = new RoomOptions() { isVisible = false, maxPlayers = 9 };
		PhotonNetwork.JoinOrCreateRoom("Room", roomOptions, TypedLobby.Default);
	}

	//runs only when non-local player enters
	void OnPhotonPlayerConnected(PhotonPlayer player)
	{
		Debug.Log ("OnPhotonPlayerConnected: " + player);
		print("new player ID: "+player.ID);

		playerIDs.Add (player.ID); 

		if (PhotonNetwork.playerList.Length > 1) {

			StartGame ();
		}

	}

	//when local player joins the room
	void OnJoinedRoom()
	{

		print ("player with ID "+PhotonNetwork.player.ID+" joined room");

		//HOW DO I USE PHOTON PLAYERS WITH MY OWN PLAYER PROPERTIES???
		print("Number of Photon Players: "+ PhotonNetwork.playerList.Length);

		//instantiate the player object that just joined (this player needs to have an associated ID)
		GameObject player = PhotonNetwork.Instantiate("Player", Vector3.zero, Quaternion.identity, 0);

		myPhotonView = player.GetComponent<PhotonView>();

		//use the Photon Player IDs as player IDs to create player objects
		playerIDs.Add (PhotonNetwork.player.ID); 

		if (PhotonNetwork.playerList.Length > 1) {
		
			StartGame ();
		}

//		if (photonView.isMine) {
//		
//			gameObject.name = "me";
//		}
	}
		
	public static void StartGame () {

		Player player;
		playerList = new List<Player>();

		//creating Player objects using player IDs
		foreach (int playerID in playerIDs) {
		
			player = new Player (playerID);

			playerList.Add (player);
		
		}

		indexOfShuffledDeck = new int ();
	
		//list of 2 card lists 
		twoCardLists = new List<List<string>>(playerList.Count);

		List<string> twoCardList;

		int playerIndex;

		//for each player in game, generate a 2-card hand
		for (playerIndex = 0; playerIndex < playerList.Count; playerIndex++) {

			//create a new object for list of lists to point to
			twoCardList = new List<string>(2);

			//generate a 2 card hand
			for (int i = 0; i < 2; i++) 
			{
				indexOfShuffledDeck = 2*playerIndex + i;

				twoCardList.Add(GameState.shuffledDeck [indexOfShuffledDeck]);

			}

			twoCardLists.Add (twoCardList);

		}

		//generate the community cards to add to 7 card hands
		GenerateCommCards ();

		//create the hand object for each player (also creates player.hand.twoCardList)
		GeneratePlayerHands ();

		//ONLY CALL IF IT GETS TO SHOWDOWN
		AddPointsToWinners ();

	}

	static void GenerateCommCards() {
	
		//generate the community cards
		commCards = new List<string>(5);

		for (int i = 0; i < 5; i++) {

			indexOfShuffledDeck++;

			commCards.Add(GameState.shuffledDeck[indexOfShuffledDeck]);

			print ("comm card "+i+": " + commCards [i]);

		}

	}

	static void GeneratePlayerHands() {

		//each player's full hand of cards
		string[] myCards;

		//each player's Hand object
		Hand myHand;

		//creating the Hand object for each player and assigning it to the player
		for (int playerIndex = 0; playerIndex < playerList.Count; playerIndex++) {

			myCards = new string[7];

			//copy the 2 cards to myCards at index 0. Copy comm cards to myCards at index 2
			twoCardLists[playerIndex].CopyTo(myCards,0);
			commCards.CopyTo(myCards,2);

			//create the Hand object using the current myCards array
			myHand = new Hand(myCards);

			//assign the current hand to the current player
			playerList [playerIndex].hand = myHand;
		}

		//print the player IDs and their respective cards
		foreach (Player gamePlayer in playerList)
		{
			print("Player ID "+gamePlayer.ID+" has cards "+gamePlayer.hand.twoCardList[0]+ " "+gamePlayer.hand.twoCardList[1]);

		}

	}

	static void AddPointsToWinners() {
	
		//list of all ranks in the game
		List<double> rankList = new List<double> ();

		winningPlayers = new List<Player>();

		double winRank = 0;

		//get the ranks, find winner
		for (int playerIndex = 0; playerIndex < playerList.Count; playerIndex++) {

			//add each player's rank to the rank list
			rankList.Add (playerList [playerIndex].hand.getRank ());

			//finding the winning rank
			if (rankList[playerIndex] > winRank)
			{
				winRank = playerList [playerIndex].hand.getRank ();

			}
		}

		int winPoints = 0;
		//calculate the points to be added to winner(s)
		foreach (double rank in rankList) {

			if (rank != winRank) {

				winPoints += (int)Mathf.Floor ((float)rank) + 1;
			}
		}

		//check if there are multiple players with same win rank for tie game
		//add points to winners and add 1 win
		for (int playerIndex = 0; playerIndex < playerList.Count; playerIndex++) {

			if (rankList [playerIndex] == winRank) {

				playerList [playerIndex].points += winPoints;
				playerList [playerIndex].wins++;

				winningPlayers.Add (playerList [playerIndex]);

			}
		}

		//print the winning (or tied) player IDs and win points
		if (winningPlayers.Count > 1) {

			foreach (Player player in winningPlayers) {

				print ("Tied player ID " + player.ID + " earns " + winPoints + " points.");
			}

		//the winner
		} else {

			print ("Winning player ID " + winningPlayers[0].ID + " earns " + winPoints + " points.");
		}

	}

	void ShowButtons()
	{
		//show the buttons for the current player, hide for previous player
	
	}

	//call the RPC "Call" using the current player's PhotonView. Target all other players
	//so everyone knows that current player called
	void CallButtonPressed()
	{
		this.myPhotonView.RPC ("Call", PhotonTargets.All);	
	}
		
		
}
