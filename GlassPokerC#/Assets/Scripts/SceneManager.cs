using UnityEngine;
using System.Collections;

public class SceneManager : MonoBehaviour {

	public void LoadScene(string scene)
	{
		//SceneManager.LoadScene (scene);
		Application.LoadLevel(scene);

	}
}
