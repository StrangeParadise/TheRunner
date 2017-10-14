using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class CountDownServer : NetworkBehaviour {

    public const int COUNTDOWN_TIME = 600;

    [SerializeField] GameObject countDownPrefab;
    private CountDownController countdownController_I;

    public override void OnStartServer()
    {

        Debug.Log("Countdown Starts, Now!");
        //instantiate prefab on server / host
        GameObject countDownTimer = Instantiate(countDownPrefab);
        countdownController_I = countDownTimer.GetComponent<CountDownController>();
        //this causes to instantiate the same object on the connected clients
        NetworkServer.Spawn(countDownTimer);

        StartCoroutine(CountdownRoutine());
    }

    public IEnumerator CountdownRoutine()
    {
        float remainingTime = COUNTDOWN_TIME;
        int currentCountDown = COUNTDOWN_TIME;

        while (currentCountDown > 0)
        {
            yield return null;

            //to avoid flooding the network, we only inform clients when change
            //the number of plain seconds 
            int newFloorTime = Mathf.FloorToInt(remainingTime);
            if (newFloorTime != currentCountDown)
            {
                currentCountDown = newFloorTime;
                //notify clients about the changed countdown value
                countdownController_I.RpcUpdateCountdown(currentCountDown);
            }
            remainingTime -= Time.deltaTime;
        }


        //or call another Rpc which informs the clients about countdown finished
        // TODO: When Finishes!
        // 
    }
}
