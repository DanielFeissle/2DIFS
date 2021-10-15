using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wheelHealth : MonoBehaviour
{
    public int wheelHP = 100;
    Vector3 pos, velocity;
    private Vector3 offset;
    int lastDamage = 0;
    float delay = 1.0f; //only half delay
    float nextUsage;
 
    // Start is called before the first frame update
    void Start()
    {
        nextUsage = Time.time + delay; //it is on display
      //  offset = transform.position - GameObject.Find("planeSkid_front").transform.position;
     //   pos = transform.position;
    }

 
   
    // Update is called once per frame
    void Update()
    {
        //  transform.position = GameObject.Find("planeSkid_front").transform.position + offset;




        if (Time.time > nextUsage) //continue scrolling
        {
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal == false)
            {
                if (wheelHP < 101)
                {
                    wheelHP = wheelHP + 30;
                    if (wheelHP > 100)
                    {
                        wheelHP = 100;
                    }
                }
            }


            nextUsage = Time.time + delay; //it is on display
        }
        if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal == false)
        { 

            if (wheelHP < 1)
            {
                GameObject.Find("Player_plane").GetComponent<mplane_controller>().colSignal = true;
                GameObject.Find("Player_plane").GetComponent<mplane_controller>().postmortem = 2;
                this.GetComponent<CapsuleCollider2D>().enabled = false;
            }
    }
    }


    void OnCollisionEnter2D(Collision2D c)
    {
        float impulse = 0f;
        foreach (ContactPoint2D cp in c.contacts)
        {
            impulse += cp.normalImpulse;
        }
       
        if (impulse>50)
        {
            if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().engineSpool>55)
            {
                if (GameObject.Find("Player_plane").GetComponent<mplane_controller>().Speed > 20)
                {
                    Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF" + impulse);
                    lastDamage = (Convert.ToInt32(impulse) / 2);
                    wheelHP = wheelHP - lastDamage;
                }
                else
                {
                    Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF" + impulse);
                    lastDamage = (Convert.ToInt32(impulse) / 4);
                    wheelHP = wheelHP - lastDamage;
                }

            }
            else
            {
                Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF" + impulse);
                lastDamage = (Convert.ToInt32(impulse) / 4);
                wheelHP = wheelHP - lastDamage;
            }

        }
    }

    /*
    private void OnCollisionEnter2D(Collision2D collision)
    {
        //    float impact = Vector3.Magnitude(rb.velocity);
        if (collision.gameObject.tag != "Player")
        {

            var direction = transform.InverseTransformPoint(collision.transform.position); //this helps us find which direction the object collided from

            if (direction.y < -0.1f)
            {
                Debug.Log("The object collided with the right side of the ball!");
            }

            velocity = (transform.position - pos) / Time.deltaTime;
            pos = transform.position;
            Debug.Log("HIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" + pos.y);//+ impact);
           // velocity = Vector3.zero;
        }
    }
    */

}
