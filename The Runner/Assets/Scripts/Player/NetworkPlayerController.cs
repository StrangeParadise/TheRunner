using System;
using UnityEngine;
using UnityEngine.Networking;
using TheRunner.Data;

namespace TheRunner.Player
{
    public class NetworkPlayerController : NetworkBehaviour
    {
        /// <summary>
        /// Network Player Controller keeps all the records and all the methods for a player.
        /// It is a Singleton Network Behaviour class, it is always unique for every player.
        /// This class will lasts from the moment that player enters in a sever to the a finish 
        /// of one round of the game.
        /// </summary>

        #region Fields


        [NonSerialized] private string _PlayerName;
        [NonSerialized] private string _PlayerLvl;

        
        [NonSerialized] private float _Health;
        [NonSerialized] private float MAX_HEALTH;
        #endregion

        #region Properties

        public string playerName 
        {
            get { return _PlayerName; }
            set { _PlayerName = value; }
        }

        // Don't call this function unless necessary, use getDamage() and getHealed() instead.
        public float health
        {
            get { return _Health; }
            set { _Health = value; }
        }

        public string playerlvl
        {
            get { return _PlayerLvl; }
            set { _PlayerLvl = value; }
        }

        #endregion


        public void getDamage(float damage) {
            
        }

        public void getHealed(float health) {
            
        }


        /// <summary>
        /// Starts when the player enters into a game(or create a game)
        /// </summary>
        void Start()
        {
            // Load basic data of player.
            playerName = PlayerDataManager.s_Instance.playerName;
            health = MAX_HEALTH;

        }

        // Update is called once per frame
        void Update()
        {

        }

        public void unlocking(SupplyController sc)
        {
            Debug.Log("[" + playerName + "]: Unlocking " + sc.boxName);
        }

        public Transform getTransform() {
            return transform;
        }

    }
}