﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Map : MonoBehaviour {

	string url;

	public GPSController gpsController;

	public float latitude;
	public float longitude;
	public int zoom;
	public int mapWidth;
	public int mapHeight;
	public enum mapType { roadmap, satellite, hybrid, terrain };
	public mapType mapSelected;
	public RawImage myMap;

	public TextMesh terminal;

	private IEnumerator mapCoroutine;
	private string key1 = "&key=AIzaSyDK04pO2JEC4C01AQSW9dpuBDunvtuA-o8";
	private string key2 = "&key=AIzaSyDkFTum1BgoY5gD92vkLlnavRQnnYQKKiM";

	void Update () {
		latitude  = gpsController.gps.getLatitude();
		longitude = gpsController.gps.getLongitude();
		mapCoroutine = GetGoogleMap (latitude, longitude); //redefine the coroutine with the new map coordinates (might be a better way to do this...let me know!)
		StartCoroutine (mapCoroutine); //restart the coroutine


//		if (terminal != null && gpsController != null) {
//			terminal.text = "gps | long: " + gpsController.gps.longtitude.ToString() +'\n' + " lati: " + gpsController.gps.latitude.ToString();
//		}
	}

	IEnumerator GetGoogleMap(float latitude, float longitude)
	{
//		Debug.Log ("latitude " + latitude);
//		Debug.Log ("longitude " + longitude);
		GPSData[] emptyData = new GPSData[0];
		url = "https://maps.googleapis.com/maps/api/staticmap?center=" + latitude + "," + longitude +
			"&zoom=" + zoom + "&size=" + mapWidth + "x" + mapHeight + "&maptype=" + mapSelected + 
			"&markers=color:red%7Clabel:A%7C" + latitude + "," + longitude;
		generateURL (emptyData);
//		url = "https://maps.googleapis.com/maps/api/staticmap?center=" + latitude + "," + longitude +
//			"&zoom=" + zoom + "&size=" + mapWidth + "x" + mapHeight + "&maptype=" + mapSelected + 
//			"&markers=color:red%7Clabel:A%7C" + latitude + "," + longitude + "&key=AIzaSyDkFTum1BgoY5gD92vkLlnavRQnnYQKKiM";
		WWW www = new WWW(url);
		yield return www;
		Texture mapTexture = www.texture;
		myMap.GetComponent<RawImage>().texture = mapTexture;
		yield return new WaitForSeconds(1);
		Destroy (mapTexture);
		StopCoroutine (mapCoroutine);
	}
	void generateURL(GPSData[] data) {
		string[] markers = new string[data.Length];
		int startLetter = 65;
		for (int i = 0; i < data.Length; i++) {
			markers [i] = "&markers=color:red%7Clabel:" + (char)(++startLetter) + "%7C" + data[i].getLatitude() + data[i].getLongitude();
			url += markers [i];
		}
		url += key1;
	}
}