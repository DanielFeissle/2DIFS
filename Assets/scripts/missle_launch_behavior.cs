using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class missle_launch_behavior : MonoBehaviour
{
    public Transform target; // The target GameObject to face
    public float rotationSpeed = 5f; // Speed of rotation
    public float speed = 50.0f;
    Vector2 startPos;
    Vector3 startRot;
    private void Start()
    {
        //target = GameObject.Find("Player_plane_title").transform;
        startPos = this.transform.position;
        startRot  = transform.eulerAngles;
        Debug.Log("RETURN_TO " + startPos);
    }
    public bool targetHit;
    void Update()
    {
        if (target != null)
        {
            // Calculate the direction to the target
            Vector3 direction = target.position - transform.position;
            direction.z = 0; // Ensure it's 2D (ignore the z-axis)

            // Calculate the target rotation
            float targetAngle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

            // Smoothly interpolate the rotation
            float angle = Mathf.LerpAngle(transform.eulerAngles.z, targetAngle-90, rotationSpeed * Time.deltaTime);

            // Apply the new rotation
            transform.rotation = Quaternion.Euler(0, 0, angle);
            transform.Translate(Vector3.up * speed * Time.deltaTime);

             if (this.transform.position.x<target.GetComponent<Renderer>().bounds.max.x && this.transform.position.x > target.GetComponent<Renderer>().bounds.min.x)
            {
                if (this.transform.position.y < target.GetComponent<Renderer>().bounds.max.y && this.transform.position.y > target.GetComponent<Renderer>().bounds.min.y)
                {


                    GameObject RepeatGround33 = Instantiate(Resources.Load("Exp2017")) as GameObject;
                    RepeatGround33.name = "plaxplode";
                    RepeatGround33.transform.position = new Vector2(transform.position.x + UnityEngine.Random.Range(-2, 2), transform.position.y - UnityEngine.Random.Range(-2, 2));

                    if (target.gameObject.tag == "Player")
                    {
                        //3-31-2025 for a very specifcic and rushed scene
                        targetHit = true;
                        GameObject.Find("Player_plane_title").transform.position = new Vector2(-0.93f, -2.04f);

                    }
                    //rather than destroy gameobject, reset it back to start position
                    //because this is being used in a reusable scenario
                    //3-26-2025
                    target = null;
                    this.transform.position = startPos;
                    transform.eulerAngles = startRot;
                    Debug.Log("RETURN_TO " + startPos);
                }

            }

        } else if (this.transform.position.y != startPos.y)
        {
            //reset position if no target is present
            this.transform.position = startPos;
            transform.eulerAngles = startRot;
        }
    }


}
