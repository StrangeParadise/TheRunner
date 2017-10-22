using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// Tools namespace is used for doing the arithmetic calculation. 
namespace TheRunner.Tools
{

    public class TR_Toolbox
    {

        // ==========================
        // | GPS TOOLS
        // ==========================
        // Define the Earth radius for converting.
        private const float EARTH_RADIUS = 6378.137f;

        // Transfer from angle to radius.
        private static float rad(float d) { return d * Mathf.PI / 180.0f; }


        // transform function is used for translating the longtitude and laitude to a local space in game.
        public static float gps_transform(float lat1, float lng1, float lat2, float lng2)
        {
            float radLat1 = rad(lat1);
            float radLat2 = rad(lat2);
            float a = radLat1 - radLat2;
            float b = rad(lng1) - rad(lng2);
            float s = 2 * Mathf.Asin(Mathf.Sqrt(Mathf.Pow(Mathf.Sin(a / 2), 2) +
                Mathf.Cos(radLat1) * Mathf.Cos(radLat2) * Mathf.Pow(Mathf.Sin(b / 2), 2)));
            s = s * EARTH_RADIUS;
            s = Mathf.Round(s * 10000) / 10;
            if (lat2 > lat1 || lng2 > lng1)
                s = -s;
            return s;
        }

        //Set the maek of players on the map
        public static string generateURL(GameObject[] players)
        {
            string url = "";

            // Stores the markers in the map
            string[] markers = new string[players.Length];

            // Setup the markers show all the players position
            for (int i = 0; i < players.Length; i++)
            {
                if (players[i].GetComponent<PlayerMove>().isSeeker)
                {
                    // Seeker's mark will be in red
                    markers[i] = "&markers=color:red%7Clabel:" + players[i].GetComponent<PlayerMove>().name[0].ToString().ToUpper() + "%7C" + players[i].GetComponent<PlayerMove>().latitude + "," + players[i].GetComponent<PlayerMove>().longitude;
                }
                else
                {
                    // Runner's mark will be in green
                    markers[i] = "&markers=color:green%7Clabel:" + players[i].GetComponent<PlayerMove>().name[0].ToString().ToUpper() + "%7C" + players[i].GetComponent<PlayerMove>().latitude + "," + players[i].GetComponent<PlayerMove>().longitude;
                }
                url += markers[i];
            }
            return url;
        }

        // Draw the play range on the map
        // This algorithm is similar to the one we use to transfer the latitude and longitude to the unity coordinate
        public static string drawCircle(int radius, float lat, float lng, int detail)
        {
            string url = "";
            if (detail <= 0)
            {
                Debug.Log("Wrong detail");
                return null;
            }

            url += "&path=color:blue%7Cfillcolor:yellow%7Cweight:4";

            float r = EARTH_RADIUS;

            float pi = Mathf.PI;

            float _lat = (lat * pi) / 180f;
            float _lng = (lng * pi) / 180f;
            float d = (radius / 1000f) / r;

            int i = 0;

            for (i = 0; i <= 360; i += detail)
            {
                float brng = i * pi / 180f;
                float pLat = Mathf.Asin(Mathf.Sin(_lat) * Mathf.Cos(d) + Mathf.Cos(_lat) * Mathf.Sin(d) * Mathf.Cos(brng));
                float pLng = ((_lng + Mathf.Atan2(Mathf.Sin(brng) * Mathf.Sin(d) * Mathf.Cos(_lat), Mathf.Cos(d) - Mathf.Sin(_lat) * Mathf.Sin(pLat))) * 180f) / pi;
                pLat = (pLat * 180f) / pi;

                url += "%7C" + pLat + "," + pLng;
            }
            return url;
        }


    }

}