using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.UI;

public class GameState : Photon.MonoBehaviour {

	public static List<string> shuffledDeck;

	public static int potAmount;

	public static Player currentPlayer;
	public static Player dealer, smallBlindPlayer, bigBlindPlayer;

	//straddle only exists if he straddle bets before the cards are dealt
	public static Player straddlePlayer;

	public static int smallBlind;

	public static int lastBetAmount;

	public static int currentMinRaise;

	//the betting rounds and showdown (ENUM???)
	public static bool isPreFlop, isFlop, isPreTurn, isTurn, isPreRiver, isRiver, isShowdown; 

	void Start() {

		smallBlind = 1;

		currentMinRaise = 2 * smallBlind;
	
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
