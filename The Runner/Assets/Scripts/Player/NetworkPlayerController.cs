using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using TheRunner.Data;

namespace TheRunner.Player
{
    public class NetworkPlayerController : NetworkBehaviour
    {
        string playerName;

        // Use this for initialization
        void Start()
        {
            // Load basic data of player.
            playerName = PlayerDataManager.s_Instance.playerName;
        }

        // Update is called once per frame
        void Update()
        {

        }

        void unlocking(SupplyController sc)
        {
            Debug.Log("[" + playerName + "]: Unlocking!");
        }

    }
}