using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerUI : MonoBehaviour
{
    public RawImage image;
    public Texture hide;
    public Texture seek;

    private Camera mcamera;

    // Use this for initialization
    void Awake()
    {
        mcamera = Camera.main;
        image.GetComponent<RawImage>().texture = seek;
    }

    // Update is called once per frame
    void Update()
    {
        
        //this.transform.position = new Vector3(mcamera.transform.position.x, this.transform.position.y, mcamera.transform.position.x);
        this.transform.LookAt(mcamera.transform);
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
