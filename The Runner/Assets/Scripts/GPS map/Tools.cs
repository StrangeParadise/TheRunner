﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TheRunner.Tools;

public class Tools : MonoBehaviour {

	public int radius = 150;
	public int range = 500;

	private float latitudeO;
	private float longitudeO;
	private bool firsttime;

	private Camera mainCamera;

	// Use this for initialization
	void Start () {

		mainCamera = Camera.main;
		firsttime = true;
	}
	
	// Update is called once per frame
	void Update () {
		if (firsttime) {
			float latitude = GPS.Instance.latitude;
			float longitude = GPS.Instance.longitude;
			if (latitude != 0) {
				latitudeO = latitude;
				longitudeO = longitude;
				firsttime = false;
			}
		}
	}

	public Vector3 mapGPS(float latitude, float longitude){
		return new Vector3 (
			TR_Toolbox.gps_transform (longitude, latitude, longitude, latitudeO) * radius / range, mainCamera.transform.position.y, 
			TR_Toolbox.gps_transform (longitude, latitude, longitudeO, latitude) * radius / range
		);
	}

}
