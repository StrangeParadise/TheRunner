using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.ComponentModel;
using UnityEngine.Networking.Match;

namespace UnityEngine.Networking {

    public class Room : MonoBehaviour
    {
        public NetworkManager manager;
        public GameObject nameText;
        public GameObject parent;
        public GameObject ui;
		public GameObject chat;
		public GameObject camera;
		public GameObject arUI;
        public Color color;
        // Use this for initialization

        private bool finded;

        void Start()
        {
            finded = false;
            this.manager.StartMatchMaker();

        }

        // Update is called once per frame
        void OnGUI()
        {
			if (finded && this.manager.matches != null) {
                float num = 0;
                for (int i = 0; i < this.manager.matches.Count; i++)
                {
                    MatchInfoSnapshot matchInfoSnapshot = this.manager.matches[i];
                    GUI.backgroundColor = color;
					if (GUI.Button(new Rect(Screen.width*0.26f, Screen.height*0.32f + num, Screen.width*0.6f, Screen.width*0.08f), "Join Match:" + matchInfoSnapshot.name))
                    {
                        this.manager.matchName = matchInfoSnapshot.name;
                        this.manager.matchMaker.JoinMatch(matchInfoSnapshot.networkId, string.Empty, string.Empty, string.Empty, 0, 0, new NetworkMatch.DataResponseDelegate<MatchInfo>(this.manager.OnMatchJoined));
                        ui.SetActive(false);
						chat.SetActive(true);
						camera.SetActive(true);
						arUI.SetActive(true);
                        finded = false;
                    }
					num += Screen.width*0.1f;
                }

            }



        }
        public void create() {
            this.manager.matchName = nameText.GetComponent<Text>().text;
            this.manager.matchMaker.CreateMatch(this.manager.matchName, this.manager.matchSize, true, string.Empty, string.Empty, string.Empty, 0, 0, new NetworkMatch.DataResponseDelegate<MatchInfo>(this.manager.OnMatchCreate));

        }
        public void find() {
            this.manager.matchMaker.ListMatches(0, 20, string.Empty, false, 0, 0, new NetworkMatch.DataResponseDelegate<List<MatchInfoSnapshot>>(this.manager.OnMatchList));
            finded = true;

        }
        public void back() {
            this.manager.matches = null;
            finded = false;
        }
    }

}


