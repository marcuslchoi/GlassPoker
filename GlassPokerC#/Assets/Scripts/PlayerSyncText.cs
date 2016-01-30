using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using UnityEngine.UI;

public class PlayerSyncText : NetworkBehaviour {

	//server automatically transmits this to all clients when value changes
	//ensures that every other player knows my text (my text is synced on all other players as my unique text)
	[SyncVar]
	private int syncInt;

	private Text otherSyncIntText;

	private Text mySyncIntText;

	[SyncVar]
	private int syncPlayerNumber;

	private Text myPlayerNumText;

	private Text otherPlayerNumText;

	int tempPlayerNum;

	void Start() {

		otherSyncIntText = GameObject.Find ("OtherSyncIntText").GetComponent<Text> ();
		mySyncIntText = GameObject.Find ("MySyncIntText").GetComponent<Text> ();

		//MOVE THE TEXTS HERE IN RELATION TO THEIR PLAYER NUMBERS
		mySyncIntText.rectTransform.localPosition = new Vector3 (200, 79, 0);
		otherSyncIntText.rectTransform.localPosition = new Vector3 (200, 0, 0);

		tempPlayerNum = 5;//Random.Range (0, 9);
	
		GameObject myPlayerNumObj = GameObject.Find ("MyPlayerNumber");

		//tag the player number text with its player number 
		myPlayerNumObj.tag = tempPlayerNum.ToString();

		myPlayerNumText = myPlayerNumObj.GetComponent<Text> ();

		otherPlayerNumText = GameObject.Find ("OtherPlayerNumber").GetComponent<Text> ();

		print ("start");

		//HighlightPlayerNumWithTag (tempPlayerNum);

	}

	public void HighlightPlayerNumWithTag(int tag) {
		
		Text highlightedPlayerNum = GameObject.FindWithTag("5").GetComponent<Text> ();
		print (GameObject.Find ("MyPlayerNumber").tag);
		print ("tmp " + tempPlayerNum);
		highlightedPlayerNum.color = Color.yellow;
	}

	public override void OnStartLocalPlayer() {
	
		//IS THIS ONLY CALLED ON HOST??
		//syncPlayerNumber = Random.Range (0, 9);
	}

	// Update is called once per frame
	void FixedUpdate () {

		TransmitText ();
		UpdateText ();

	}

	void UpdateText()
	{
		//when called on other player's machine, I see their player's syncInt
		if (!isLocalPlayer) {

			//I see other player's syncInt
			otherSyncIntText.text = "Other Player's Int: "+syncInt.ToString ();
			otherPlayerNumText.text = "Other Player Number "+syncPlayerNumber;

			GameObject.Find ("OtherPlayerNumber").tag = syncPlayerNumber.ToString ();

			//otherPlayerNumText.color = Color.yellow;

		} else {

			//I see my own syncInt
			mySyncIntText.text = "My Int: "+syncInt.ToString ();

			myPlayerNumText.text = "My Player Number "+syncPlayerNumber;

			GameObject.Find ("MyPlayerNumber").tag = syncPlayerNumber.ToString ();
		}
	}

	//runs on the server, called on my client
	[Command]
	void CmdProvideTextToServer(int integer, int playerNum)
	{
		syncInt = integer;
		syncPlayerNumber = playerNum;
	}

	public int i;
	//runs only on the client, called in Update
	[ClientCallback]
	void TransmitText()
	{
		//only the local player's int is the one provided to server
		if (isLocalPlayer) {

			if (Input.GetKeyDown ("space")) {

				i++;

				print ("local player " + syncInt);

			} else if (Input.GetKeyDown ("return")) {

				Call ();
			}

			CmdProvideTextToServer (i, tempPlayerNum);

		}
	}

	int currentBet = 2;

	[ClientCallback]
	public void Call()
	{
		if (isLocalPlayer) {

			print ("called");

			i -= currentBet;
			CmdProvideTextToServer (i, syncPlayerNumber);

		}
	}
}