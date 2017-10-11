using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {


	// Canvas
	public Canvas mapCanvas;

	// Camera
	public Camera mainCam;
	public Camera backgroundCam;
	public Camera mapCam;

	// GPSController
	public GPSController IGPSController;


	// Update is called once per frame
	void Update () {
		//rotateMapWithCamera ();
		positionMapWithCamera ();
		showMap ();
	}
		
	void rotateMapWithCamera() {

//		mainCamera.transform.rotation = Quaternion.Euler(new Vector3(
//			mainCamera.transform.rotation.eulerAngles.x,
//			Mathf.Clamp(mainCamera.transform.rotation.eulerAngles.y, 0, 180),
//			mainCamera.transform.rotation.eulerAngles.z
//		));

		mapCanvas.transform.eulerAngles = new Vector3(
			mapCanvas.transform.rotation.eulerAngles.x,
			mainCam.transform.rotation.eulerAngles.y,
			mapCanvas.transform.rotation.eulerAngles.z
		);
		//print ("map canvas rotation" + mapCanvas.transform.eulerAngles.y);
		//print ("main camera rotation" + mainCamera.transform.eulerAngles.y);

	}

	void showMap () {
		if (mainCam.transform.eulerAngles.x > 50 && mainCam.transform.eulerAngles.x < 130) {
			mainCam.enabled = false;
			backgroundCam.enabled = false;
			mapCam.enabled = true;
		} else {
			mainCam.enabled = true;
			backgroundCam.enabled = true;
			mapCam.enabled = false;
		}

	}



	void positionMapWithCamera() {
		mapCanvas.transform.position = new Vector3(mainCam.transform.position.x, -635, mainCam.transform.position.z);
	}

}
