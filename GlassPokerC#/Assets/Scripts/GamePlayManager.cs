using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;



public class GamePlayManager : MonoBehaviour {

	//GENERATE A HAND FOR EACH PLAYER IN GAME. MAKE SURE THERE ARE 5 COMM CARDS.
	//COMPARE THEM AND ADD POINTS TO THE WINNER

	//these are the players that are present in the current game, identified by player number
	public static List<int> playerIDs;

	public static List<int> cardIndices;

	void Start () {

		//player IDs (to be pulled from server)
		playerIDs = new List<int>{3, 6};

		GamePlayer player;
		List<GamePlayer> playerList = new List<GamePlayer>();

		//creating GamePlayer objects using player IDs
		foreach (int playerID in playerIDs) {
		
			player = new GamePlayer (playerID);

			playerList.Add (player);
		
		}

		//creating cardIndices list from 0-51. Represents a full deck
		cardIndices = new List<int>();
		for (int i = 0; i < 52; i++) {
			cardIndices.Add(i);
		}

		List<int> shuffledIndices = cardIndices;

		//random shuffle the cards
		for (int i = 0; i < shuffledIndices.Count; i++) {			
			int temp = shuffledIndices[i];
			int randomIndex = Random.Range(i, shuffledIndices.Count);
			shuffledIndices[i] = shuffledIndices[randomIndex];
			shuffledIndices[randomIndex] = temp;
		}
					
		int indexOfShuffledIndices = new int ();
	
		List<List<string>> twoCardLists = new List<List<string>>(playerList.Count);

		List<string> twoCardList;

		int playerCount;

		//for each player in game
		for (playerCount = 0; playerCount < playerList.Count; playerCount++) {

			//create a new object for list of lists to point to
			twoCardList = new List<string>(2);

			//generate a 2 card hand
			for (int i = 0; i < 2; i++) 
			{
				indexOfShuffledIndices = 2*playerCount + i;

				twoCardList.Add(Hand.cardNames [shuffledIndices [indexOfShuffledIndices]]);

				//print ("card " + i + " player "+playerCount+": " + twoCardList [i]);
			}

			twoCardLists.Add (twoCardList);

		}

		//generate the community cards
		List<string> commCards = new List<string>(5);

		for (int i = 0; i < 5; i++) {

			indexOfShuffledIndices++;

			commCards.Add(Hand.cardNames[shuffledIndices[indexOfShuffledIndices]]);

			print ("comm card "+i+": " + commCards [i]);

		}
			
		//each player's full hand of cards
		string[] myCards;

		//each player's Hand object
		Hand myHand;

		//creating the Hand object for each player and assigning it to the player
		for (playerCount = 0; playerCount < playerList.Count; playerCount++) {

			myCards = new string[7];

			//copy the 2 cards to myCards at index 0. Copy comm cards to myCards at index 2
			twoCardLists[playerCount].CopyTo(myCards,0);
			commCards.CopyTo(myCards,2);

			//create the Hand object using the current myCards array
			myHand = new Hand(myCards);

			//assign the current hand to the current player
			playerList [playerCount].hand = myHand;
		}

		//print the player IDs and their respective cards
		foreach (GamePlayer gamePlayer in playerList)
		{
			print("Player ID "+gamePlayer.ID+" has cards "+gamePlayer.hand.twoCardList[0]+ " "+gamePlayer.hand.twoCardList[1]);

		}
			
		//Player.call, bet, fold, check !!!!!!

		//list of all ranks in the game
		List<double> rankList = new List<double> ();

		int winningPlayerId = new int();

		double winRank = 0;

		//get the ranks, find winner
		//NEED TO CHECK FOR TIE!!!
		for (playerCount = 0; playerCount < playerList.Count; playerCount++) {

			//add each player's rank to the rank list
			rankList.Add (playerList [playerCount].hand.getRank ());

			//finding the winning rank and winning player index
			if (rankList[playerCount] > winRank)
			{
				winRank = playerList [playerCount].hand.getRank ();
				winningPlayerId = playerList [playerCount].ID;
			}
		}

		int winPoints = 0;
		//calculate the points to be added to winner
		foreach (double rank in rankList) {
		
			if (rank != winRank) {
			
				winPoints += (int)Mathf.Floor ((float)rank) + 1;
			}
		}

		print ("winning player ID " + winningPlayerId + " earns " + winPoints + " points.");

		//4kind
		//myCards = new string[] {"4S", "3H", "4C","2S","4H","4D"};

		//flush
		//myCards = new string[] {"5S", "3S", "4S","2S","4H","QS"};

		//low straight
		//myCards = new string[] {"6C","3S","2H","4D","AS","3D","5S"};

		//straight flush
		//myCards = new string[] {"AD","2D","JC","3D","4D","5D","7H"};

		//myCards = new string[] {"6C","3C","2C","4C","AS","3C","5C"};
	
		//2 pair
		//myCards = new string[] {"6C","6H","3S","4C","AS","3C","AC"};

	}
		
}
