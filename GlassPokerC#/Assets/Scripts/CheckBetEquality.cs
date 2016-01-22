using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CheckBetEquality : MonoBehaviour {

	//all bet amounts combined
	static int totalBetsAmount;

	public static void CheckIfBetsAreEqual()
	{
		//get the game object for chip and bet texts, get the BettingTextDisplay component to use betAmountText and chipAmountText
		GameObject textGameObject = GameObject.Find ("Chip and Bet Amount Texts");
		BettingTextDisplay btd = textGameObject.GetComponent<BettingTextDisplay> ();

		//the bet amount of each person
		int betAmount = 0;

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

		//if bets are all equal, move the bets to pot
		if (betsAreEqual) {
			
			totalBetsAmount = betAmount * BettingTextDisplay.activePlayerPosList.Count;

			GameObject cbeObject = GameObject.Find ("CheckBetEquality");
			CheckBetEquality cbe = cbeObject.GetComponent<CheckBetEquality> ();

			cbe.Invoke ("MoveBetsToPot", 2f);
		}
	
	}

	public void MoveBetsToPot()
	{
		//get the game object for chip and bet texts, get the BettingTextDisplay component to use betAmountText and chipAmountText
		GameObject textGameObject = GameObject.Find ("Chip and Bet Amount Texts");
		BettingTextDisplay btd = textGameObject.GetComponent<BettingTextDisplay> ();

		//add all bets to pot
		BettingTextDisplay.potAmountText.text = (int.Parse (BettingTextDisplay.potAmountText.text) + totalBetsAmount).ToString (); 

		//removing bet amount texts from table bets go into pot
		for (var i = 0; i < BettingTextDisplay.activePlayerPosList.Count; i++) {

			btd.betAmountText [BettingTextDisplay.activePlayerPosList [i]].text = "";
		}

		//ANIMATE THE BETS TO THE POT?? NEW BET AMOUNT TEXTS MUST BE 0

		print("moved bets to pot " +totalBetsAmount);
	}

}
