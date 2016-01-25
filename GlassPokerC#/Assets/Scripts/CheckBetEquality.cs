using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class CheckBetEquality : MonoBehaviour {

	//all bet amounts combined
	static int totalBetsAmount;

	//BettingTextDisplay btd = GameObject.Find ("Chip and Bet Amount Texts").GetComponent<BettingTextDisplay> ();

	public static void CheckIfBetsAreEqual()
	{
		BettingTextDisplay btd = GameObject.Find ("Chip and Bet Amount Texts").GetComponent<BettingTextDisplay> ();
		//the bet amount of each person
		int betAmount = 0;

		bool betsAreEqual = false;

		//check if all bets are equal. If so, move bets to pot and begin next round or showdown
		for (var i = 0; i < btd.activePlayerPosList.Count-1; i++) {

			if (btd.betAmountText [btd.activePlayerPosList[i]].text != btd.betAmountText [btd.activePlayerPosList[i + 1]].text) {
			
				break;
			
			} else if (i == btd.activePlayerPosList.Count - 2) {
				
				betAmount = int.Parse(btd.betAmountText[btd.activePlayerPosList[i]].text);

				betsAreEqual = true;
			}
		}

		//if bets are all equal, move the bets to pot
		if (betsAreEqual) {
			
			totalBetsAmount = betAmount * btd.activePlayerPosList.Count;

			GameObject cbeObject = GameObject.Find ("CheckBetEquality");
			CheckBetEquality cbe = cbeObject.GetComponent<CheckBetEquality> ();

			//move bets to pot after delay
			cbe.Invoke ("MoveBetsToPot", 2f);
		}
	
	}

	public void MoveBetsToPot()
	{
		BettingTextDisplay btd = GameObject.Find ("Chip and Bet Amount Texts").GetComponent<BettingTextDisplay> ();
		//add all bets to pot
		BettingTextDisplay.potAmountText.text = (int.Parse (BettingTextDisplay.potAmountText.text) + totalBetsAmount).ToString (); 

		//removing bet amount texts from table bets go into pot
		for (var i = 0; i < btd.activePlayerPosList.Count; i++) {

			btd.betAmountText [btd.activePlayerPosList [i]].text = "";
		}

		//ANIMATE THE BETS TO THE POT??
		print("moved bets to pot " +totalBetsAmount);

		//Deal the flop
		GameObject flopObject = GameObject.Find("FlopDeal");
		FlopDeal fd = flopObject.GetComponent<FlopDeal>();

		fd.Flop ();

	}

}
