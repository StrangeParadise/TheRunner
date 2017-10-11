using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TheRunner.Tools;

public class MapTools : MonoBehaviour {

	public int radius = 150;
	public int range = 500;

	private float latitudeO;
	private float longitudeO;
	private bool firsttime;

	private Camera mainCamera;

	public GPSController IGPSController;

	// Use this for initialization
	void Start () {

		mainCamera = Camera.main;
		firsttime = true;
	}
	
	// Update is called once per frame
	void Update () {
		float latitude = IGPSController.gps.getLatitude();
		float longitude = IGPSController.gps.getLongitude();
		if (firsttime) {
			if (latitude != 0) {
				latitudeO = latitude;
				longitudeO = longitude;
				firsttime = false;
			}
		}
		mainCamera.transform.position = mapGPS (latitude, longitude);
//		mainCamera.transform.position = new Vector3 ((latitude-latitudeO)*50000, mainCamera.transform.position.y, - (longitude - longitudeO)*50000);
	}

	public Vector3 mapGPS(float latitude, float longitude){
		return new Vector3 (
			TR_Toolbox.gps_transform (latitude, longitude, latitude, longitudeO) * radius / range, 
			mainCamera.transform.position.y, 
			TR_Toolbox.gps_transform (latitude, longitude, latitudeO, longitude) * radius / range
		);
	}

}
