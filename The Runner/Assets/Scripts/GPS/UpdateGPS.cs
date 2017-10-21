using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpdateGPS : MonoBehaviour {

	public TextMesh terminal;

<<<<<<< HEAD
=======
	public GPSController IGPSController;

	// Show if u are connected
>>>>>>> 7b948da39e48bd0cba1cb12eb0e93df26bce7497
	private void Update() {
		if(Camera.main) {
			terminal.text = "Network connected!";
		}
	}
}