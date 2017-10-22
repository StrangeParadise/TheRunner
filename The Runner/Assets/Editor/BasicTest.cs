using UnityEngine;
using UnityEditor;
using UnityEngine.TestTools;
using NUnit.Framework;
using System.Collections;
using TheRunner.Tools;


[TestFixture]
public class testdistance

{
    [Test]
    public void distance()
        // general calculation for two distance(lon ,lat)
    {
        float dtest1;
        float dtest2;
        float dtest3;
        float dtest4;

        //three correctness test 
        dtest1 = TR_Toolbox.gps_transform(32.1f, 50 ,23.5f ,45);
        Assert.AreEqual(1076131.63f, dtest1);

        dtest2 = TR_Toolbox.gps_transform(25f, -50, 23.5f, 45);
        Assert.AreEqual(-9404995.0f, dtest2);

        dtest3 = TR_Toolbox.gps_transform(32.1f, 50, 23.5f, -45);
        Assert.AreEqual(9095895.0f, dtest3);

        // test for returning negative value
        dtest4 = TR_Toolbox.gps_transform(23.5f, 45, 32.1f, 50);
        Assert.AreEqual(-1076131.63f, dtest4);
      
    }
    [Test]
    public void mapdatatest()
    {
        float latitude;
        float longitude;

        float expectedlati = 23.5f;
        float expectedlong = 45;
        //checking game are correct updating the gps data;
        GPSData gpsdata = new GPSData();

        // input the data then checking the the data

        gpsdata.updateGpsData(expectedlati, expectedlong);

        latitude = gpsdata.getLatitude();
        longitude = gpsdata.getLongitude();

        // checking both the latitude and longitude
        Assert.AreEqual(latitude, expectedlati);
        Assert.AreEqual(longitude, expectedlong);
    }

    /*
    [Test]

    public void maptest()
    {

        string expectedaddress;
        string teststring;

        // returning the basic output of the function 
        Map map = new Map();

        teststring = "&key=AIzaSyDK04pO2JEC4C01AQSW9dpuBDunvtuA-o8";
        map.GetGoogleMap(32,50);

        expectedaddress = map.generateURL();
        Assert.AreEqual(teststring, expectedaddress);
 

    }
    */

    [Test]

    public void maptooltest()
    {
        // checking the map has correct responds 
        Camera.main.transform.position = new Vector3(0, 0, 0);
        Vector3 expectedvector = new Vector3(0, Camera.main.transform.position.y, 0);
        Vector3 testvector;
       
        float latitude = 32;
        float longitude = 50;
 
        // check the origin which the same the current location
        MapTools.setLatO(latitude);
        MapTools.setLonO(longitude);
      
        testvector = MapTools.mapGPS(latitude, longitude);
        Assert.AreEqual(testvector, expectedvector);

        // checking the map has correct responds 

        Vector3 expectedvector1 = new Vector3(0, 0, 0);
        Vector3 testvector1;

        
        float latitude1 = 40;
        float longitude1 = 40;
        float longitudeO = 40;
        float latitudeO = 40.5f;

        // checking the origin which different from the current location 
        MapTools.setLatO(latitudeO);
        MapTools.setLonO(longitudeO);

        testvector1 = MapTools.mapGPS(latitude1, longitude1);
        Assert.AreNotEqual(testvector1, expectedvector1);


    }

    
}
