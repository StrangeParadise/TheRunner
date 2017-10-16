using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FirstPersonRotation : MonoBehaviour {


    //方向灵敏度  
    public float sensitivityX = 0.0001f;
    public float sensitivityY = 0.0001f;

    //上下最大视角(Y视角)  
    public float minimumY = -60F;
    public float maximumY = 60F;

    float rotationY = 0F;

    private bool onOff = false;

    public float speed = 1.5f;
    public float spacing = 1.0f;
    private Vector3 pos;

    void Update()
    {
        if (Input.GetKeyDown("space")) {
            onOff = !onOff;
        }
            
        if (onOff)
        {

            //根据鼠标移动的快慢(增量), 获得相机左右旋转的角度(处理X)  
            float rotationX = transform.localEulerAngles.y + Input.GetAxis("Mouse X") * sensitivityX;

            //根据鼠标移动的快慢(增量), 获得相机上下旋转的角度(处理Y)  
            rotationY += Input.GetAxis("Mouse Y") * sensitivityY;
            //角度限制. rotationY小于min,返回min. 大于max,返回max. 否则返回value   
            rotationY = Mathf.Clamp(rotationY, minimumY, maximumY);

            //总体设置一下相机角度  
            transform.localEulerAngles = new Vector3(-rotationY, rotationX, 0);

            if (Input.GetKeyDown(KeyCode.W))
                pos.y += spacing;
            if (Input.GetKeyDown(KeyCode.S))
                pos.y -= spacing;
            if (Input.GetKeyDown(KeyCode.A))
                pos.x -= spacing;
            if (Input.GetKeyDown(KeyCode.D))
                pos.x += spacing;

            transform.position = Vector3.MoveTowards(transform.position, pos, speed * Time.deltaTime);
        }
    }

}

