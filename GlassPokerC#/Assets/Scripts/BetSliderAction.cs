using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class BetSliderAction : MonoBehaviour {

	public Text sliderValText;
	public GameObject sliderObject;
	Slider betSlider;
	public GameObject confirmBetButton;

	void Start () {

		//when game starts, the slider is inactive. Slider is activated when bet/raise button is pressed
		gameObject.SetActive(false);
		sliderValText.text = "";
		confirmBetButton.SetActive (false);
	}
	
	public void sliderValueChanged()
	{
		sliderObject = GameObject.Find ("BetSlider");
		betSlider = sliderObject.GetComponent<Slider> ();

		//slider value text is equal to the slider value
		sliderValText.text = betSlider.value.ToString();
	}
}
