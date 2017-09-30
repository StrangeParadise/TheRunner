using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Map : MonoBehaviour {

	string url;

	public float latitude;
	public float longitude;
	public int zoom;
	public int mapWidth;
	public int mapHeight;
	public enum mapType { roadmap, satellite, hybrid, terrain };
	public mapType mapSelected;
	public RawImage myMap;

	public Text coordinate;

	private IEnumerator mapCoroutine;

	void Update () {
		latitude = GPS.Instance.latitude;
		longitude = GPS.Instance.longitude;
		coordinate.text = "Lat" + GPS.Instance.latitude.ToString () + " Long" + GPS.Instance.longitude.ToString ();
		mapCoroutine = GetGoogleMap (latitude, longitude); //redefine the coroutine with the new map coordinates (might be a better way to do this...let me know!)
		StartCoroutine (mapCoroutine); //restart the coroutine
	}

	IEnumerator GetGoogleMap(float latitude, float longitude)
	{
		print ("latitude " + latitude);
		print ("longitude " + longitude);
		url = "https://maps.googleapis.com/maps/api/staticmap?center=" + latitude + "," + longitude +
			"&zoom=" + zoom + "&size=" + mapWidth + "x" + mapHeight + "&maptype=" + mapSelected + 
			"&markers=color:red%7Clabel:A%7C" + latitude + "," + longitude + "&key=AIzaSyDK04pO2JEC4C01AQSW9dpuBDunvtuA-o8";
		WWW www = new WWW(url);
		yield return www;
		Texture mapTexture = www.texture;
		myMap.GetComponent<RawImage>().texture = mapTexture;
		yield return new WaitForSeconds(1);
		Destroy (mapTexture);
		StopCoroutine (mapCoroutine);
	}
}