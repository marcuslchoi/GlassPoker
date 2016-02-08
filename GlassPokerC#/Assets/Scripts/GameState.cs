using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.UI;

public class GameState : Photon.MonoBehaviour {

	public static List<string> shuffledDeck;

	public static int potAmount;

	public static Player currentPlayer, previousPlayer;

	public static int lastBetAmount;

	public static int currentMinRaise;

	//the betting rounds and showdown
	public static bool isPreFlop, isFlop, isPreTurn, isTurn, isPreRiver, isRiver, isShowdown; 

	void Start() {
	
		ShuffleDeck ();

	}

	public void ShuffleDeck () {

		shuffledDeck = Hand.cardNames.ToList();
		//random shuffle the cards
		for (int i = 0; i < shuffledDeck.Count; i++) {			
			string temp = shuffledDeck[i];
			int randomIndex = Random.Range(i, shuffledDeck.Count);
			shuffledDeck[i] = shuffledDeck[randomIndex];
			shuffledDeck[randomIndex] = temp;

		}
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
