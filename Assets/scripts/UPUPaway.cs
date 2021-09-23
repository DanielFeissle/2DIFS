using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UPUPaway : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnCollisionStay2D(Collision2D collision)
    {
        if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed>17)
        {
            GameObject.Find("Player_plane").GetComponent<Rigidbody2D>().AddForce(new Vector3(0, 1000, 0));
        }

    }
}
