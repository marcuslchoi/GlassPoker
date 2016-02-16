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

	public static int smallBlindAmount, bigBlindAmount, straddleAmount;

	public static int lastBetAmount;

	public static int currentMinRaise;

	//the betting rounds and showdown
	public enum Rounds {isPreDeal = 0, isPreFlop = 1, isFlop = 2, isPreTurn = 3, isTurn = 4, isPreRiver = 5, isRiver = 6, isShowdown = 7}

	public static Rounds currentRound;

	public static void OnGameStarted() {

		//TODO: GRAB THIS FROM SERVER 
		smallBlindAmount = 1;

		bigBlindAmount = 2 * smallBlindAmount;
		straddleAmount = 2 * bigBlindAmount;

		currentMinRaise = 2 * smallBlindAmount;

		//make smallblindplayer the next player in list after dealer
		if (GamePlayManager.playerList.IndexOf (dealer) == GamePlayManager.playerList.Count - 1) {

			smallBlindPlayer = GamePlayManager.playerList [0];

		} else {

			smallBlindPlayer = GamePlayManager.playerList [GamePlayManager.playerList.IndexOf (dealer) + 1];
		}

		//assign big blind player
		if (GamePlayManager.playerList.IndexOf (smallBlindPlayer) == GamePlayManager.playerList.Count - 1) {

			bigBlindPlayer = GamePlayManager.playerList [0];

		} else {

			bigBlindPlayer = GamePlayManager.playerList [GamePlayManager.playerList.IndexOf (smallBlindPlayer) + 1];
		}

		//assign straddle player
		if (GamePlayManager.playerList.IndexOf (bigBlindPlayer) == GamePlayManager.playerList.Count - 1) {

			straddlePlayer = GamePlayManager.playerList [0];

		} else {

			straddlePlayer = GamePlayManager.playerList [GamePlayManager.playerList.IndexOf (bigBlindPlayer) + 1];
		}
	

	}

	public static void ShuffleDeck () {

		shuffledDeck = Hand.cardNames.ToList();
		//random shuffle the cards
		for (int i = 0; i < shuffledDeck.Count; i++) {			
			string temp = shuffledDeck[i];
			int randomIndex = Random.Range(i, shuffledDeck.Count);
			shuffledDeck[i] = shuffledDeck[randomIndex];
			shuffledDeck[randomIndex] = temp;

			print (i+": "+shuffledDeck [i]);
		}
	
	}
}
