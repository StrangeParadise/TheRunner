using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GPSData {

	// This is a class used for saving the gps data.

	// get stablized gps data from a stack of a 
	private const int MAXDATA = 60;
	private const int STABLENUM = 30;

	private List<float> lati_stack;
	private List<float> long_stack;

	public float latitude   { get; set; }
	public float longtitude { get; set; }

	public float stablizedLong = 0.0f;
	public float stablizedLati = 0.0f;


	public GPSData() {
		lati_stack = new List<float>();
		long_stack = new List<float>();
	}

	// update GPS data 
	public void updateGpsData(float latitude, float longtitude) {
		this.latitude   = latitude;
		this.longtitude = longtitude;

		updateStack (latitude, longtitude);
	}

	// update the stack for stablized gps data.
	private void updateStack(float latitude, float longtitude) {
		// save at top 60 data.
		if (lati_stack.Count >= MAXDATA) {
			lati_stack.RemoveAt (0);
			long_stack.RemoveAt (0);
		}

		lati_stack.Add (latitude);
		long_stack.Add (longtitude);

		stablizeGPSData ();
	}

	private void stablizeGPSData() {

		float tempStablizedLong = 0.0f;
		float tempStablizedLati = 0.0f;

		if (lati_stack.Count <= STABLENUM) 
		{
			tempStablizedLong = this.longtitude;
			tempStablizedLati = this.latitude;
			return;
		}

		for (int i = MAXDATA - STABLENUM - 1; i >= 0; i--) {
			tempStablizedLati += lati_stack [i];
			tempStablizedLong += long_stack [i];
		}


		tempStablizedLati /= STABLENUM;
		tempStablizedLong /= STABLENUM;

		this.stablizedLati = tempStablizedLati;
		this.stablizedLong = tempStablizedLong;

	}

}
