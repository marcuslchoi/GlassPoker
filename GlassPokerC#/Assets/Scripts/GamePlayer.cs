using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class GamePlayer : MonoBehaviour {

	public int ID;

	//call this the stack??
	public int chipAmount;

	public Hand hand;

	//the overall points from winning hands
	public int points;

	public int wins;

	public int losses;

	//initializer
	public GamePlayer(int id) {
	
		ID = id;
	
	}

	public void Call()
	{

	}

	public void Bet()
	{

	}

	public void Fold()
	{

	}

	public void Check()
	{

	}

}
