using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class GPSController : MonoBehaviour {

	private float latitude;
	private float longitude;

	private IEnumerator StartLocationService()
	{
		if (!Input.location.isEnabledByUser) {
			//print("Location service not allowed!");
			yield break;
		}
		Input.location.Start();
		int maxWait = 20;
		while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0) {
			yield return new WaitForSeconds(1);
			maxWait--;
		}
		if (maxWait <= 0) {
			print("Time out");
			yield break;
		}
		if (Input.location.status == LocationServiceStatus.Failed) {
			print("Unable determine device location!");
			yield break;
		}

		updateGpsData();	

		yield break;
	}

	// Update is called once per frame
	void Update () {
		
		DontDestroyOnLoad(gameObject);

		StartCoroutine(StartLocationService());
	}
	void updateGpsData() {
		latitude = Input.location.lastData.latitude;
		longitude = Input.location.lastData.longitude;
	}
	public float getLatitude() {
		return latitude;
	}
	public float getLongitude() {
		return longitude;
	}
}


