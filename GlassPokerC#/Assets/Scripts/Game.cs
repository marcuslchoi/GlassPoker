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

		playersInGame = new List<int>{ 3, 6 };

		//creating cardIndices list from 0-51. Represents a full deck
		//must be refreshed every new game
		var cardIndices = new List<int>();
		for (int i = 0; i < 52; i++) {
			cardIndices.Add(i);
		}
			
		int indexOfCardIndices = new int ();

		List<List<string>> twoCardLists = new List<List<string>>();

		List<string> twoCardList = new List<string>(2);

		//for each player in game
		for (int playerCount = 0; playerCount < playersInGame.Count; playerCount++) {

			//generate a 2 card hand
			for (int i = 0; i < twoCardList.Count; i++) 
			{
				indexOfCardIndices = Random.Range (0, cardIndices.Count - 1);
				twoCardList[i] = Hand.cardNames [cardIndices [indexOfCardIndices]];

				print ("card " + i + ": " + twoCardList [i]);

				cardIndices.RemoveAt (indexOfCardIndices);
			}

			twoCardLists.Add (twoCardList);

		}

		print ("two card lists[0]: " + twoCardLists [0]);//[0]+ twoCardLists [0][1]);

		foreach (string card in twoCardLists[0]) {
			print ("asdf"+card);
		
		}
//
//		print ("two card lists[1]: " + twoCardLists [1][0]+ twoCardLists [1][1]);

		//generate the community cards
		string[] commCards = new string[5];
		for (int i = 0; i < commCards.Length; i++) {

			indexOfCardIndices = Random.Range (0, cardIndices.Count - 1);
			commCards[i] = Hand.cardNames[cardIndices[indexOfCardIndices]];

			print ("comm card "+i+": " + commCards [i]);

			cardIndices.RemoveAt (indexOfCardIndices);
		}

		//number of cards in full hand
		int numberOfCards = 7; //twoCardArray.Length + commCards.Length;

		//create the string array of my cards. Includes 2 card hand + community cards
		string[] myCards = new string[numberOfCards];

		//twoCardLists[0].CopyTo(myCards,0);
		commCards.CopyTo(myCards,0);
		myCards [5] = twoCardList[0];
		myCards [6] = twoCardList[1];

		foreach (string card in myCards) {
			print (card);
		
		}

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

		Hand myHand = new Hand (myCards);

		myHand.getRank ();

	}
		
}
