using UnityEngine;
using System.Collections;

public class CheckBetEquality : MonoBehaviour {

	public static void CheckIfBetsAreEqual()
	{
		//get the game object for chip and bet texts, get the BettingTextDisplay component to use betAmountText and chipAmountText
		GameObject textGameObject = GameObject.Find ("Chip and Bet Amount Texts");
		BettingTextDisplay btd = textGameObject.GetComponent<BettingTextDisplay> ();

		//the bet amount of each person
		int betAmount = 0;

		//all bet amounts combined
		int totalBetsAmount;

		bool betsAreEqual = false;

		//check if all bets are equal. If so, move bets to pot and begin next round or showdown
		for (var i = 0; i < BettingTextDisplay.activePlayerPosList.Count-1; i++) {

			if (btd.betAmountText [BettingTextDisplay.activePlayerPosList[i]].text != btd.betAmountText [BettingTextDisplay.activePlayerPosList[i + 1]].text) {
			
				break;
			
			} else if (i == BettingTextDisplay.activePlayerPosList.Count - 2) {
				
				betAmount = int.Parse(btd.betAmountText[BettingTextDisplay.activePlayerPosList[i]].text);

				betsAreEqual = true;
			}
		}

		if (betsAreEqual) {
			
			totalBetsAmount = betAmount * BettingTextDisplay.activePlayerPosList.Count;

			//add all bets to pot
			BettingTextDisplay.potAmountText.text = (int.Parse (BettingTextDisplay.potAmountText.text) + totalBetsAmount).ToString (); 

			//ANIMATE THE BETS TO THE POT?? NEW BET AMOUNT TEXTS MUST BE 0

			print("moved bets to pot " +totalBetsAmount);
		}
	
	}
}
