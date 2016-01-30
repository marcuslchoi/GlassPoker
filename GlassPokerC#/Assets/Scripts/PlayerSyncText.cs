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


	void Start() {

		otherSyncIntText = GameObject.Find ("OtherSyncIntText").GetComponent<Text> ();
		mySyncIntText = GameObject.Find ("MySyncIntText").GetComponent<Text> ();

		//MOVE THE TEXTS HERE IN RELATION TO THEIR PLAYER NUMBERS
		mySyncIntText.rectTransform.localPosition = new Vector3 (200, 79, 0);
		otherSyncIntText.rectTransform.localPosition = new Vector3 (200, 0, 0);
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

		} else {

			//I see my own syncInt
			mySyncIntText.text = "My Int: "+syncInt.ToString ();
		}
	}

	//runs on the server, called on my client
	[Command]
	void CmdProvideTextToServer(int integer)
	{
		syncInt = integer;
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

			CmdProvideTextToServer (i);

		}
	}

	int currentBet = 2;

	[ClientCallback]
	public void Call()
	{
		if (isLocalPlayer) {

			print ("called");

			i -= currentBet;
			CmdProvideTextToServer (i);

		}
	}
}