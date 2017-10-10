using System;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

namespace TheRunner.Networking
{
    public class PlayerController : NetworkBehaviour
    {
        public event Action<PlayerController> syncVarsChanged;

        // GameObject related
        private Camera mainCamera;
        //public GameObject HeadCanvas;
		
        // The static Player Data from SERVER
        private GameObject IPlayerData;

        // Player's data 
        [SyncVar(hook = "OnMyName")]
        string m_PlayerName;

		#region Syncvar callbacks

		private void OnMyName(string newName)
		{
			m_PlayerName = newName;

			if (syncVarsChanged != null)
			{
				syncVarsChanged(this);
			}
		}

        #endregion


        /// <summary>
        /// Start this instance.
        /// </summary>
        void Start()
        {
            // Camera should always bound with the player cube.
            mainCamera = Camera.main;

            // Read the player data from last scene.
            IPlayerData = GameObject.FindGameObjectWithTag("PlayerData");

            //// Modify the username bar
            //Text usernameUI = HeadCanvas.transform.Find("Username").GetComponent<Text>();
            //usernameUI.text = IPlayerData.GetComponent<PlayerData>().m_PlayerName;
            //usernameUI.fontSize = 20;
            //usernameUI.alignment = TextAnchor.MiddleCenter;
            //usernameUI.color = Color.white;
		}



        /// <summary>
        /// Ons the start local player.
        /// </summary>
        public override void OnStartLocalPlayer()
        {
            // Render local player to red (currently for DEBUG purpose).
            GetComponent<MeshRenderer>().material.color = Color.red;
        }



        /// <summary>
        /// Player move is based on the movement in real world. So we transform
        /// the gps coordinate to a local coordiante and share with other players.
        /// </summary>
        void Update()
        {
            // check if the player is a local instance.
            if (!isLocalPlayer)
                return;

            // follow the movement of the main camera(which follows the gps location)
            var x = mainCamera.transform.position.x;
            var y = mainCamera.transform.position.y;
            var z = mainCamera.transform.position.z;
            transform.position = new Vector3(x, y, z);


            // check the username.
            // HeadCanvas.transform.position = new Vector3(x, y + 1.0f, z);
        }
    }
}