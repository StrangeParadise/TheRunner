﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using 

public class SupplyController : NetworkBehaviour {


    private float fallRange;

    private float progress = 0.0f;
    private float MAX_PROGRESS = 100f;

    // This script controls the supply falls from sky.
	// Use this for initialization
    void Start()
    {

        // Throw the box. 
        StartCoroutine(MoveOverSeconds(
            gameObject, new Vector3(
                transform.position.x + Random.Range(-fallRange, fallRange), 
                0, 
                transform.position.z + Random.Range(-fallRange, fallRange)), 10f));

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


    }

    void unlockingBox() {
        
    }

}
