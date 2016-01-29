using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using UnityEngine.UI;

public class TestTextChanged : NetworkBehaviour {

	//server automatically transmits this value to all clients when it changes
	//[SyncVar]
	private Text syncText;

	public static int i;

	// Update is called once per frame
	void Start () {

		syncText = GameObject.Find ("TestText").GetComponent<Text> ();

		TransmitTextChange ();
	}

	//runs on the server, not in any clients
	//[Command]
	void CmdProvideNewTextToServer(string newString)
	{
		syncText.text = newString;

	}



	//runs only on the clients
	//[ClientCallback]
	public void TransmitTextChange()
	{
		i++;
		CmdProvideNewTextToServer ("CHANGED"+i);

	}
}

