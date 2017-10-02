using UnityEngine;
using UnityEngine.Networking;

public class PlayerMove : NetworkBehaviour
{
	public Camera mainCamera;

	void Start() {

		// Camera should always bound with the player cube.
		mainCamera = Camera.main;

	}

	// Player move is based on the movement in real world. So we basically transform
	// the gps coordinate to a local coordiante and share with other players.
	void Update()
	{
		if (!isLocalPlayer)
			return;

		var x = mainCamera.transform.position.x;
		var y = mainCamera.transform.position.y;
		var z = mainCamera.transform.position.z;
//
//		var x = Input.GetAxis("Horizontal")*0.1f;
//		var z = Input.GetAxis("Vertical")*0.1f;

		transform.position = new Vector3(x,y,z);
	}
}