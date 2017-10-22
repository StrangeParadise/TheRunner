using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class PlaneMove : NetworkBehaviour
{

    private int planeFlyTime = 20;

    /// <summary>
    /// Create a plane in the Server.
    /// </summary>
    void Start()
    {

        // Check if this is on a server device or a client.
        if (!GameObject.FindGameObjectWithTag("GameManager")) {
            return;
        }

        // For further plane movement.

    }

    /// <summary>
    /// Make the plane flies by.
    /// </summary>
    /// <returns>The fly.</returns>
    /// <param name="PlaneEnd">Plane end x.</param>
    /// <param name="flyTime">Fly time.</param>
    public void Fly(Vector3 PlaneEnd, float flyTime)
    {
        StartCoroutine(MoveOverSeconds(gameObject, PlaneEnd, flyTime));
    }


    /// <summary>
    /// This is used for changing the moving speed of the plane.
    /// </summary>
    /// <returns>The over speed.</returns>
    /// <param name="objectToMove">Object to move.</param>
    /// <param name="end">End.</param>
    /// <param name="speed">Speed.</param>
    public IEnumerator MoveOverSpeed(GameObject objectToMove, Vector3 end, float speed)
    {
        // speed should be 1 unit per second
        while (objectToMove.transform.position != end)
        {
            objectToMove.transform.position = Vector3.MoveTowards(objectToMove.transform.position, end, speed * Time.deltaTime);
            yield return new WaitForEndOfFrame();
        }
    }

    /// <summary>
    /// Move the plane over seconds.
    /// </summary>
    /// <returns>The over seconds.</returns>
    /// <param name="objectToMove">This is the object to move.</param>
    /// <param name="end">End.</param>
    /// <param name="seconds">Seconds.</param>
    public IEnumerator MoveOverSeconds(GameObject objectToMove, Vector3 end, float seconds)
    {

        // Create a elapsed time for deciding the moving pattern.
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
