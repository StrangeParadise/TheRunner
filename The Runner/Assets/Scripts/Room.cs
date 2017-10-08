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
            if (finded) {
                float num = 0;
                for (int i = 0; i < this.manager.matches.Count; i++)
                {
                    MatchInfoSnapshot matchInfoSnapshot = this.manager.matches[i];
                    GUI.backgroundColor = color;
                    if (GUI.Button(new Rect(parent.transform.position.x, parent.transform.position.y + num, 380f, 40f), "Join Match:" + matchInfoSnapshot.name))
                    {
                        this.manager.matchName = matchInfoSnapshot.name;
                        this.manager.matchMaker.JoinMatch(matchInfoSnapshot.networkId, string.Empty, string.Empty, string.Empty, 0, 0, new NetworkMatch.DataResponseDelegate<MatchInfo>(this.manager.OnMatchJoined));
                        ui.SetActive(false);
                        finded = false;
                    }
                    num += 45;
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


