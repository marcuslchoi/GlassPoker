using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class DealCard : MonoBehaviour {

	public GameObject card;
	public float speed;
	public int order;

	public static List<int> activePlayersList = new List<int>();
	public static List<int> activePositionsList = new List<int>();

	public Transform target;

	public int myPlayerNumber;

	void Deal()
	{
		//for example, I am player number 5, I am at position 0
		//take active players list and don't deal card to non-active players (ie players 0-4 in this case)
		//make sure my player number goes into position 0. My position + 2 goes to position 2,
		//My position - 3 goes to position 9 - 3 (0 becomes 9 in the math). 9 is max number players
		activePlayersList.Add (myPlayerNumber);
		activePlayersList.Add (6);
		activePlayersList.Add (7);
		activePlayersList.Add (8);


		// The step size is equal to speed times frame time.
		var step = speed * Time.deltaTime;

		// Move our position a step closer to the target.
		transform.position = Vector3.Lerp(transform.position, target.position, step);

		transform.rotation = Quaternion.Slerp(transform.rotation, target.rotation, step);
	}

	// Use this for initialization
	void Start () {
		//StartCoroutine (Example ());


	}

	// Update is called once per frame
	void Update () {

		//Deal();
		Invoke ("Deal", 0.2f*order);

	}
}
