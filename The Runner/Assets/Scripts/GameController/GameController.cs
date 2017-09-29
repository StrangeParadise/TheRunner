using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

	public Canvas mapCanvas;
	public Camera mainCamera;


	// Update is called once per frame
	void Update () {
		rotateMapWithCamera ();
		positionMapWithCamera ();
	}



	void rotateMapWithCamera() {

		mainCamera.transform.rotation = Quaternion.Euler(new Vector3(
			mainCamera.transform.rotation.eulerAngles.x,
			Mathf.Clamp(mainCamera.transform.rotation.eulerAngles.y, 0, 180),
			mainCamera.transform.rotation.eulerAngles.z
		));

		mapCanvas.transform.rotation = Quaternion.Euler(new Vector3(
			mapCanvas.transform.rotation.eulerAngles.x,
			mainCamera.transform.rotation.eulerAngles.y,
			mapCanvas.transform.rotation.eulerAngles.z
		));

	}

	void positionMapWithCamera() {
		mapCanvas.transform.position = new Vector3(mainCamera.transform.position.x, -635, mainCamera.transform.position.z);
	}
}
