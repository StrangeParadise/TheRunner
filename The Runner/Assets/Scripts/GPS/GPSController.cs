using System.Collections;
using UnityEngine;



public class GPSController : MonoBehaviour {

	// Check if location service is supported
	private IEnumerator StartLocationService()
	{
		if (!Input.location.isEnabledByUser) {
			//print("Location service not allowed!");
			yield break;
		}
		Input.location.Start();

		// Wait for 20 seconds for the location service respond
		int maxWait = 20;
		while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0) {
			yield return new WaitForSeconds(1);
			maxWait--;
		}

		// If no respond in 20 seconds, print Time out
		if (maxWait <= 0) {
			print("Time out");
			yield break;
		}

		// If failed, print the information
		if (Input.location.status == LocationServiceStatus.Failed) {
			print("Unable determine device location!");
			yield break;
		}

		// If location service works well, update the GPSData class
        GPSData.s_Instance.updateGpsData(Input.location.lastData.latitude, Input.location.lastData.longitude);	

		yield break;
	}

	// Update is called once per frame
	void Update () {
		
		DontDestroyOnLoad(gameObject);

		StartCoroutine(StartLocationService());
	}
}
