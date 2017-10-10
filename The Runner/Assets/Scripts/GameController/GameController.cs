using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {


	// Canvas
	public Canvas mapCanvas;

	// Camera
	public Camera mainCamera;

	// GPSController
	public GPSController IGPSController;


	// Update is called once per frame
	void Update () {
		rotateMapWithCamera ();
		positionMapWithCamera ();
	}
		
	void rotateMapWithCamera() {
		mapCanvas.transform.eulerAngles = new Vector3(
			mapCanvas.transform.rotation.eulerAngles.x,
			mainCamera.transform.rotation.eulerAngles.y,
			mapCanvas.transform.rotation.eulerAngles.z
		);
	}

	void positionMapWithCamera() {
		mapCanvas.transform.position = new Vector3(mainCamera.transform.position.x, -635, mainCamera.transform.position.z);
	}

}
