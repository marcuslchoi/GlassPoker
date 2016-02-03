using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;


public class Game : MonoBehaviour {

	//GENERATE A HAND FOR EACH PLAYER IN GAME. MAKE SURE THERE ARE 5 COMM CARDS.
	//COMPARE THEM AND ADD POINTS TO THE WINNER

	//these are the players that are present in the current game, identified by player number
	public static List<int> playersInGame;

	void Start () {

		playersInGame = new List<int>{ 3, 6,4,8 };

		//creating cardIndices list from 0-51. Represents a full deck
		//must be refreshed every new game
		var cardIndices = new List<int>();
		for (int i = 0; i < 52; i++) {
			cardIndices.Add(i);
		}
			
		int indexOfCardIndices = new int ();

		List<List<string>> twoCardLists = new List<List<string>>(playersInGame.Count);

		List<string> twoCardList;

		int playerCount;

		//for each player in game
		for (playerCount = 0; playerCount < playersInGame.Count; playerCount++) {

			//create a new object for list of lists to point to
			twoCardList = new List<string>(2);

			//generate a 2 card hand
			for (int i = 0; i < 2; i++) 
			{
				indexOfCardIndices = Random.Range (0, cardIndices.Count - 1);
				twoCardList.Add(Hand.cardNames [cardIndices [indexOfCardIndices]]);

				print ("card " + i + " player "+playerCount+": " + twoCardList [i]);

				cardIndices.RemoveAt (indexOfCardIndices);
			}

			twoCardLists.Add (twoCardList);

		}

		//generate the community cards
		string[] commCards = new string[5];
		for (int i = 0; i < commCards.Length; i++) {

			indexOfCardIndices = Random.Range (0, cardIndices.Count - 1);
			commCards[i] = Hand.cardNames[cardIndices[indexOfCardIndices]];

			print ("comm card "+i+": " + commCards [i]);

			cardIndices.RemoveAt (indexOfCardIndices);
		}

		//each player's full hand of cards
		string[] myCards;

		//each player's Hand object
		Hand myHand;

		List<Hand> playerHands = new List<Hand> (playersInGame.Count);

		//creating the Hand object for each player
		for (playerCount = 0; playerCount < playersInGame.Count; playerCount++) {
		
			//create a new object for cardsArrayList to point to
			myCards = new string[7];

			//copy the 2 cards to myCards at index 0. Copy comm cards to myCards at index 2
			twoCardLists[playerCount].CopyTo(myCards,0);
			commCards.CopyTo(myCards,2);

			//create the Hand object using the current myCards array
			myHand = new Hand(myCards);

			//add the current Hand object to the playerHands list
			playerHands.Add (myHand);
		}

		//list of all ranks in the game
		List<double> rankList = new List<double> ();

		int winningPlayerIndex = new int();

		double winRank = 0;

		//get the ranks, find winner
		for (playerCount = 0; playerCount < playersInGame.Count; playerCount++) {

			//add each player's rank to the rank list
			rankList.Add (playerHands [playerCount].getRank ());

			//finding the winning rank and winning player index
			if (rankList[playerCount] > winRank)
			{
				winRank = playerHands [playerCount].getRank ();
				winningPlayerIndex = playerCount;
			}
		}

		int winPoints = 0;
		//calculate the points to be added to winner
		foreach (double rank in rankList) {
		
			if (rank != winRank) {
			
				winPoints += (int)Mathf.Floor ((float)rank) + 1;
			}
		}

		print ("winning player at index " + winningPlayerIndex + " earns " + winPoints + " points.");

		//Add int val of loser + 1 for each loser to the winner's points

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
