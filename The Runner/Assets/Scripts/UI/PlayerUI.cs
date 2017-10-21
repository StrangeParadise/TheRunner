using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerUI : MonoBehaviour
{
	// The UI components that used in the player UI
    public RawImage image;
    public Texture hide;
    public Texture seek;
	public PlayerMove player;
	public GameObject text;


    // Use this for initialization
    void Awake()
    {
        image.GetComponent<RawImage>().texture = seek;
    }

    // Make sure the UI always face the camera
    void Update()
    {
		text.GetComponent<Text> ().text = player.name;
        this.transform.LookAt(Camera.main.transform);
        this.transform.eulerAngles = new Vector3(0, this.transform.eulerAngles.y, 0);
    }

    public void changeToHide()
    {
        image.GetComponent<RawImage>().texture = hide;
    }

    public void changeToSeek()
    {
        image.GetComponent<RawImage>().texture = seek;
    }
}
