using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testMoveScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.rotation = Quaternion.Euler(new Vector3 (
			this.transform.rotation.x+90,
			this.transform.rotation.y+Time.time*6.0f,
			this.transform.rotation.z
		));
	}



}
