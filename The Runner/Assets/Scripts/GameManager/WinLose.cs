using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class WinLose : NetworkBehaviour {

	// Given two UIs. One for win one for lose
	public GameObject winO;
	public GameObject loseO;
	public static GameObject winUI;
	public static GameObject loseUI;

	// Player list
	GameObject[] players;

	// A bool controls if there is no other players in the game except the seeker initially
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

		// Find at least one connection
		if (NetworkServer.connections.Count > 0) {
			if (players.Length > 1) {
				hiderIn = true;
			} else if (players.Length == 1) {
				if (hiderIn) {
					winUI.SetActive (true);
					return;
				}
			}
		} 
	}

	// Show the lose UI
	public static void lose(){
		loseUI.SetActive (true);
	}
}
