﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Test the map rotation
namespace TheRunner.Test
{
    public class testMoveScript : MonoBehaviour
    {
        
        // Update is called once per frame
        void Update()
        {
            this.transform.rotation = Quaternion.Euler(new Vector3(
                this.transform.rotation.x + 90,
                this.transform.rotation.y + Time.time * 6.0f,
                this.transform.rotation.z));
        }
    }
}