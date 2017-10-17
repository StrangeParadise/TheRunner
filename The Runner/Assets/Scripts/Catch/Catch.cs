using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class Catch : NetworkBehaviour {

	public int distance;
	public GameObject button;

	GameObject[] players;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		if (NetworkServer.connections.Count == 0) {
			return;
		}
		players = GameObject.FindGameObjectsWithTag("Player");
		for (int i = 0; i < players.Length; i++) {
			if (players [i].GetComponent<PlayerMove> ().isSeeker) {
				for (int j = 0; j < players.Length; j++){
					if (j != i) {
						if (Vector3.Distance (players [i].transform.position, players [j].transform.position) <= distance) {
							print ("catch: seeker"+players [i].GetComponent<PlayerMove> ().name+"hider"+players [j].GetComponent<PlayerMove> ().name);
							button.SetActive (true);
							return;
						}
					}
				}
				break;
			}
		}
		button.SetActive (false);
	}

	public void doCatch(){
		print ("do catch0");
		if (NetworkServer.connections.Count == 0) {
			return;
		}
		print ("do catch1");
		players = GameObject.FindGameObjectsWithTag("Player");
		for (int i = 0; i < players.Length; i++) {
			if (players [i].GetComponent<PlayerMove> ().isSeeker) {
				for (int j = 0; j < players.Length; j++){
					if (j != i) {
						if (Vector3.Distance (players [i].transform.position, players [j].transform.position) <= distance) {
							players [j].GetComponent<PlayerMove> ().isDead = true;
							SaveData.death (players [j].GetComponent<PlayerMove> ().name);
						}
					}
				}
				break;
			}
		}

	}
}
