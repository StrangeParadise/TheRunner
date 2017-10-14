using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TheRunner.Utilities;

public class GPSData : Singleton<GPSData> {

	private float latitude = 0;
	private float longitude = 0;

	public void updateGpsData(float latitude, float longitude) {
		this.latitude = latitude;
		this.longitude = longitude;
	}

	public float getLatitude() {
		return latitude;
	}
	public float getLongitude() {
		return longitude;
	}
}
