using UnityEngine;
using System.Collections;

public class FlopDeal : MonoBehaviour {

	public GameObject[] cards;
	//public float speed;
	//public int[] orders;

	public GameObject[] targets;

	public void Flop()
	{

		StartCoroutine(MoveCards (cards[0].transform.position, targets[0].transform.position, 0.2f, 0));

		//StartCoroutine(MoveObject (cards[1].transform.position, targets[1].transform.position, 0.5f, 1));

		//StartCoroutine(MoveObject (cards[2].transform.position, targets[2].transform.position, 0.5f, 2));

	}

	IEnumerator MoveCards(Vector3 sourcev3, Vector3 targetv3, float overTime, int i)
	{

		float startTime = Time.time;

		while(Time.time < startTime + overTime)
		{
			cards[i].transform.position = Vector3.Lerp(sourcev3, targetv3, (Time.time - startTime)/overTime);
			yield return null;
			
		}
		cards[i].transform.position = targetv3;

		yield return new WaitForSeconds (0.1f);

		startTime = Time.time;

		while(Time.time < startTime + overTime)
		{
			cards[1].transform.position = Vector3.Lerp(cards[1].transform.position, targets[1].transform.position, (Time.time - startTime)/overTime);
			yield return null;

		}
		cards[1].transform.position = targets[1].transform.position;

		yield return new WaitForSeconds (0.1f);

		startTime = Time.time;

		while(Time.time < startTime + overTime)
		{
			cards[2].transform.position = Vector3.Lerp(cards[2].transform.position, targets[2].transform.position, (Time.time - startTime)/overTime);
			yield return null;

		}
		cards[2].transform.position = targets[2].transform.position;

	}
}
