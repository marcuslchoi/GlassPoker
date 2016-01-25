using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.Networking;

public class Player : NetworkBehaviour {

	private Vector3 inputValue;

	public static int myPlayerNumber;

	void Start () {

		myPlayerNumber = Random.Range (0, 9);
		gameObject.tag = myPlayerNumber.ToString();

		//the index of my player number in active player list
		var indexOfMyPlayerNumber = BettingTextDisplay.activePlayerList.IndexOf (myPlayerNumber);

		//where I want the player to go at the table
		GameObject playerPosTarget = GameObject.Find ("Target0-" + BettingTextDisplay.activePlayerPosList [indexOfMyPlayerNumber]);

		//put the new player in position
		transform.position = playerPosTarget.transform.position; //new Vector3 (playerNumber, 0, 0);

		print (gameObject.tag);
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
