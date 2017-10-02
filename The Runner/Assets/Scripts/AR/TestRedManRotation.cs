using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestRedManRotation : MonoBehaviour {

	private bool loaded = false;
	private bool confirmed = false;

	// Use this for initialization
	void Start () {
		
		Input.compass.enabled = true;
		Input.location.Start ();

		Debug.Log ("fuckfuck:" + Input.compass.trueHeading);
	}

	void Update () {
		
		if (!loaded && !confirmed) {
			
			if (Input.compass.trueHeading != 0) {
				transform.RotateAround (Vector3.zero, Vector3.up, Input.compass.trueHeading);
				Debug.Log ("fuckfuck2 confirmed:" + Input.compass.trueHeading);
				loaded = true;
			} 
		
		} else if (!confirmed){
			if (Input.compass.trueHeading != 0) {
				transform.RotateAround (Vector3.zero, Vector3.up, Input.compass.trueHeading);
				Debug.Log ("fuckfuck3 confirmed:" + Input.compass.trueHeading);
				confirmed = true;
			}
		}

		Debug.Log ("z rotation: " + transform.rotation + " | " + transform.position);
	} 
}
