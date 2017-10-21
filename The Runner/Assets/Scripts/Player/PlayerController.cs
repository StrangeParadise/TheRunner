using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TheRunner.Data;

public class PlayerController : MonoBehaviour
{
    
    // Canvas
    public Canvas mapCanvas;

    // Map Image
    public GameObject map;

    // Camera
    public Camera mainCam;
    public Camera backgroundCam;
    public Camera mapCam;

    // Prefab for test usage.
    public GameObject PlayerDataPrefab;

    // DEBUG: Check if this game is running in a none mobile devices.
    private bool debug_RunningEnv_Mobile = true;

    //***************************************************************************
    private void Start()
    {

        #if UNITY_EDITOR
            debug_RunningEnv_Mobile = false;
        #endif


        // Directly load game scene in unity editor 
        if (!PlayerDataManager.s_Instance)
        {
            // Create a fake Player.
            Instantiate(PlayerDataPrefab);
            PlayerDataManager.s_Instance.playerName = "UNITY_EDITOR";
            PlayerDataManager.s_Instance.playerLvl = 100;
            PlayerDataManager.s_Instance.playerID = 1;
            PlayerDataManager.s_Instance.currency = 1000;

            Debug.Log("[UNITY_EDITOR] A Fake Player is loaded in Editor mode.");
        }

    }

    // Update is called once per frame
    void Update () {
        // update the map.
		showMap ();
	}
		
	// Make the map rotate with the camera(Old version of map)
	void rotateMapWithCamera() {
		mapCanvas.transform.eulerAngles = new Vector3(
			mapCanvas.transform.rotation.eulerAngles.x,
			mainCam.transform.rotation.eulerAngles.y,
			mapCanvas.transform.rotation.eulerAngles.z
		);
	}

	// Make the map move with the camera(Old version of map)
	void positionMapWithCamera() {
		mapCanvas.transform.position = new Vector3(mainCam.transform.position.x, -635, mainCam.transform.position.z);
	}

	// If the device is put to around horizontal, then the map is showed
	void showMap () {
		if (mainCam.transform.eulerAngles.x > 60 && mainCam.transform.eulerAngles.x < 130) {
			this.GetComponent<Map>().enabled = true;
			map.GetComponent<RawImage>().color = new Color(1, 1, 1, 0);
			mainCam.enabled = false;
			backgroundCam.enabled = false;
			mapCam.enabled = true;

			// Fade effect of the map
			StartCoroutine (FadeTo (1.0f, 1.0f));
		} else {
			this.GetComponent<Map> ().enabled = false;
			mainCam.enabled = true;
			backgroundCam.enabled = true;
			mapCam.enabled = false;
		}
	}

	// A fade to effct of the map 
	IEnumerator FadeTo(float aValue, float aTime)
	{
		float alpha = map.GetComponent<RawImage>().color.a;
		for (float t = 0.0f; t < 1.0f; t += Time.deltaTime / aTime)
		{
			Color newColor = new Color(1, 1, 1, Mathf.Lerp(alpha,aValue,t));
			map.GetComponent<RawImage>().color = newColor;
			yield return null;
		}
	}

}
