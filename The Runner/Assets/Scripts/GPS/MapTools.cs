using UnityEngine;
using TheRunner.Tools;

public class MapTools : MonoBehaviour {

	public int radius = 150;
	public int range = 500;

	private float latitudeO;
	private float longitudeO;
	private bool firstTime;

	private Camera mainCamera;

	// Use this for initialization
	void Start () {

		mainCamera = Camera.main;
		firstTime = true;
	}
	
	// Update is called once per frame
	void Update () {
        float latitude = GPSData.s_Instance.getLatitude();
        float longitude = GPSData.s_Instance.getLongitude();
		if (firstTime) {
			if (latitude != 0) {
				latitudeO = latitude;
				longitudeO = longitude;
				firstTime = false;
			}
		}
		mainCamera.transform.position = mapGPS (latitude, longitude);
	}

	public Vector3 mapGPS(float latitude, float longitude){
		return new Vector3 (
			TR_Toolbox.gps_transform (latitude, longitude, latitude, longitudeO) * radius / range, 
			mainCamera.transform.position.y, 
			TR_Toolbox.gps_transform (latitude, longitude, latitudeO, longitude) * radius / range
		);
	}

}
