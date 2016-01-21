using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class DealCard : MonoBehaviour {

	public GameObject card;
	public float speed;
	public int order;

	public Transform target;

	void Deal()
	{
		// The step size is equal to speed times frame time.
		var step = speed * Time.deltaTime;

		// Move our position a step closer to the target.
		transform.position = Vector3.Lerp(transform.position, target.position, step);

		transform.rotation = Quaternion.Slerp(transform.rotation, target.rotation, step);
	}

	// Use this for initialization
	void Start () {
		

	}

	// Update is called once per frame
	void Update () {

		float timeDelay = 0.05f;
		//Deal();
		Invoke ("Deal", timeDelay*order);

	}
}
