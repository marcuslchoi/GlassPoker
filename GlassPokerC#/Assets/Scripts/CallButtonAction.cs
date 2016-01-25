using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CallButtonAction : MonoBehaviour {


	public void Call()
	{

		GameObject textGameObject = GameObject.Find ("Chip and Bet Amount Texts");
		BettingTextDisplay btd = textGameObject.GetComponent<BettingTextDisplay> ();

		var currentPlayerPos = btd.currentPlayerPos;
		var previousPlayerPos = btd.previousPlayerPos;

		//current player's chips equals chips + previous bet - current bet
		btd.chipAmountText [currentPlayerPos].text = (int.Parse(btd.chipAmountText[currentPlayerPos].text) + int.Parse(btd.betAmountText [currentPlayerPos].text) - int.Parse(btd.betAmountText [previousPlayerPos].text)).ToString(); 

		//current player's bet equals previous player's bet
		btd.betAmountText [currentPlayerPos].text = btd.betAmountText [previousPlayerPos].text;


		//assign current player to previous player before incrementing to next player
		btd.previousPlayerPos = btd.currentPlayerPos;

		//finding the new current player position based on active player position list
		if (btd.activePlayerPosList.IndexOf(btd.previousPlayerPos) == btd.activePlayerPosList.Count-1) {

			btd.currentPlayerPos = btd.activePlayerPosList[0];


		} else {

			btd.currentPlayerPos = btd.activePlayerPosList[btd.activePlayerPosList.IndexOf(btd.previousPlayerPos) + 1];
		}

		CheckBetEquality.CheckIfBetsAreEqual ();
	}
}
