using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using TheRunner.Player;

public class SupplyController : NetworkBehaviour
{

    [SyncVar]
    public string boxName;

    private float fallRange;

    private float unlockSpeed = 1.0f; // per second

    [SyncVar] private float progress = 0.0f;
    private float MAX_PROGRESS = 600f;

    [SyncVar] private Vector3 endPosition;


    // This script controls the supply falls from sky.
    // Use this for initialization

    void Start()
    {


        if (!GameObject.FindGameObjectWithTag("GameManager"))
        {
            return;
        }

        //endPosition = new Vector3(0, 10f, 10f);

        boxName = "[ Box: " + Random.Range(1000, 9999).ToString() + " ]";

        StartCoroutine(MoveOverSeconds(gameObject, 
                                       new Vector3(
                                           transform.position.x + Random.Range(-100,100),
                                           0,
                                           transform.position.z + Random.Range(-100, 100)),
                                       20f));

    }
	
	// Update is called once per frame
	void Update () {

        if (progress >= MAX_PROGRESS) {
            Debug.Log(boxName + " is unlocked!");
            Network.Destroy(gameObject);
            return;
        }

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


    /// <summary>
    /// This function is used for check if there is a user unlocking the box.
    /// </summary>
    void checkPlayerNearby() {

        GameObject[] playerPrefabList = GameObject.FindGameObjectsWithTag("Player");
        for (int i = 0; i < playerPrefabList.Length; i++)
        {
            NetworkPlayerController tnpc = playerPrefabList[i].GetComponent<NetworkPlayerController>();
            Transform tempTransform = tnpc.transform;

            if (Vector3.Distance(tempTransform.position, transform.position) <= 20.0f)
            {
                unlockingBox();
                tnpc.unlocking(this);
            }                       
        }
    }
<<<<<<< HEAD

    void unlockingBox() {
        progress += unlockSpeed;
    }

=======
>>>>>>> 7b948da39e48bd0cba1cb12eb0e93df26bce7497
}
