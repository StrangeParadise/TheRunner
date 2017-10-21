using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class PlaneMove : NetworkBehaviour {
    
    private int planeFlyTime = 20;

    // Use this for initialization
    void Start()
    {

        if (!GameObject.FindGameObjectWithTag("GameManager"))
        {
            return;
        }

    }



    /// <summary>
    /// Make the plane flies by.
    /// </summary>
    /// <returns>The fly.</returns>
    /// <param name="planeEndX">Plane end x.</param>
    /// <param name="flyTime">Fly time.</param>
    public void Fly(Vector3 PlaneEnd, float flyTime) {
        StartCoroutine(MoveOverSeconds(gameObject, PlaneEnd, flyTime));
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

}
