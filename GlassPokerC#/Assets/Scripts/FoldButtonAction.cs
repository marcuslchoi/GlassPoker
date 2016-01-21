using UnityEngine;
using System.Collections;

public class FoldButtonAction : MonoBehaviour {

	public void Fold()
	{
		//get the game object for chip and bet texts, get the BettingTextDisplay component to use betAmountText and chipAmountText
		GameObject textGameObject = GameObject.Find ("Chip and Bet Amount Texts");
		BettingTextDisplay btd = textGameObject.GetComponent<BettingTextDisplay> ();

		var foldedPlayerPos = BettingTextDisplay.currentPlayerPos;

		print ("Fold player position "+BettingTextDisplay.currentPlayerPos);

		//move current player's bet amount to the pot
		BettingTextDisplay.potAmountText.text = (int.Parse (BettingTextDisplay.potAmountText.text) + int.Parse (btd.betAmountText [BettingTextDisplay.currentPlayerPos].text)).ToString ();

		//remove current player's bet amount (ANIMATE THIS GOING INTO THE POT?)
		btd.betAmountText[BettingTextDisplay.currentPlayerPos].text = "FOLD";

		//ANIMATE THE CARDS GOING TO DEALER?
		GameObject cardObject = new GameObject();
		cardObject = GameObject.Find ("Card0-" + BettingTextDisplay.currentPlayerPos);
		cardObject.SetActive (false);
		cardObject = GameObject.Find ("Card1-" + BettingTextDisplay.currentPlayerPos);
		cardObject.SetActive (false);

		//assign previous non-folded player position to previous player position
		if (BettingTextDisplay.activePlayerPosList.IndexOf (BettingTextDisplay.currentPlayerPos) == 0) {
		
			//if current folding player position is 0th index of active player position list, previous player position is at end of the list
			BettingTextDisplay.previousPlayerPos = BettingTextDisplay.activePlayerPosList [BettingTextDisplay.activePlayerPosList.Count - 1];

		} else {
			
			BettingTextDisplay.previousPlayerPos = BettingTextDisplay.activePlayerPosList[BettingTextDisplay.activePlayerPosList.IndexOf(BettingTextDisplay.currentPlayerPos)-1];
		}

		//finding the new current player position based on active player position list and folded player position
		if (BettingTextDisplay.activePlayerPosList.IndexOf(foldedPlayerPos) == BettingTextDisplay.activePlayerPosList.Count-1) {

			BettingTextDisplay.currentPlayerPos = BettingTextDisplay.activePlayerPosList[0];


		} else {

			BettingTextDisplay.currentPlayerPos = BettingTextDisplay.activePlayerPosList[BettingTextDisplay.activePlayerPosList.IndexOf(foldedPlayerPos) + 1];
		}

		print (BettingTextDisplay.previousPlayerPos+ " " +BettingTextDisplay.currentPlayerPos);

		//remove current player pos from active player pos list
		BettingTextDisplay.activePlayerPosList.Remove(foldedPlayerPos);

		//FOLDED PLAYER POS LIST: IS THIS NEEDED?
		BettingTextDisplay.foldedPlayerPosList.Add(foldedPlayerPos);

		//check if all bets are equal. If so, move bets to pot and begin next round or showdown
		for (var i = 0; i < BettingTextDisplay.activePlayerPosList.Count-1; i++) {

			if (btd.betAmountText [BettingTextDisplay.activePlayerPosList[i]].text != btd.betAmountText [BettingTextDisplay.activePlayerPosList[i + 1]].text) {
				break;
			} else if (i == BettingTextDisplay.activePlayerPosList.Count - 2) {
			
				print("move bets to pot");
			}
		}


	}
}
