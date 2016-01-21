using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class BetSliderAction : MonoBehaviour {

	public Text sliderValText;
	public GameObject sliderObject;
	Slider betSlider;
	public GameObject confirmBetButton;

	void Start () {

		gameObject.SetActive(false);
		sliderValText.text = "";
		confirmBetButton.SetActive (false);
	}
	
	public void sliderValueChanged()
	{
		sliderObject = GameObject.Find ("BetSlider");
		betSlider = sliderObject.GetComponent<Slider> ();

		sliderValText.text = betSlider.value.ToString();
	}
}
