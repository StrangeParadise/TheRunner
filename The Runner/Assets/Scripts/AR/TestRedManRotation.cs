using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestRedManRotation : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
		Input.compass.enabled = true;
		Input.location.Start ();

		transform.RotateAround (Vector3.zero, Vector3.up, Input.compass.trueHeading);

	}
}
