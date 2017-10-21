using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TheRunner.Utilities;


// This class stores the data of all the players
namespace TheRunner.Data
{

    public class PlayerDataManager : Singleton<PlayerDataManager>
    {

        #region Fields

        [NonSerialized]
        private string _PlayerName;

        [NonSerialized]
        private int _PlayerID;

        [NonSerialized]
        private int _PlayerLvl;

        [NonSerialized]
        private int _Currency;

        #endregion


        #region Properties

        // The in-game currency for each player
        public int currency
        {
            get { return _Currency; }
            set { _Currency = value; }
        }

        // The player name retrieve from server.
        public string playerName
        {
            get { return _PlayerName; }
            set { _PlayerName = value; }
        }

        // The player ID retrieve from server.
        public int playerID
        {
            get { return _PlayerID; }
            set { _PlayerID = value; }
        }

        // The player lelvel retrieve from server.
        public int playerLvl
        {
            get { return _PlayerLvl; }
            set { _PlayerLvl = value; }
        }

        #endregion

        protected override void Awake()
        {
            // This is a class that stores all the data related to user.
            // It needs the data from the sever which will be retrieved after succefully log-in.
            DontDestroyOnLoad(gameObject);
            base.Awake();
        }

    }
}