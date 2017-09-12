using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

	public Canvas mapCanvas;
	public Camera mainCamera;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
		rotateMapWithCamera ();
	}

	void rotateMapWithCamera() {

		mapCanvas.transform.rotation = Quaternion.Euler(new Vector3(
			mapCanvas.transform.rotation.eulerAngles.x,
			mainCamera.transform.rotation.eulerAngles.y,
			mapCanvas.transform.rotation.eulerAngles.z
		));

	}

	void positionMapWithCamera() {
	
	}



}
