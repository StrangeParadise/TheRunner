using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Tools namespace is used for doing the arithmetic calculation. 
namespace TheRunner.Tools {

	public class TR_Toolbox {
			
		// ==========================
		// | GPS TOOLS
		// ==========================
		// Define the Earth radius for converting.
		private const float EARTH_RADIUS = 6378.137f;

		// Transfer from angle to radius.
		private static float rad(float d) {return d * Mathf.PI / 180.0f;}
		

		// transform function is used for translating the longtitude and laitude to a local space in game.
		public static float gps_transform(float lat1, float lng1, float lat2, float lng2)
		{
			float radLat1 = rad(lat1);
			float radLat2 = rad(lat2);
			float a = radLat1 - radLat2;
			float b = rad(lng1) - rad(lng2);
			float s = 2 * Mathf.Asin(Mathf.Sqrt(Mathf.Pow(Mathf.Sin(a/2),2) +  
				Mathf.Cos(radLat1)*Mathf.Cos(radLat2)*Mathf.Pow(Mathf.Sin(b/2),2)));
			s = s * EARTH_RADIUS;
			s = Mathf.Round(s * 10000) / 10;
			if (lat2 > lat1 || lng2 > lng1)
				s = -s;
			return s;
		}
		

		

	}

}