using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.Networking;
using System.Collections.Generic;

public class Player : NetworkBehaviour {

	private Vector3 inputValue;

	public int myPlayerNumber;

	//current number of players 
	static int players;

	static List<int> playerNumbers = new List<int>();

	//this is a constant (needed in betting text display also????)
	private List<int> allPlayerPosList = new List<int>(){0,1,2,3,4,5,6,7,8};

	void Start () {

		players++;
		print ("players "+players);
		myPlayerNumber = Random.Range (0, 9);
		gameObject.tag = myPlayerNumber.ToString();

		playerNumbers.Add (myPlayerNumber);

		print ("player number "+gameObject.tag);

	}

	public void GeneratePlayerPosList ()
	{
		BettingTextDisplay btd = GameObject.Find ("Chip and Bet Amount Texts").GetComponent<BettingTextDisplay> ();

		//THE LIST OF ACTIVE PLAYERS (TO BE RETRIEVED FROM SERVER). This is used to create the active player position list
		BettingTextDisplay.activePlayerList = new List<int>(){0,1,2,3,4,5,6,7,8}; //playerNumbers; //{1,0}; // {myPlayerNumber,3,4,7,5,8,0};

		//sort the active player list so that players go in correct order and active player position list matches it	
		BettingTextDisplay.activePlayerList.Sort ();


		//THIS IS DIFFERENT ON EACH DEVICE DEPENDING ON THE PLAYER NUMBER
		foreach (int activePlayerNumber in BettingTextDisplay.activePlayerList)
		{
			if (activePlayerNumber >= myPlayerNumber) {

				btd.activePlayerPosList.Add (activePlayerNumber - myPlayerNumber); 

			} else {

				btd.activePlayerPosList.Add (allPlayerPosList.Count - (myPlayerNumber - activePlayerNumber));

			}
		}

		foreach (int activePlayerPos in btd.activePlayerPosList) {
			print ("a p p "+activePlayerPos);
		}
	}

	//SHOULD THIS BE STATIC?? IT PLACES PLAYERS IN POSITION BUT USES ACTIVE PLAYER POS LIST, DIFF FOR EACH DEVICE
	public void PlacePlayersInPosition() {

		BettingTextDisplay btd = GameObject.Find ("Chip and Bet Amount Texts").GetComponent<BettingTextDisplay> ();

		for (var i = 0; i < playerNumbers.Count; i++)
		{
			//the index of player number in active player list
			var indexOfPlayerNumber = BettingTextDisplay.activePlayerList.IndexOf (playerNumbers[i]);

			//where I want the player to go at the table
			GameObject playerPosTarget = GameObject.Find ("Target0-" + btd.activePlayerPosList [indexOfPlayerNumber]);

			//get the current player
			GameObject playerObj = GameObject.FindWithTag(playerNumbers[i].ToString ());
			Player player = playerObj.GetComponent<Player> ();

			//put the current player in position
			player.transform.position = playerPosTarget.transform.position; //new Vector3 (playerNumber, 0, 0);
		}

	}




	// Update is called once per frame
	void Update () {

		if (!isLocalPlayer) {
			return;
		}
		inputValue.x = CrossPlatformInputManager.GetAxis ("Horizontal");
		inputValue.y = 0f;
		inputValue.z = CrossPlatformInputManager.GetAxis ("Vertical");

		transform.Translate (inputValue);
	}

	public override void OnStartLocalPlayer() {

		//First, set the default camera component of Camera child object to disabled (in inspector). 
		//This line enables it only for local player
		//GetComponentInChildren<Camera> ().enabled = true;
	}
}
