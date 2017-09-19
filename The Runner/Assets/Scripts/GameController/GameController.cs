using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

	public Canvas mapCanvas;
	public Camera mainCamera;
	public int radius = 150;
	public int range = 500;

	private float latitude;
	private float longitude;

	private float latitudeO;
	private float longitudeO;
	private bool firsttime;

	void Start(){
		firsttime = true;
	
	}


	// Update is called once per frame
	void Update () {
		rotateMapWithCamera ();
		positionMapWithCamera ();
		latitude = GPS.Instance.latitude;
		longitude = GPS.Instance.longitude;
		if (firsttime) {
			if (latitude != 0) {
				latitudeO = GPS.Instance.latitude;
				longitudeO = GPS.Instance.longitude;
				firsttime = false;
			}
		}

		print ("-------" + distance (longitude, latitude, longitude, latitudeO) + "-------");
		print ("-------" + distance (longitude, latitude, longitudeO, latitude) + "-------");
		Debug.Log (distance (-38, 144, -39, 145));
		mainCamera.transform.position = new Vector3 (distance (longitude, latitude, longitude, latitudeO) * radius / range, mainCamera.transform.position.y, distance (longitude, latitude, longitudeO, latitude) * radius / range);
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

	void rotateMapWithCamera() {

		mainCamera.transform.rotation = Quaternion.Euler(new Vector3(
			mainCamera.transform.rotation.eulerAngles.x,
			Mathf.Clamp(mainCamera.transform.rotation.eulerAngles.y, 0, 180),
			mainCamera.transform.rotation.eulerAngles.z
		));

		mapCanvas.transform.rotation = Quaternion.Euler(new Vector3(
			mapCanvas.transform.rotation.eulerAngles.x,
			mainCamera.transform.rotation.eulerAngles.y,
			mapCanvas.transform.rotation.eulerAngles.z
		));

	}

	void positionMapWithCamera() {
		mapCanvas.transform.position = new Vector3(mainCamera.transform.position.x, -635, mainCamera.transform.position.z);
	}
}
