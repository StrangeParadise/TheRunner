using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.Networking;

public class CountDownController : NetworkBehaviour {

    private GameObject IGameManager;
    private GameController gameController;

    public void Start()
    {
        IGameManager = GameObject.FindGameObjectWithTag("GameManager");
    }

    // This is the countdown part.
    [ClientRpc]
    public void RpcUpdateCountdown(int countdown)
    {
        Debug.Log("Time left: " + countdown);

    }

}
