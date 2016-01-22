using UnityEngine;
using System.Collections;

public class FlopDeal : MonoBehaviour {

	public GameObject card;
	//public float speed;
	//public int[] orders;

	public GameObject target;

	public void Flop()
	{
		print ("flop called");
		// The step size is equal to speed times frame time.
//		var step = speed * Time.deltaTime;
//
//		for (var i = 0; i < cards.Length; i++) {
//			
//			// Move our position a step closer to the target.
//			cards[i].transform.position = Vector3.Lerp (cards[i].transform.position, targets[i].position, step);
//
//		}
		//transform.rotation = Quaternion.Slerp(transform.rotation, target.rotation, step);
	
//		GameObject cardObject = GameObject.Find ("Sphere");
//		Vector3 cardv3 = cardObject.transform.position;

		//GameObject targetObject = GameObject.Find ("TargetFlop1");
		Vector3 targetv3 = target.transform.position;

//		GameObject flopDealObject = GameObject.Find ("FlopDeal");
//		FlopDeal fd = flopDealObject.GetComponent<FlopDeal> ();

		GameObject card2 = GameObject.Find ("CardFlop2");
		Vector3 target2v3 = GameObject.Find ("TargetFlop2").transform.position;

		StartCoroutine(MoveObject (card.transform.position, targetv3, 1f));

		StartCoroutine(MoveObject (card2.transform.position, target2v3, 1f));

		//StartCoroutine(MoveObject (card3.transform.position, target3v3, 1f));

	}

	void Start()
	{
		//Flop();
	}



	IEnumerator MoveObject(Vector3 sourcev3, Vector3 targetv3, float overTime)
	{

		print ("move object called");
		float startTime = Time.time;

		while(Time.time < startTime + overTime)
		{
			card.transform.position = Vector3.Lerp(sourcev3, targetv3, (Time.time - startTime)/overTime);
			yield return null;
			
		}
			card.transform.position = targetv3;
	}
}
