using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class WinLose : NetworkBehaviour {
	public GameObject winO;
	public GameObject loseO;
	public static GameObject winUI;
	public static GameObject loseUI;
	GameObject[] players;
	bool hiderIn;
	// Use this for initialization
	void Start () {
		hiderIn = false;
		winUI = winO;
		loseUI = loseO;
	}
	
	// Update is called once per frame
	void Update () {
		players = GameObject.FindGameObjectsWithTag("Player");
		if (NetworkServer.connections.Count > 0) {
			if (players.Length > 1) {
				hiderIn = true;
			} else if (players.Length == 1) {
				if (hiderIn) {
					winUI.SetActive (true);
					return;
				}
			}

		} else {


		}
	}

	public static void lose(){
		loseUI.SetActive (true);
	}
}
