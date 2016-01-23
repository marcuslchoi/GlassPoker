using UnityEngine;
using System.Collections;

public class FlopDeal : MonoBehaviour {

	public GameObject[] cards;
	//public float speed;
	//public int[] orders;

	public GameObject[] targets;

	public void Flop()
	{

		StartCoroutine(MoveCards (cards, targets, 0.2f, 0.1f));
	}

	IEnumerator MoveCards(GameObject[] cards, GameObject[] targets, float overTime, float timeBetweenCards)
	{
		float startTime;

		//animate each flop card to its target over time "overTime"
		for (var i = 0; i < cards.Length; i++) {
			
			startTime = Time.time;

			while (Time.time < startTime + overTime) {
				
				cards [i].transform.position = Vector3.Lerp (cards [i].transform.position, targets [i].transform.position, (Time.time - startTime) / overTime);
				yield return null;
			
			}
			cards [i].transform.position = targets [i].transform.position;

			//time between moving each card
			yield return new WaitForSeconds (timeBetweenCards);
		}
	}
}
