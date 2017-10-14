using UnityEngine;
using TheRunner.Tools;

public class MapTools : MonoBehaviour {

	public int radius = 150;
	public int range = 500;
	public float speed = 1f;

	private static float latitudeO = 0;
	private static float longitudeO = 0;
	private static float latitude;
	private static float longitude;


	private bool firsttime;

	private Camera mainCamera;

	// Use this for initialization
	void Start () {

		mainCamera = Camera.main;
		firsttime = true;
	}

	// Update is called once per frame
	void Update () {
<<<<<<< HEAD
        float latitude = GPSData.s_Instance.getLatitude();
        float longitude = GPSData.s_Instance.getLongitude();
		if (firstTime) {
=======
		latitude = IGPSController.gps.getLatitude();
		longitude = IGPSController.gps.getLongitude();
		if (firsttime) {
>>>>>>> 00dcca50e86f78f16c60d6aece5144d58660c469
			if (latitude != 0) {
				latitudeO = latitude;
				longitudeO = longitude;
				firsttime = false;
			}
		}
		mainCamera.transform.position = Vector3.MoveTowards(mainCamera.transform.position, mapGPS(latitude, longitude),speed * Time.deltaTime);
		//mainCamera.transform.position = mapGPS (latitude, longitude);

	}

	public Vector3 mapGPS(float latitude, float longitude){
		return new Vector3 (
			TR_Toolbox.gps_transform (latitude, longitude, latitude, longitudeO) * radius / range, 
			mainCamera.transform.position.y, 
			TR_Toolbox.gps_transform (latitude, longitude, latitudeO, longitude) * radius / range
		);
	}

	public static float getLatO() {
		return latitudeO;
	}
	public static void setLatO(float a)
	{
		latitudeO = a;
	}
	public static float getLonO()
	{
		return longitudeO;
	}
	public static void setLonO(float a)
	{
		longitudeO = a;
	}
	public static float getLat()
	{
		return latitude;

	}
	public static float getLon()
	{
		return longitude;
	}
}
