using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ConfirmBetButton : MonoBehaviour {

	public Text sliderValText;

	public void ConfirmBet()
	{
		//creating the BettingTextDisplay reference
		GameObject textObject = GameObject.Find("Chip and Bet Amount Texts");
		BettingTextDisplay btd = textObject.GetComponent<BettingTextDisplay> ();

		//creating the slider reference
		GameObject sliderObject = GameObject.Find ("BetSlider");
		Slider betSlider = sliderObject.GetComponent<Slider> ();

		var currentPlayerPos = BettingTextDisplay.currentPlayerPos;
		var previousPlayerPos = BettingTextDisplay.previousPlayerPos;
		var betSliderValInt = (int)betSlider.value;

		//new current minimum raise is the new bet amount (slider value) - previous player's bet amount
		BettingTextDisplay.currentMinRaise = betSliderValInt - int.Parse(btd.betAmountText[previousPlayerPos].text);

		//chip amount = chip amount + bet amount - new bet amount (betslider's value)
		btd.chipAmountText[currentPlayerPos].text = (int.Parse(btd.chipAmountText[currentPlayerPos].text) + int.Parse(btd.betAmountText[currentPlayerPos].text) - betSliderValInt).ToString();

		//bet amount of current player becomes the slider value
		btd.betAmountText [currentPlayerPos].text = betSliderValInt.ToString();

		//assign current player (before incrementing) to previous player
		BettingTextDisplay.previousPlayerPos = BettingTextDisplay.currentPlayerPos;

		//finding the new current player position based on active player position list (COPIED FROM CALLBUTTONACTION SCRIPT)
		if (BettingTextDisplay.activePlayerPosList.IndexOf(BettingTextDisplay.previousPlayerPos) == BettingTextDisplay.activePlayerPosList.Count-1) {

			BettingTextDisplay.currentPlayerPos = BettingTextDisplay.activePlayerPosList[0];


		} else {

			BettingTextDisplay.currentPlayerPos = BettingTextDisplay.activePlayerPosList[BettingTextDisplay.activePlayerPosList.IndexOf(BettingTextDisplay.previousPlayerPos) + 1];
		}

		//hide slider, slider text, confirm button
		sliderObject.SetActive(false);
		sliderValText.text = "";
		gameObject.SetActive (false);	//confirm bet button

	}
}
