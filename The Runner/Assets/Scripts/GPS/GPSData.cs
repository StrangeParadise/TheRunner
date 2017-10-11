using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GPSData : MonoBehaviour {

	private float latitude;
	private float longitude;

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
