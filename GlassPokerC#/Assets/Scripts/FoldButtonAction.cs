using UnityEngine;
using System.Collections;

public class FoldButtonAction : MonoBehaviour {

	public void Fold()
	{
		//get the game object for chip and bet texts, get the BettingTextDisplay component to use betAmountText and chipAmountText
		GameObject textGameObject = GameObject.Find ("Chip and Bet Amount Texts");
		BettingTextDisplay btd = textGameObject.GetComponent<BettingTextDisplay> ();

		var foldedPlayerPos = btd.currentPlayerPos;

		print ("Fold player position "+btd.currentPlayerPos);

		//move current player's bet amount to the pot
		BettingTextDisplay.potAmountText.text = (int.Parse (BettingTextDisplay.potAmountText.text) + int.Parse (btd.betAmountText [btd.currentPlayerPos].text)).ToString ();

		//remove current player's bet amount (ANIMATE THIS GOING INTO THE POT?)
		btd.betAmountText[btd.currentPlayerPos].text = "FOLD";

		//ANIMATE THE CARDS GOING TO DEALER?
		GameObject cardObject = new GameObject();
		cardObject = GameObject.Find ("Card0-" + btd.currentPlayerPos);
		cardObject.SetActive (false);
		cardObject = GameObject.Find ("Card1-" + btd.currentPlayerPos);
		cardObject.SetActive (false);

		//assign previous non-folded player position to previous player position
		if (btd.activePlayerPosList.IndexOf (btd.currentPlayerPos) == 0) {

			//if current folding player position is 0th index of active player position list, previous player position is at end of the list
			btd.previousPlayerPos = btd.activePlayerPosList [btd.activePlayerPosList.Count - 1];

		} else {
			
			btd.previousPlayerPos = btd.activePlayerPosList[btd.activePlayerPosList.IndexOf(btd.currentPlayerPos)-1];
		}

		//finding the new current player position based on active player position list and folded player position
		if (btd.activePlayerPosList.IndexOf(foldedPlayerPos) == btd.activePlayerPosList.Count-1) {

			btd.currentPlayerPos = btd.activePlayerPosList[0];


		} else {

			btd.currentPlayerPos = btd.activePlayerPosList[btd.activePlayerPosList.IndexOf(foldedPlayerPos) + 1];
		}


		//remove current player pos from active player pos list
		btd.activePlayerPosList.Remove(foldedPlayerPos);

		//FOLDED PLAYER POS LIST: IS THIS NEEDED?
		//BettingTextDisplay.foldedPlayerPosList.Add(foldedPlayerPos);

		if (btd.activePlayerPosList.Count == 1) {
		
			print ("winner");
			//CURRENT PLAYER POSITION'S CHIP AMOUNT = CHIP AMOUNT + BET AMOUNT + POT AMOUNT
		}

		CheckBetEquality.CheckIfBetsAreEqual ();

	}
}
