﻿using UnityEngine;
using UnityEngine.Networking;
public class PlayerMove : NetworkBehaviour
{
	public Camera mainCamera;
	public GameObject player;
	public PlayerUI ui;


	[SyncVar]
	public bool isSeeker;
	[SyncVar]
	public float latitudeO;
	[SyncVar]
	public float longitudeO;
	[SyncVar]
	public float latitude;
	[SyncVar]
	public float longitude;
	[SyncVar]
	public string name;


	public Color color;

	void Start() {

		// Camera should always bound with the player cube.
		mainCamera = Camera.main;
		isSeeker = false;

		if (isLocalPlayer && NetworkServer.connections.Count > 0) {
			isSeeker = true;
		}
		print ("有几个连接？ " + NetworkServer.connections.Count);

	}

	// Player move is based on the movement in real world. So we basically transform
	// the gps coordinate to a local coordiante and share with other players.
	void Update()
	{
		if (NetworkServer.connections.Count > 0) {
			latitudeO = MapTools.getLatO();
			longitudeO = MapTools.getLonO();
		}
		if (isSeeker)
		{
			this.color = Color.white;
			ui.changeToHide ();
		}
		player.GetComponent<SkinnedMeshRenderer>().materials[0].color = color;
		player.GetComponent<SkinnedMeshRenderer>().materials[1].color = color;


		if (!isLocalPlayer)
			return;
		if (!isSeeker && latitudeO != 0)
		{
			MapTools.setLatO(latitudeO);
			MapTools.setLonO(longitudeO);
		}

		latitude = MapTools.getLat();
		longitude = MapTools.getLon();




		var x = mainCamera.transform.position.x;
		var y = mainCamera.transform.position.y;
		var z = mainCamera.transform.position.z;
		//		var x = Input.GetAxis("Horizontal")*0.1f;
		//		var z = Input.GetAxis("Vertical")*0.1f;

		transform.position = new Vector3(x,y,z);
		transform.rotation = mainCamera.transform.rotation;
		/*
                 players = GameObject.FindGameObjectsWithTag("Player");
         foreach(GameObject p in players) {
             
         }
       */

	}

}