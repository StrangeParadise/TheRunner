﻿using UnityEngine;

public class HandMapController : MonoBehaviour
{
	public float perspectiveZoomSpeed = 0.5f;        // The rate of change of the field of view in perspective mode.
	public float orthoZoomSpeed = 0.5f;        // The rate of change of the orthographic size in orthographic mode.
	public Camera mapCam;
	public Map mapScript;

	void Update()
	{
		// If there are two touches on the device...
		if (Input.touchCount == 2)
		{
			// Store both touches.
			Touch touchZero = Input.GetTouch(0);
			Touch touchOne = Input.GetTouch(1);

			// Find the position in the previous frame of each touch.
			Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
			Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;

			// Find the magnitude of the vector (the distance) between the touches in each frame.
			float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
			float touchDeltaMag = (touchZero.position - touchOne.position).magnitude;

			// Find the difference in the distances between each frame.
			float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;

			if (mapCam.enabled == true) {
				mapScript.zoom -= Mathf.RoundToInt(deltaMagnitudeDiff * orthoZoomSpeed);
				if (mapScript.zoom <= 5) {
					mapScript.zoom = 5;
				}
				else if(mapScript.zoom >= 30) {
					mapScript.zoom = 30;
				}
				print ("zoom ====================== " + mapScript.zoom);
			}
		}
	}
}