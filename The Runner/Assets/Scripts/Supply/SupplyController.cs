using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using TheRunner.Player;

public class SupplyController : NetworkBehaviour {

    public string boxName;

    private float fallRange;

    private float unlockSpeed = 1.0f; // per second
    private float progress = 0.0f;
    private float MAX_PROGRESS = 100f;

    // This script controls the supply falls from sky.
	// Use this for initialization
    void Start()
    {

        boxName = "[ Box: " + Random.Range(1000,9999).ToString() + " ]";

        // Throw the box. 
        StartCoroutine(MoveOverSeconds(
            gameObject, new Vector3(
                transform.position.x + Random.Range(-fallRange, fallRange), 
                0, 
                transform.position.z + Random.Range(-fallRange, fallRange)), 10f));

        Debug.Log(boxName + " dropped from the sky!");
    }
	
	// Update is called once per frame
	void Update () {
        
        // Check is there any player nearby.
        checkPlayerNearby();

	}

    public IEnumerator MoveOverSpeed(GameObject objectToMove, Vector3 end, float speed)
    {
        // speed should be 1 unit per second
        while (objectToMove.transform.position != end)
        {
            objectToMove.transform.position = Vector3.MoveTowards(objectToMove.transform.position, end, speed * Time.deltaTime);
            yield return new WaitForEndOfFrame();
        }
    }

    public IEnumerator MoveOverSeconds(GameObject objectToMove, Vector3 end, float seconds)
    {

        float elapsedTime = 0;
        Vector3 startingPos = objectToMove.transform.position;


        while (elapsedTime < seconds)
        {
            objectToMove.transform.position = Vector3.Lerp(startingPos, end, (elapsedTime / seconds));
            elapsedTime += Time.deltaTime;
            yield return new WaitForEndOfFrame();
        }
        objectToMove.transform.position = end;
    }

    void checkPlayerNearby() {

        GameObject[] playerPrefabList = GameObject.FindGameObjectsWithTag("Player");
        for (int i = 0; i < playerPrefabList.Length; i++)
        {
            NetworkPlayerController tnpc = playerPrefabList[i].GetComponent<NetworkPlayerController>();
            Transform tempTransform = tnpc.transform;

            if (Vector3.Distance(tempTransform.position, transform.position) <= 10.0f)
            {
                progress += unlockSpeed;
                tnpc.unlocking(this);
            }
                                   
        }

    }

    void unlockingBox() {
        
    }

}
