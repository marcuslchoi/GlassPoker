using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
//using System.Linq;

public class BettingTextDisplay : MonoBehaviour {

	public Text[] chipAmountText;
	public Text[] betAmountText;

	int currentSmallBlindPos = 1;

	int currentBigBlindPos; 
	int smallBlind = 1;

	public int currentPlayerPos;
	public int previousPlayerPos;

	public static int currentMinRaise;

	public static List<int> activePlayerList;
	public List<int> activePlayerPosList = new List<int>();

	//public List<int> foldedPlayerPosList = new List<int>();

	public static Text potAmountText;

	//this is a constant
	private List<int> allPlayerPosList = new List<int>(){0,1,2,3,4,5,6,7,8};

	//public int myPlayerNumber;

	// Use this for initialization
	public void ActivatePlayers () {


		//this is different for each player
//		var myPlayerNumber = Player.myPlayerNumber;
//
		//IS THIS NEEDED HERE??
//		GameObject potAmntTextObject = new GameObject ();
//		potAmntTextObject = GameObject.Find ("potAmountText");
//		potAmountText = potAmntTextObject.GetComponent<Text>();
//
//		//THE LIST OF ACTIVE PLAYERS (TO BE RETRIEVED FROM SERVER). This is used to create the active player position list
//		activePlayerList = new List<int>(){0,1,2,3,4,5,6,7,8};//{1,0}; // {myPlayerNumber,3,4,7,5,8,0};
//
//		//PUT THESE ALL IN FUNCTION THAT GETS CALLED IE ON BUTTON PRESS OF "DEAL"
//
//		//activePlayerList.Add (myPlayerNumber);
//
//		//sort the active player list so that players go in correct order and active player position list matches it	
//		activePlayerList.Sort ();
//
//		//THIS MUST BE CREATED AFTER THE PLAYER ENTERS!!!!
//
//		//putting players in position with myPlayerNumber at position 0
//		//make sure my player number goes into position 0. My position + 2 goes to position 2,
//		//My position - 3 goes to position allPlayerPosList.Count - 3
//		foreach (int activePlayerNumber in activePlayerList)
//		{
//			if (activePlayerNumber >= myPlayerNumber) {
//
//				activePlayerPosList.Add (activePlayerNumber - myPlayerNumber); 
//			
//			} else {
//			
//				activePlayerPosList.Add (allPlayerPosList.Count - (myPlayerNumber - activePlayerNumber));
//			
//			}
//		}
//
//		foreach (int activePlayerPos in activePlayerPosList) {
//			print ("a p p "+activePlayerPos);
//		}
		GameObject playerObj = GameObject.Find("Player(Clone)");
		Player player = playerObj.GetComponent<Player> ();

		int myPlayerNumber = player.myPlayerNumber;

		Player myPlayer = GameObject.FindWithTag (myPlayerNumber.ToString ()).GetComponent<Player> ();
	
		myPlayer.GeneratePlayerPosList ();
		//place each player in position based on their player number and associated active player position list
		myPlayer.PlacePlayersInPosition ();


//		//remove active player positions from inactivePlayerPosList
//		var inactivePlayerPosList = allPlayerPosList;
//		foreach (int activePlayerPos in activePlayerPosList) {
//
//			inactivePlayerPosList.Remove (activePlayerPos);
//		}

		//inactivate player positions that are not in active player positions list
		GameObject playerObject = new GameObject();
		foreach (int playerPos in allPlayerPosList) {

			if (!activePlayerPosList.Contains (playerPos)) {
				
				playerObject = GameObject.Find ("chipAmount" + playerPos);
				playerObject.SetActive (false);

				playerObject = GameObject.Find ("betAmount" + playerPos);
				playerObject.SetActive (false);

				playerObject = GameObject.Find ("Card0-" + playerPos);
				playerObject.SetActive (false);

				playerObject = GameObject.Find ("Card1-" + playerPos);
				playerObject.SetActive (false);

			}
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
	

}
