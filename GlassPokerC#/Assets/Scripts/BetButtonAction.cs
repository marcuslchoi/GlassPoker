using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class BetButtonAction : MonoBehaviour {

	public Text sliderValText;
	public GameObject confirmBetButton;

	public GameObject sliderObject;
	Slider betSlider;

	public void showBetSlider()
	{
		sliderObject.SetActive (true);
		confirmBetButton.SetActive (true);

		sliderObject = GameObject.Find ("BetSlider");
		betSlider = sliderObject.GetComponent<Slider> ();

		//get the game object for chip and bet texts, get the BettingTextDisplay component
		GameObject textGameObject = GameObject.Find ("Chip and Bet Amount Texts");
		BettingTextDisplay btd = textGameObject.GetComponent<BettingTextDisplay> ();

		//slider min value is minimum raise plus previous player bet amount
		betSlider.minValue = BettingTextDisplay.currentMinRaise + int.Parse(btd.betAmountText [BettingTextDisplay.previousPlayerPos].text);

		//slider max value is current player's total chips (chip amount plus bet amount before raise)
		int possibleMaxValue = int.Parse(btd.chipAmountText [BettingTextDisplay.currentPlayerPos].text) + int.Parse(btd.betAmountText [BettingTextDisplay.currentPlayerPos].text);

		//check if min value exceeds my total chips. If so, All in.
		if (betSlider.minValue >= possibleMaxValue) {
		
			//case all in
			//HIDE SLIDER, SLIDER VAL TEXT SHOULD READ "ALL IN? $ AMOUNT"
			betSlider.maxValue = betSlider.minValue;
			
		} else {
		
			betSlider.maxValue = possibleMaxValue;
		
		}

		sliderValText.text = betSlider.value.ToString();
	}
}
