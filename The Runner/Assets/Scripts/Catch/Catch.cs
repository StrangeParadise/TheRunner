using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;


// Apply the Catch function
public class Catch : NetworkBehaviour {

	// The distance that can apply catch
	public int distance;

	// The catch button
	public GameObject button;

	// The list of all the players
	GameObject[] players;
	
	// Update is called once per frame
	void Update () {

		// Check until there is a internet connection
		if (NetworkServer.connections.Count == 0) {
			return;
		}

		// Store all the players
		players = GameObject.FindGameObjectsWithTag("Player");
		for (int i = 0; i < players.Length; i++) {
			if (players [i].GetComponent<PlayerMove> ().isSeeker) {
				for (int j = 0; j < players.Length; j++){
					if (j != i) {
						// Check if the runner is in the catch range
						// If is in range, create a catch button
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


	// Apply the catch
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
					// If the current player is not the catcher
					if (j != i) {
						if (Vector3.Distance (players [i].transform.position, players [j].transform.position) <= distance) {
							// Set the player to dead and sync the death info to all the players
							players [j].GetComponent<PlayerMove> ().isDead = true;
							SaveData.death (players [j].GetComponent<PlayerMove> ().name);
							print ("do catch dead");
						}
					}
				}
				break;
			}
		}
	}
}
