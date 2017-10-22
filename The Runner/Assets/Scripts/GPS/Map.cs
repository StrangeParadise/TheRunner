using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using TheRunner.Tools;
using UnityEngine.Networking;

public class Map : MonoBehaviour
{

    // Stores the google static map url
    string url;

    // Current latitude
    public float latitude;

    // Current longitude
    public float longitude;

    // The zoom value of the map
    public int zoom;

    // Width of the map texture
    public int mapWidth;

    // Height of the map texture
    public int mapHeight;

    // Four types of map to choose from
    public enum mapType { roadmap, satellite, hybrid, terrain };
    public mapType mapSelected;

    // The Image component to show the map
    public RawImage myMap;

    // The range used in the circle on the map
    public int range;

    private IEnumerator mapCoroutine;

    // API Keys we are using for test
    private string key1 = "&key=AIzaSyDK04pO2JEC4C01AQSW9dpuBDunvtuA-o8";
    private string key2 = "&key=AIzaSyDkFTum1BgoY5gD92vkLlnavRQnnYQKKiM";
    private string key3 = "&key=AIzaSyD1McLuBZCI9Ueu6XJ3lU6r_AZTPmi1asQ";

    // Stores the time passed
    private float time = 0.0f;

    // Update frequency of the map (10 times per second)
    private int updatePerSecond = 10;

    // Stores the map texture downloaded
    private Texture mapTexture;

    void Start()
    {
        latitude = GPSData.s_Instance.getLatitude();
        longitude = GPSData.s_Instance.getLongitude();
        mapCoroutine = GetGoogleMap(latitude, longitude);
        StartCoroutine(mapCoroutine);
    }

    void Update()
    {
        // Start the coroutine updatePerSecond times per second
        if ((time += Time.deltaTime) > 1.0f / updatePerSecond)
        {
            time = 0.0f;
            latitude = GPSData.s_Instance.getLatitude();
            longitude = GPSData.s_Instance.getLongitude();
            mapCoroutine = GetGoogleMap(latitude, longitude);
            StartCoroutine(mapCoroutine);
        }
    }

    public IEnumerator GetGoogleMap(float latitude, float longitude)
    {
        // Generate the complete url
        url = "https://maps.googleapis.com/maps/api/staticmap?center=" + latitude + "," + longitude +
            "&zoom=" + zoom + "&size=" + mapWidth + "x" + mapHeight + "&maptype=" + mapSelected;
        url += TR_Toolbox.generateURL(GameObject.FindGameObjectsWithTag("Player"));

        // Draw a play circle on the map
        float lat = MapTools.getLatO();
        float lng = MapTools.getLonO();
        url += TR_Toolbox.drawCircle(range, lat, lng, 5);

        // Add the key at the tail of the url
        url += key1;
        // url += key2;
        // url += key3;

        WWW www = new WWW(url);
        yield return www;
        Destroy(mapTexture);

        // Catch the error if there is one
        if (www.error == null)
        {
            // Get the texture downloaded
            mapTexture = www.texture;
            // Assign it to the UI
            myMap.GetComponent<RawImage>().texture = mapTexture;
            StopCoroutine(mapCoroutine);
        }
    }


}
