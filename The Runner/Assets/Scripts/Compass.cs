using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Compass : MonoBehaviour {
    private Camera mcamera;
	// Use this for initialization
	void Start () {
        mcamera = Camera.main;
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.position = new Vector3(mcamera.transform.position.x, this.transform.position.y, mcamera.transform.position.x);
    }
}
