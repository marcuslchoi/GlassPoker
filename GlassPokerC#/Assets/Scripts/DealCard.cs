using UnityEngine;
using System.Collections;

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


//	IEnumerator Example() {
//		print(Time.time);
//		yield return new WaitForSeconds(2);
//		print(Time.time);
//	}

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
