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

	//straddle only exists if he decides to bet before the cards are dealt
	public static Player straddlePlayer;

	public static int smallBlindAmount;

	public static int lastBetAmount;

	public static int currentMinRaise;

	//the betting rounds and showdown (ENUM???)
	//public enum LoginPathways {deviceId = 1, pf_username = 2, facebook = 3, gameCenter = 4, pf_email = 5, steam = 6, googlePlus = 7  } 

	public enum Rounds {isPreFlop = 1, isFlop = 2, isPreTurn = 3, isTurn = 4, isPreRiver = 5, isRiver = 6, isShowdown = 7}

	public static Rounds currentRound;

	//public static bool isPreFlop, isFlop, isPreTurn, isTurn, isPreRiver, isRiver, isShowdown; 

	void Start() {

		smallBlindAmount = 1;

		currentMinRaise = 2 * smallBlindAmount;
	
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
}
