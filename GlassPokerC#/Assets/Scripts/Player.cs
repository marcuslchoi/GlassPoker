using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.Networking;
using System.Collections.Generic;

public class Player : NetworkBehaviour {

	private Vector3 inputValue;

	//not static because each player has different player number
	public int myPlayerNumber;

	//current number of players 
	static int players;

	static List<int> playerNumbers = new List<int>();

	//this is a constant (needed in betting text display also????)
	private List<int> allPlayerPosList = new List<int>(){0,1,2,3,4,5,6,7,8};

	List<int> testPosList = new List<int>();

	void Start () {

		//players++;
//		print ("players "+players);
//		myPlayerNumber = Random.Range (0, 9);
//
//		//tag the player with their player number so can find with tag
//		gameObject.tag = myPlayerNumber.ToString();
//
//		print ("player number "+gameObject.tag);
//
//		playerNumbers.Add (myPlayerNumber);
//
//		GeneratePlayerPosList ();
		//PlacePlayersInPosition ();

	}

	public override void OnStartLocalPlayer() {

		//make my player red
		GetComponent<MeshRenderer>().material.color = Color.red;



		players++;
		print ("players "+players);
		myPlayerNumber = Random.Range (0, 9);

		Text pn = GameObject.Find ("MyPlayerNumber").GetComponent<Text> ();
		pn.text = "Player Number "+myPlayerNumber;

		//tag the player with their player number so can find with tag
		gameObject.tag = myPlayerNumber.ToString();

		//print ("player number "+gameObject.tag);

		playerNumbers.Add (myPlayerNumber);

		GeneratePlayerPosList ();

		PlacePlayersInPosition ();

		//First, set the default camera component of Camera child object to disabled (in inspector). 
		//This line enables it only for local player
		//GetComponentInChildren<Camera> ().enabled = true;




		print ("on start local player");



	}

	//[ClientRpc]
	public void GeneratePlayerPosList ()
	{
		//BettingTextDisplay btd = GameObject.Find ("Chip and Bet Amount Texts").GetComponent<BettingTextDisplay> ();

		//THE LIST OF ACTIVE PLAYERS (TO BE RETRIEVED FROM SERVER). This is used to create the active player position list
		//BettingTextDisplay.activePlayerList = new List<int>(){0,1,2,3,4,5,6,7,8}; //playerNumbers; //{1,0}; // {myPlayerNumber,3,4,7,5,8,0};

		//sort the active player list so that players go in correct order and active player position list matches it	
		BettingTextDisplay.activePlayerList.Sort ();




		//THIS IS DIFFERENT ON EACH DEVICE DEPENDING ON THE PLAYER NUMBER
		foreach (int activePlayerNumber in BettingTextDisplay.activePlayerList)
		{
			if (activePlayerNumber >= myPlayerNumber) {

				BettingTextDisplay.activePlayerPosList.Add (activePlayerNumber - myPlayerNumber); 
				testPosList.Add (activePlayerNumber - myPlayerNumber);

			} else {

				BettingTextDisplay.activePlayerPosList.Add (allPlayerPosList.Count - (myPlayerNumber - activePlayerNumber));
				testPosList.Add (allPlayerPosList.Count - (myPlayerNumber - activePlayerNumber));
			}
		}

		foreach (int activePlayerPos in BettingTextDisplay.activePlayerPosList) {
			//print ("a p p "+activePlayerPos);

		}
		foreach (int testPlayerPos in testPosList) {
			print ("t a p p "+testPlayerPos);

		}
	}

	//SHOULD THIS BE STATIC?? IT PLACES PLAYERS IN POSITION BUT USES ACTIVE PLAYER POS LIST, DIFF FOR EACH DEVICE
	//[ClientRpc]
	public void PlacePlayersInPosition() {

		print ("from place players in position: my player number: " + myPlayerNumber);
		//BettingTextDisplay btd = GameObject.Find ("Chip and Bet Amount Texts").GetComponent<BettingTextDisplay> ();

		//puts each player in their position
		for (var i = 0; i < playerNumbers.Count; i++)
		{
			//the index of player number in active player list
			var indexOfPlayerNumber = BettingTextDisplay.activePlayerList.IndexOf (playerNumbers[i]);

			//where I want the player to go at the table
			//GameObject playerPosTarget = GameObject.Find ("Target0-" + BettingTextDisplay.activePlayerPosList [indexOfPlayerNumber]);
			GameObject playerPosTarget = GameObject.Find ("Target0-" + testPosList [indexOfPlayerNumber]);

		
			//get the current player
			GameObject playerObj = GameObject.FindWithTag(playerNumbers[i].ToString ());
			Player player = playerObj.GetComponent<Player> ();

			//put the current player in position
			player.transform.position = playerPosTarget.transform.position; //new Vector3 (playerNumber, 0, 0);
		}

	}
		


	// moves the local player on arrow key press
	void Update () {

		if (!isLocalPlayer) {
			return;
		}
		inputValue.x = CrossPlatformInputManager.GetAxis ("Horizontal");
		inputValue.y = 0f;
		inputValue.z = CrossPlatformInputManager.GetAxis ("Vertical");

		transform.Translate (inputValue);

	}


}
