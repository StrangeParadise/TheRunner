using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

	private const float EARTH_RADIUS = 6378.137f;
	private static float rad(float d)
	{
		return d * Mathf.PI / 180.0f;
	}

	public static float distance(float lat1, float lng1, float lat2, float lng2)
	{
		float radLat1 = rad(lat1);
		float radLat2 = rad(lat2);
		float a = radLat1 - radLat2;
		float b = rad(lng1) - rad(lng2);
		float s = 2 * Mathf.Asin(Mathf.Sqrt(Mathf.Pow(Mathf.Sin(a/2),2) +  
			Mathf.Cos(radLat1)*Mathf.Cos(radLat2)*Mathf.Pow(Mathf.Sin(b/2),2)));
		s = s * EARTH_RADIUS;
		s = Mathf.Round(s * 10000) / 10;
		if (lat2 > lat1 || lng2 > lng1)
			s = -s;
		return s;
	}

	public Vector3 mapGPS(float latitude, float longitude){

		return new Vector3 (distance (longitude, latitude, longitude, latitudeO) * radius / range, mainCamera.transform.position.y, distance (longitude, latitude, longitudeO, latitude) * radius / range);

	}



}
