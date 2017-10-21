using UnityEngine;

public class HandMapController : MonoBehaviour
{
	public float perspectiveZoomSpeed = 0.5f;        // The rate of change of the field of view in perspective mode.
	public float orthoZoomSpeed = 0.5f;        // The rate of change of the orthographic size in orthographic mode.
	public Camera mapCam;
	public Map mapScript;

	void FixedUpdate()
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

			// Change the zoom value as u zoom the screen
			if (mapCam.enabled == true) {
				mapScript.zoom -= Mathf.RoundToInt(deltaMagnitudeDiff * orthoZoomSpeed);

				// The zoom value cannot less than 10
				if (mapScript.zoom <= 10) {
					mapScript.zoom = 10;
				}

				// The zoom value cannot exceed 25
				else if(mapScript.zoom >= 25) {
					mapScript.zoom = 25;
				}
				print ("zoom ====================== " + mapScript.zoom);
			}
		}
	}
}