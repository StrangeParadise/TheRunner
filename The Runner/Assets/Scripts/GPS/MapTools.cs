using UnityEngine;
using TheRunner.Tools;

public class MapTools : MonoBehaviour
{

<<<<<<< HEAD
    public int radius = 150;
    public int range = 500;
    public float speed = 1f;
=======
	// Play domain
	public int radius = 150;
	public int range = 500;
	public float speed = 1f;
>>>>>>> 7b948da39e48bd0cba1cb12eb0e93df26bce7497

    private static float latitudeO = 0;
    private static float longitudeO = 0;
    private static float latitude;
    private static float longitude;


    private bool firsttime;

<<<<<<< HEAD
    private Camera mainCamera;
=======
>>>>>>> 7b948da39e48bd0cba1cb12eb0e93df26bce7497

    // Use this for initialization
    void Start()
    {

<<<<<<< HEAD
        mainCamera = Camera.main;
        firsttime = true;
    }

    // Update is called once per frame
    void Update()
    {

        if (firsttime)
        {

            if (latitude.Equals(0))
            {
                latitudeO = GPSData.s_Instance.getLatitude();
                longitudeO = GPSData.s_Instance.getLongitude();
                firsttime = false;
            }
        }
        //mainCamera.transform.position = Vector3.MoveTowards(mainCamera.transform.position, mapGPS(latitude, longitude),speed * Time.deltaTime);

#if !UNITY_EDITOR
        mainCamera.transform.position = mapGPS(latitude, longitude);
#endif
        //mainCamera.transform.position = mapGPS (latitude, longitude);

    }
=======
		firsttime = true;
	}

	// Update is called once per frame
	void Update () {
        
		// Update the latitude and longitude
        latitude = GPSData.s_Instance.getLatitude();
        longitude = GPSData.s_Instance.getLongitude();
		if (firsttime) {
			if (latitude != 0) {
				latitudeO = latitude;
				longitudeO = longitude;
				firsttime = false;
			}
		}
		// Move the camera as players go
		Camera.main.transform.position = Vector3.MoveTowards(Camera.main.transform.position, mapGPS(latitude, longitude),speed * Time.deltaTime);
	}
>>>>>>> 7b948da39e48bd0cba1cb12eb0e93df26bce7497

	// Transfer the latitude and longitude to the unity coordinate
	public Vector3 mapGPS(float latitude, float longitude){
		return new Vector3 (
			TR_Toolbox.gps_transform (latitude, longitude, latitude, longitudeO) * radius / range, 
			Camera.main.transform.position.y, 
			TR_Toolbox.gps_transform (latitude, longitude, latitudeO, longitude) * radius / range
		);
	}

	// Setters and getters
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
