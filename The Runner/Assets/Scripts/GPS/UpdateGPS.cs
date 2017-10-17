using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpdateGPS : MonoBehaviour {

	public TextMesh terminal;

	public GPSController IGPSController;

	private void Update() {
		if(Camera.main) {
			terminal.text = "Network connected!";
		}
	}

//	public int zoom;
//	public int mapWidth;
//	public int mapHeight;
//
//	public RawImage map;
//
//	private string url;
//	private LocationInfo info;
//	public enum mapType { roadmap, satellite, hybrid, terrain };
//	public mapType type;
//	
//	private bool loading;
//
//	private IEnumerator mapCoroutine;
//
//	public Text coordinate;
//
//	private double latitude;
//	private double longitude;
//
//	private void Start()
//	{
//		loading = false;
//		mapCoroutine = getGoogleMap(latitude, longitude);
//		StartCoroutine(mapCoroutine);
//	}
//
//	// Update is called once per frame
//	void Update () {
//		latitude = GPS.Instance.latitude;
//		longitude = GPS.Instance.longitude;
//		coordinate.text = "Latitude: " + GPS.Instance.latitude.ToString() + "   Longitude: " + GPS.Instance.longitude.ToString();
//
//	}
//
//	IEnumerator getGoogleMap(double latitude, double longitude) {
//		url = "https://maps.googleapis.com/maps/api/staticmap?center=" + latitude + "," + longitude + "&zoom=" + zoom + "&size=" + mapWidth + "x" + mapHeight + "&maptype=" + type +
//			"&markers=color:red%7Clabel:A%7C" + latitude + "," + longitude + "&key= AIzaSyDK04pO2JEC4C01AQSW9dpuBDunvtuA - o8";
//		loading = true;
//		WWW www = new WWW(url);
//		yield return www;
//		loading = false;
//		map.GetComponent<RawImage>().texture = www.texture;
//		StopCoroutine(mapCoroutine);
//	}
}


