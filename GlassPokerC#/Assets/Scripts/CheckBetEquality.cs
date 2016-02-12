﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class CheckBetEquality : MonoBehaviour {

	//all bet amounts combined
	static int totalBetsAmount;

	public static bool betsAreEqual = false;

	//BettingTextDisplay btd = GameObject.Find ("Chip and Bet Amount Texts").GetComponent<BettingTextDisplay> ();

	public static void CheckIfBetsAreEqual()
	{

		int betAmount = 0;

		//check if all bets are equal. If so, move bets to pot and begin next round or showdown
		for (var i = 0; i < GamePlayManager.playerList.Count-1; i++) {

			if (GamePlayManager.playerList[i].myBetAmount != GamePlayManager.playerList[i+1].myBetAmount) {
			
				break;
			
			//checked the last 2 players and they have equal bet amount
			} else if (i == GamePlayManager.playerList.Count - 2) {
				
				betAmount = GamePlayManager.playerList[i].myBetAmount;

				betsAreEqual = true;
			}
		}

		//if bets are all equal, move the bets to pot
		if (betsAreEqual) {

			//btd.chipAmountText [BettingTextDisplay.currentPlayerPos].color = Color.black;

			//total of all bets combined
			totalBetsAmount = betAmount * GamePlayManager.playerList.Count;

			GameObject cbeObject = GameObject.Find ("CheckBetEquality");
			CheckBetEquality cbe = cbeObject.GetComponent<CheckBetEquality> ();

			//move bets to pot after delay
			cbe.Invoke ("MoveBetsToPot", 2f);
		}
	
	}

	public static void MoveBetsToPot()
	{
		//BettingTextDisplay btd = GameObject.Find ("Chip and Bet Amount Texts").GetComponent<BettingTextDisplay> ();
		//add all bets to pot
		BettingTextDisplay.potAmountText.text = (int.Parse (BettingTextDisplay.potAmountText.text) + totalBetsAmount).ToString (); 

		GameState.potAmount += totalBetsAmount;

		//removing bet amounts from table (bets go into pot)
		for (var i = 0; i < GamePlayManager.playerList.Count; i++) {

			GamePlayManager.playerList [i].myBetAmount = 0;
		}	

		//ANIMATE THE BETS TO THE POT??
		print("moved bets to pot " +totalBetsAmount);

		//Deal the flop
		GameObject flopObject = GameObject.Find("FlopDeal");
		FlopDeal fd = flopObject.GetComponent<FlopDeal>();

		fd.Flop ();

	}

}
