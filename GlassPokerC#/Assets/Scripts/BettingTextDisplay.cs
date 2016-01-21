using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
//using System.Linq;

public class BettingTextDisplay : MonoBehaviour {

	public Text[] chipAmountText = new Text[3];
	public Text[] betAmountText = new Text[3];

	int currentSmallBlindPos = 0;

	int currentBigBlindPos; 
	int smallBlind = 1;

	public static int currentPlayerPos;
	public static int previousPlayerPos;

	public static int currentMinRaise;

	public static List<int> activePlayerPosList;

	// Use this for initialization
	void Start () {

		int playerPos = 5;
		GameObject asdf = GameObject.Find ("chipAmount"+playerPos);
		asdf.SetActive (false);

		//USE THE ACTIVE PLAYER POSITIONS LIST TO FIND BIG BLIND POSITION
		currentBigBlindPos = currentSmallBlindPos + 1;

		//small blind chip and bet amounts
		chipAmountText [currentSmallBlindPos].text = (int.Parse(chipAmountText[currentSmallBlindPos].text) - smallBlind).ToString();
		betAmountText [currentSmallBlindPos].text = smallBlind.ToString();

		//big blind chip and bet amounts
		chipAmountText [currentBigBlindPos].text = (int.Parse(chipAmountText[currentBigBlindPos].text) - 2*smallBlind).ToString();
		betAmountText [currentBigBlindPos].text = (2*smallBlind).ToString();

		//previous player was big blind
		previousPlayerPos = currentBigBlindPos;

		//USE THE ACTIVE PLAYER POSITIONS LIST TO FIND CURRENT PLAYER POSITION
		currentPlayerPos = previousPlayerPos + 1;

		currentMinRaise = 2 * smallBlind;

	}
	
	// Update is called once per frame
	void Update () {



	}
}
