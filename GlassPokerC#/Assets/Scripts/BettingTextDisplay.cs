using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
//using System.Linq;

public class BettingTextDisplay : MonoBehaviour {

	public Text[] chipAmountText;
	public Text[] betAmountText;

	public int currentSmallBlindPos;

	int currentBigBlindPos; 
	int smallBlind = 1;

	public static int currentPlayerPos;
	public static int previousPlayerPos;

	public static int currentMinRaise;

	public static List<int> activePlayerList;
	public static List<int> activePlayerPosList = new List<int>();
	public static List<int> foldedPlayerPosList = new List<int>();

	public static Text potAmountText;

	//this is a constant
	private List<int> allPlayerPosList = new List<int>(){0,1,2,3,4,5,6,7,8};

	public int myPlayerNumber;

	// Use this for initialization
	void Start () {

		//DO ALL THIS IN A DIFFERENT FUNCTION THAT GETS CALLED EVERY NEW GAME??
		//USE THE FOLDED PLAYER POS LIST??

		GameObject potAmntTextObject = new GameObject ();
		potAmntTextObject = GameObject.Find ("potAmountText");
		potAmountText = potAmntTextObject.GetComponent<Text>();

		//THE LIST OF ACTIVE PLAYERS (TO BE RETRIEVED FROM SERVER). This is used to create the active player position list
		activePlayerList = new List<int>(){myPlayerNumber,3,4,7,5,8,0};

		//sort the active player list so that players go in correct order	
		activePlayerList.Sort ();

		//putting players in position with myPlayerNumber at position 0
		//make sure my player number goes into position 0. My position + 2 goes to position 2,
		//My position - 3 goes to position allPlayerPosList.Count - 3
		foreach (int activePlayerNumber in activePlayerList)
		{
			if (activePlayerNumber >= myPlayerNumber) {

				activePlayerPosList.Add (activePlayerNumber - myPlayerNumber); 
			
			} else {
			
				activePlayerPosList.Add (allPlayerPosList.Count - (myPlayerNumber - activePlayerNumber));
			
			}
		}
			
		//activePlayerPosList.Sort ();

		//remove active player positions from inactivePlayerPosList
		var inactivePlayerPosList = allPlayerPosList;
		foreach (int activePlayerPos in activePlayerPosList) {

			inactivePlayerPosList.Remove (activePlayerPos);
		}

		//inactivate the bet/chip amounts and cards for inactive player positions
		GameObject inactiveObject = new GameObject();
		foreach (int inactivePlayerPos in inactivePlayerPosList) {

			inactiveObject = GameObject.Find ("chipAmount"+inactivePlayerPos);
			inactiveObject.SetActive (false);

			inactiveObject = GameObject.Find ("betAmount"+inactivePlayerPos);
			inactiveObject.SetActive (false);

			inactiveObject = GameObject.Find ("Card0-"+inactivePlayerPos);
			inactiveObject.SetActive (false);

			inactiveObject = GameObject.Find ("Card1-"+inactivePlayerPos);
			inactiveObject.SetActive (false);
		}


		//find big blind position
		if (activePlayerPosList.IndexOf (currentSmallBlindPos) == activePlayerPosList.Count - 1) {

			currentBigBlindPos = activePlayerPosList[0];

		} else {
			
			currentBigBlindPos = activePlayerPosList [activePlayerPosList.IndexOf (currentSmallBlindPos) + 1];
		}

		//small blind chip and bet amounts
		chipAmountText [currentSmallBlindPos].text = (int.Parse(chipAmountText[currentSmallBlindPos].text) - smallBlind).ToString();
		betAmountText [currentSmallBlindPos].text = smallBlind.ToString();

		//big blind chip and bet amounts
		chipAmountText [currentBigBlindPos].text = (int.Parse(chipAmountText[currentBigBlindPos].text) - 2*smallBlind).ToString();
		betAmountText [currentBigBlindPos].text = (2*smallBlind).ToString();

		//previous player was big blind
		previousPlayerPos = currentBigBlindPos;

		//find the current player position
		if (activePlayerPosList.IndexOf (previousPlayerPos) == activePlayerPosList.Count - 1) {

			currentPlayerPos = activePlayerPosList [0];

		} else {

			currentPlayerPos = activePlayerPosList [activePlayerPosList.IndexOf (previousPlayerPos) + 1];
		}

		//the minimum raise at beginning of game is the big blind
		currentMinRaise = 2 * smallBlind;

	}
	
	// Update is called once per frame
	void Update () {



	}
}
