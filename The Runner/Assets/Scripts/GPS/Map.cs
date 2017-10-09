using UnityEngine;
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
	private bool showMap = true;

	void Update () {
		latitude  = gpsController.gps.latitude;
		longitude = gpsController.gps.longtitude;
		if(showMap) {
			showMap = false;
			mapCoroutine = GetGoogleMap (latitude, longitude); //redefine the coroutine with the new map coordinates (might be a better way to do this...let me know!)
			StartCoroutine (mapCoroutine); //restart the coroutine
		}


//		if (terminal != null && gpsController != null) {
//			terminal.text = "gps | long: " + gpsController.gps.longtitude.ToString() +'\n' + " lati: " + gpsController.gps.latitude.ToString();
//		}
	}

	IEnumerator GetGoogleMap(float latitude, float longitude)
	{
//		Debug.Log ("latitude " + latitude);
//		Debug.Log ("longitude " + longitude);
//		url = "https://maps.googleapis.com/maps/api/staticmap?center=" + latitude + "," + longitude +
//			"&zoom=" + zoom + "&size=" + mapWidth + "x" + mapHeight + "&maptype=" + mapSelected + 
//			"&markers=color:red%7Clabel:A%7C" + latitude + "," + longitude + "&key=AIzaSyDK04pO2JEC4C01AQSW9dpuBDunvtuA-o8";
		url = "https://maps.googleapis.com/maps/api/staticmap?center=" + latitude + "," + longitude +
			"&zoom=" + zoom + "&size=" + mapWidth + "x" + mapHeight + "&maptype=" + mapSelected + 
			"&markers=color:red%7Clabel:A%7C" + latitude + "," + longitude + "&key=AIzaSyDkFTum1BgoY5gD92vkLlnavRQnnYQKKiM";
		WWW www = new WWW(url);
		yield return www;
		Texture mapTexture = www.texture;
		myMap.GetComponent<RawImage>().texture = mapTexture;
		yield return new WaitForSeconds(1);
		Destroy (mapTexture);
		StopCoroutine (mapCoroutine);
		showMap = true;
	}
}