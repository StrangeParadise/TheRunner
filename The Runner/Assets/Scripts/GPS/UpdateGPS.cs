using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpdateGPS : MonoBehaviour {

	public TextMesh terminal;

	public GPSController IGPSController;

	// Show if u are connected
	private void Update() {
		if(Camera.main) {
			terminal.text = "Network connected!";
		}
	}
}