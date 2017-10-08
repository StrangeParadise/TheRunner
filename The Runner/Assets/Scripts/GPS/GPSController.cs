using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class GPSController : MonoBehaviour {

	public GPSData gps;

	private int counter = 0;

	void Start() {

		// create a new gps data.
		gps = new GPSData ();

	}

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

		gps.updateGpsData(Input.location.lastData.latitude,Input.location.lastData.longitude);	

		yield break;
	}

	// Update is called once per frame
	void Update () {
		
		DontDestroyOnLoad(gameObject);

		StartCoroutine(StartLocationService());
	}



}


