using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Photon;
using UnityEngine.UI;

public class Player : Photon.MonoBehaviour {



	public int ID;

	public int myChipAmount;

	public int myBetAmount;

	public Hand hand;

	//the overall points from winning hands
	public int points;

	public int wins;

	public int losses;

	//public bool isFolded;

	//DONT NEED THIS ANYMORE
	//public bool isCurrentPlayer;
	//public bool isPreviousPlayer;

	//public bool isStraddle;

	//initializer
	public Player(int id) {
	
		ID = id;	
	}

	[PunRPC]
	public void Call()
	{
		//add back my previous bet to my chips stack
		myChipAmount += myBetAmount;
		myBetAmount = GameState.lastBetAmount;

		myChipAmount -= myBetAmount;

		//isCurrentPlayer = false;
		//isPreviousPlayer = true;

		//the possible new current player (if bets are not equal or if he is the straddle)
		Player newCurrentPlayer;

		//make next player the possible new current player
		if (GamePlayManager.playerList.IndexOf (this) == GamePlayManager.playerList.Count - 1) {

			newCurrentPlayer = GamePlayManager.playerList [0];

		} else {
		
			newCurrentPlayer = GamePlayManager.playerList [GamePlayManager.playerList.IndexOf (this) + 1];
		}

		//check if new current player is straddle. If not, check if bets are equal
		//ALSO CHECK IF PRE-FLOP?
		if (newCurrentPlayer == GameState.straddlePlayer) {

			CheckBetEquality.CheckIfBetsAreEqual ();
			if (CheckBetEquality.betsAreEqual) {
			
				//MOVE BETS TO POT AND DEAL THE NEW COMM CARDS DEPENDING ON GAME STATE
				//NEED TO SPLIT UP THE CHECKIFBETSEQUAL FUNCTION
			
			} else {
			
				GameState.currentPlayer = newCurrentPlayer;			
			}
		
		//if new current player is the straddle, has option of raising or checking
		} else {
		
			GameState.currentPlayer = newCurrentPlayer;	

		}
	}

	//when the player confirms that he wants to bet the slider amount
	[PunRPC]
	public void ConfirmBet()
	{
		GameObject sliderObject = GameObject.Find ("BetSlider");
		Slider betSlider = sliderObject.GetComponent<Slider> ();

		var betSliderValInt = (int)betSlider.value;

		//new current minimum raise is the new bet amount (slider value) - previous player's bet amount
		GameState.currentMinRaise = betSliderValInt - GameState.lastBetAmount;

		//update the last bet amount to be the new bet
		GameState.lastBetAmount = betSliderValInt;

		//new chip amount = chip amount + bet amount - new bet amount (betslider's value)
		myChipAmount = myChipAmount + myBetAmount - betSliderValInt;

		//new bet amount of current player becomes the slider value
		myBetAmount = betSliderValInt;


		//go to next player as current player
		if (GamePlayManager.playerList.IndexOf (GameState.currentPlayer) == GamePlayManager.playerList.Count - 1) {
		
			GameState.currentPlayer = GamePlayManager.playerList [0];
		
		} else {

			GameState.currentPlayer = GamePlayManager.playerList[GamePlayManager.playerList.IndexOf (GameState.currentPlayer)+1];
		}

		//hide slider, slider text, confirm button
		sliderObject.SetActive(false);

		//sliderValText.text = "";

		gameObject.SetActive (false);	//confirm bet button
	}

	[PunRPC]
	public void Fold()
	{
		//NEED THESE??
		//isCurrentPlayer = false;
		//isFolded = true;

		//ANIMATE CARDS TO DEALER

		//move my bet to the pot
		GameState.potAmount += myBetAmount;
		myBetAmount = 0;

		//ANIMATE BET CHIPS TO POT

		//save index of folded player
		int indexOfFoldedPlayer = GamePlayManager.playerList.IndexOf (this);

		//remove the player from playerList
		GamePlayManager.playerList.RemoveAt (GamePlayManager.playerList.IndexOf (this));

		//if only 1 player left, he is the winner
		if (GamePlayManager.playerList.Count == 1) {
		
			print ("Winner ID " + GamePlayManager.playerList [0].ID);

			//add winPoints and a win to the winner
			GamePlayManager.AddPointsToWinners ();

			//move the pot to the winner
			GamePlayManager.playerList [0].myChipAmount += GameState.potAmount;
			GameState.potAmount = 0;

			//START NEW GAME

		//else assign the new current player and continue game
		} else {

			//the possible new current player (if bets are not equal or if he is the straddle)
			Player newCurrentPlayer;

			//make next player the possible new current player
			if (GamePlayManager.playerList.IndexOf (this) == GamePlayManager.playerList.Count - 1) {

				newCurrentPlayer = GamePlayManager.playerList [0];

			} else {

				newCurrentPlayer = GamePlayManager.playerList [GamePlayManager.playerList.IndexOf (this) + 1];
			}
		

			//COPIED FROM CALL FUNCTION
			//check if new current player is straddle. If not, check if bets are equal
			//ALSO CHECK IF PRE-FLOP?
			if (newCurrentPlayer == GameState.straddlePlayer) {

				CheckBetEquality.CheckIfBetsAreEqual ();
				if (CheckBetEquality.betsAreEqual) {

					//MOVE BETS TO POT AND DEAL THE NEW COMM CARDS DEPENDING ON GAME STATE
					//NEED TO SPLIT UP THE CHECKIFBETSEQUAL FUNCTION

				} else {

					GameState.currentPlayer = newCurrentPlayer;			
				}

			//if new current player is the straddle, he has option of raising or checking
			} else {

				GameState.currentPlayer = newCurrentPlayer;

			}
		
		}
	}

	public void Check()
	{
		//pass to next player
	}

//	[PunRPC]
//	public void UpdateGSText() {
//
//		Text gsText = GameObject.Find ("GameStateText").GetComponent<Text> ();
//
//		gsText.text = "Game started";
//
//	}

}
