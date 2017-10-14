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
	private string key1 = "&key=AIzaSyDK04pO2JEC4C01AQSW9dpuBDunvtuA-o8";
	private string key2 = "&key=AIzaSyDkFTum1BgoY5gD92vkLlnavRQnnYQKKiM";

	private float updatePerSecond = 0.1f;
	private float time = 0.0f;

	void Update () {
        //if ((time += Time.deltaTime) > updatePerSecond) {
			
        latitude  = GPSData.s_Instance.getLatitude();
        longitude = GPSData.s_Instance.getLongitude();
		mapCoroutine = GetGoogleMap (latitude, longitude); //redefine the coroutine with the new map coordinates (might be a better way to do this...let me know!)
		StartCoroutine (mapCoroutine); //restart the coroutine
		time = 0.0f;

//		}


//		if (terminal != null && gpsController != null) {
//			terminal.text = "gps | long: " + gpsController.gps.longtitude.ToString() +'\n' + " lati: " + gpsController.gps.latitude.ToString();
//		}
	}

	IEnumerator GetGoogleMap(float latitude, float longitude)
	{
//		Debug.Log ("latitude " + latitude);
//		Debug.Log ("longitude " + longitude);
		url = "https://maps.googleapis.com/maps/api/staticmap?center=" + latitude + "," + longitude +
		"&zoom=" + zoom + "&size=" + mapWidth + "x" + mapHeight + "&maptype=" + mapSelected;
		generateURL ();
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
	void generateURL() {
		GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
		string[] markers = new string[players.Length];
		int startLetter = 65;
		//print (players.Length);
		for (int i = 0; i < players.Length; i++) {
			print ("精度" + i +players [i].GetComponent<PlayerMove> ().latitude);
			print ("维度" + i + players [i].GetComponent<PlayerMove> ().longitude);
			markers [i] = "&markers=color:red%7Clabel:" + (char)(startLetter++) + "%7C" + players[i].GetComponent<PlayerMove>().latitude + "," + players[i].GetComponent<PlayerMove>().longitude;
			url += markers [i];
		}
		url += key1;
//		url += key2;
	}
}