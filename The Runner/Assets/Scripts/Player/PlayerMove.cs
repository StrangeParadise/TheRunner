using UnityEngine;
using UnityEngine.Networking;
using TheRunner.Data;

public class PlayerMove : NetworkBehaviour
{
	public GameObject player;
	public PlayerUI ui;

	// Always sync those variables
	[SyncVar]
	public bool isSeeker;
	[SyncVar]
	public bool isDead;
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
		isDead = false;
		// Do not render "myself"
		if (isLocalPlayer) {
			player.GetComponent<SkinnedMeshRenderer> ().enabled = false;
		}
	}

	// Player move is based on the movement in real world. So we basically transform
	// the gps coordinate to a local coordiante and share with other players.
	void Update()
	{
		// Setup the bool values for each player. Determine if the player is seeker or runner
		if (NetworkServer.connections.Count > 0) {
			latitudeO = MapTools.getLatO();
			longitudeO = MapTools.getLonO();
			if (isLocalPlayer) {
				isSeeker = true;
			} else {
				isSeeker = false;
			}
			if(name != null){
				SaveData.add (name);
			}
			if (SaveData.isDead (name)) {
				isDead = true;
			}
		}

		// If "I am dead"
		if (isDead) {
			if (isLocalPlayer) {
				WinLose.lose();
			}
			this.gameObject.SetActive (false);
			return;
		}

		// If "I am a seeker", set my color to red
		if (isSeeker) {
			this.color = Color.red;
			ui.changeToSeek ();
		} else {
			this.color = Color.white;
			ui.changeToHide ();
		}
		player.GetComponent<SkinnedMeshRenderer>().materials[0].color = color;
		player.GetComponent<SkinnedMeshRenderer>().materials[1].color = color;

		if (!isLocalPlayer) {
			return;
<<<<<<< HEAD
        
=======
		}
>>>>>>> 7b948da39e48bd0cba1cb12eb0e93df26bce7497
		if (!isSeeker && latitudeO != 0)
		{
			MapTools.setLatO(latitudeO);
			MapTools.setLonO(longitudeO);
		}

		// Syc the name and the location. Move the model
		CmdSetName (PlayerDataManager.s_Instance.playerName);
		CmdSetP (MapTools.getLat(), MapTools.getLon());
		latitude = MapTools.getLat();
		longitude = MapTools.getLon();
		name = PlayerDataManager.s_Instance.playerName;
		transform.position = new Vector3(Camera.main.transform.position.x, 0, Camera.main.transform.position.z);
		transform.rotation = Camera.main.transform.rotation;

	}

	// Sync the variable with the sever using command
	[Command]  
	public void CmdSetP(float lat, float lon)  
	{  
		longitude = lon;
		latitude = lat;
	}  
	[Command]  
	public void CmdSetName(string n)  
	{  
		this.name = n;
	}  
}