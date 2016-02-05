﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class GamePlayer : MonoBehaviour {

	//STORE EVERY 2 CARD (7 CARD?) HAND IN A LIST
	//ALSO STORE A LIST WITH "W","L","F" CORRESPONDING TO HAND?

	public int ID;

	//call this the stack??
	public int myChipAmount;

	public int myBetAmount;

	public Hand hand;

	//the overall points from winning hands
	public int points;

	public int wins;

	public int losses;

	public bool folded;

	public bool isCurrentPlayer;
	public bool isPreviousPlayer;

	//initializer
	public GamePlayer(int id) {
	
		ID = id;
	
	}

	public void Call()
	{
		//CALL AN RPC!!!

		//add back my previous bet to my chips stack
		myChipAmount += myBetAmount;
		myBetAmount = GamePlayManager.lastBetAmount;

		myChipAmount -= myBetAmount;

		//CHECK FOR STRADDLE
		//FIX THIS FUNCTION
		CheckBetEquality.CheckIfBetsAreEqual ();

	}

	public void Bet()
	{
		//show the slider and confirmation
	}

	public void Fold()
	{

		//CHECK FOR STRADDLE
		folded = true;
		//USE RPC
	}

	public void Check()
	{
		//pass to next player
	}

}
