using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Photon;
using UnityEngine.UI;

public class GamePlayManager : Photon.PunBehaviour {

	//GENERATE A HAND FOR EACH PLAYER IN GAME. MAKE SURE THERE ARE 5 COMM CARDS.
	//COMPARE THEM AND ADD POINTS TO THE WINNER

	private PhotonView myPhotonView;

	//these are the players that are present in the current game, identified by player number
	public static List<int> playerIDs = new List<int>();

	//use this to determine who comes next
	public static List<Player> playerList = new List<Player>();

	public static List<string> commCards;

	static int indexOfShuffledDeck;

	static List<List<string>> twoCardLists;

	PhotonPlayer pp;

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
	void OnPhotonPlayerConnected(PhotonPlayer photonPlayer)
	{
		pp = photonPlayer;

		Debug.Log ("OnPhotonPlayerConnected: " + photonPlayer);
		print("new player ID: "+photonPlayer.ID);

		Text otherPlayerText = GameObject.Find ("OtherPlayerNumber").GetComponent<Text> ();

		otherPlayerText.text = "new player ID: "+photonPlayer.ID;

		playerIDs.Add (photonPlayer.ID); 

//		UpdatePlayerList ();

		if (PhotonNetwork.playerList.Length > 1) {


			//DOESN'T WORK
//			Player otherPlayer = GameObject.Find ("Player(Clone)").GetComponent<Player> ();
//
//			otherPlayer.ID = photonPlayer.ID;
//
//			playerList.Add (otherPlayer);

//			StartGame ();

//			CheckBetEquality.CheckIfBetsAreEqual ();
//
//			//NOT WORKING ON OTHERS. ONLY UPDATES MY TEXT, OTHERS KNOW THAT MY TEXT IS UPDATED
//			this.myPhotonView.RPC ("UpdateGSText", PhotonTargets.All);
		}

	}
	bool gameStarted = false;

	void Update() {
	
		//add the non-local player to playerList when he joins
		while (playerList.Count < 2) {

			Player otherPlayer = GameObject.Find ("Player(Clone)").GetComponent<Player> ();

			otherPlayer.ID = pp.ID;

			playerList.Add (otherPlayer);
		}

		if (playerList.Count > 1 && gameStarted == false) {
		
			gameStarted = true;
			StartGame ();
		}
	
	}

	//when local player joins the room
	void OnJoinedRoom()
	{

		if (PhotonNetwork.playerList.Length > 1) {

			Text otherPlayerText = GameObject.Find ("OtherPlayerNumber").GetComponent<Text> ();
			otherPlayerText.text = "Other player already in room with ID: "+PhotonNetwork.playerList[0].ID;

		}

		print ("player with ID "+PhotonNetwork.player.ID+" joined room");

		Text myPlayerText = GameObject.Find ("MyPlayerNumber").GetComponent<Text> ();

		myPlayerText.text = "player with ID " + PhotonNetwork.player.ID + " joined room";

		//HOW DO I USE PHOTON PLAYERS WITH MY OWN PLAYER PROPERTIES???
		print("Number of Photon Players: "+ PhotonNetwork.playerList.Length);

		//instantiate the player object that just joined (this player needs to have an associated ID)
		GameObject playerGO = PhotonNetwork.Instantiate("Player", Vector3.zero, Quaternion.identity, 0);

		//ADDING THIS PLAYER TO PLAYERLIST INSTEAD OF CREATING A NEW PLAYER WITH SAME ID
		myPhotonView = playerGO.GetComponent<PhotonView>();

		Player playerScript = playerGO.GetComponent<Player> ();

//		AddingPlayerToList ();
		playerList.Add (playerScript);

		playerScript.ID = PhotonNetwork.player.ID;

		playerScript.myBetAmount = 2;

		Text myBetAmountText = GameObject.Find ("MyBetAmount").GetComponent<Text> ();
		myBetAmountText.text = playerScript.myBetAmount.ToString ();

		//print (playerScript.ID);

		//use the Photon Player IDs as player IDs to create player objects
//		playerIDs.Add (PhotonNetwork.player.ID); 

		if (PhotonNetwork.playerList.Length > 1) {
		
			StartGame ();
		}
	}
		
	public static void StartGame () {

		print ("number of players in playerList is " + playerList.Count);

		//ANIMATE THE SHUFFLING DECK WITH SOUND
		//SYNC THIS ACROSS THE NETWORK
		GameState.ShuffleDeck ();



		//game starts at preDeal round, ASK STRADDLE FOR BET
		GameState.currentRound = GameState.Rounds.isPreDeal;

		//DEAL THE CARDS HERE TO ONLY THE PLAYERS PRESENT

//		Player player;
//		playerList = new List<Player>();

//		//creating new Player objects using PhotonPlayer IDs
//		foreach (int playerID in playerIDs) {
//		
//			player = new Player (playerID);
//
//			playerList.Add (player);
//		
//		}

//----------DEALING THE CARDS TO PLAYERS---------------------------// 

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

	public static void AddPointsToWinners() {
	
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
		//show the buttons for the current player, hide for all other players
	
	}

	//call the RPC "Call" using the current player's PhotonView. Target all other players
	//so everyone knows that current player called
	public void CallButtonPressed()
	{
		this.myPhotonView.RPC ("Call", PhotonTargets.All);	
	}

	public void FoldButtonPressed()
	{
		this.myPhotonView.RPC ("Fold", PhotonTargets.All);	
	}

	public void BetButtonPressed()
	{
		BetButtonAction bba = GameObject.Find ("BetButtonAction").GetComponent<BetButtonAction> ();

		bba.showBetSlider ();
	
	}

	public void ConfirmBetButtonPressed () 
	{
		
		this.myPhotonView.RPC ("ConfirmBet", PhotonTargets.All);
	}

	public void ShuffleDeckCalltoRPC()
	{
	
		this.myPhotonView.RPC ("ShuffleDeckRPC", PhotonTargets.All);
	}

//	public void AddingPlayerToList()
//	{
//		this.myPhotonView.RPC ("AddPlayerToList", PhotonTargets.All);
//
//	}
		
		
}
