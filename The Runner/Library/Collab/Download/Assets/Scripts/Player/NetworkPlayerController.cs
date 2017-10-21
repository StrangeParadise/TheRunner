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
        [NonSerialized] private int _PlayerLvl;

        
        [NonSerialized] private float _Health;
        [NonSerialized] private const float MAX_HEALTH = 100f;

        [NonSerialized] private bool _isDead;
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

        public int playerlvl
        {
            get { return _PlayerLvl; }
            set { _PlayerLvl = value; }
        }

        public bool isDead
        {
            get { return _isDead; }
            set { _isDead = value; }
        }

        #endregion


        /// <summary>
        /// Player is damaged. 
        /// </summary>
        /// <param name="damage">Damage.</param>
        public void getDamage(float damage) {

            if (damage > health)
            {
                health = 0.0f;
            } else {
                health -= damage;
            }
            checkDeath();
        }

        /// <summary>
        /// Player is healed.
        /// </summary>
        /// <param name="health">Health.</param>
        public void getHealed(float recovery) {

            if (recovery+health>MAX_HEALTH) {
                health = MAX_HEALTH;
            } else {
                health += recovery;
            }
        }


        /// <summary>
        /// Starts when the player enters into a game(or create a game)
        /// </summary>
        void Start()
        {
            // Load basic data of player.
            playerName = PlayerDataManager.s_Instance.playerName;
            playerlvl = PlayerDataManager.s_Instance.playerLvl;

            // Load the game basic data
            health = MAX_HEALTH;
            isDead = false;
        }

        // Update is called once per frame
        void Update()
        {
            // Check the death of this player.
            checkDeath();
        }

        public void unlocking(SupplyController sc)
        {
            Debug.Log("[" + playerName + "]: Unlocking " + sc.boxName);
        }

        public Transform getTransform() {
            return transform;
        }

        /// <summary>
        /// Check the death of a player. 
        /// </summary>
        private void checkDeath() {
            if (health <= 0.0f)
                isDead = true;
        }

    }
}