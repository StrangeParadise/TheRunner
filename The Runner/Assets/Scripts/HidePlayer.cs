using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HidePlayer : MonoBehaviour {

	public float range = 0.3f;
	private Camera mcamera;

	// Use this for initialization
	void Start()
	{
		mcamera = Camera.main;
	}

	// Update is called once per frame
	void Update()
	{
		if (Mathf.Abs (this.transform.position.x - mcamera.transform.position.x) < range
		    && Mathf.Abs (this.transform.position.z - mcamera.transform.position.z) < range) {
			this.gameObject.SetActive (false);

		} else {
			this.gameObject.SetActive (true);

		}
		//this.transform.position = new Vector3(mcamera.transform.position.x, this.transform.position.y, mcamera.transform.position.x);

	}
}
