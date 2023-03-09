using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class screenWrapper : MonoBehaviour {
    //2019 version-left/right 
    //2023 updated to include top bottom and keep x/y positions

    public float leftConstraint = 0.0f;
    public float rightConstraint = 0.0f;
    public float TopConstraint = 0.0f;
    public float BottomConstraint = 0.0f;
    public float buffer = 1.0f; // set this so the spaceship disappears offscreen before re-appearing on other side
    public float distanceZ = 10.0f;
    // Use this for initialization
    void Start () {
      
    }

  

    void Awake()
    {
        // set Vector3 to ( camera left/right limits, spaceship Y, spaceship Z )
        // this will find a world-space point that is relative to the screen

        // using the camera's position from the origin (world-space Vector3(0,0,0)
        //leftConstraint = Camera.main.ScreenToWorldPoint( new Vector3(0.0f, 0.0f, 0 - Camera.main.transform.position.z) ).x;
        //rightConstraint = Camera.main.ScreenToWorldPoint( new Vector3(Screen.width, 0.0f, 0 - Camera.main.transform.position.z) ).x;

        // using a specific distance
       leftConstraint = Camera.main.ScreenToWorldPoint(new Vector3(0.0f, 0.0f, distanceZ)).x;
      rightConstraint = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, 0.0f, distanceZ)).x;

        TopConstraint = Camera.main.ScreenToWorldPoint(new Vector3(0.0f, 0.0f, distanceZ)).y;
        BottomConstraint = Camera.main.ScreenToWorldPoint(new Vector3(0.0f, Screen.height, distanceZ)).y;
    }



    void FixedUpdate()
    {
        
    }




    // Update is called once per frame
    void Update () {
      //  Debug.Log("Sfd"+gameObject.transform.position.x);
        if (gameObject.transform.position.x < leftConstraint - buffer)
        { // ship is past world-space view / off screen
            gameObject.transform.position = new Vector2(rightConstraint + buffer, this.transform.position.y);  // move ship to opposite side
        }

        if (gameObject.transform.position.x > rightConstraint + buffer)
        {
            gameObject.transform.position = new Vector2(leftConstraint - buffer, this.transform.position.y);
        }


        if (gameObject.transform.position.y < TopConstraint - buffer)
        { // ship is past world-space view / off screen
            gameObject.transform.position = new Vector2(this.transform.position.x, BottomConstraint + buffer);  // move ship to opposite side
        }

        if (gameObject.transform.position.y > BottomConstraint + buffer)
        {
           gameObject.transform.position = new Vector2(this.transform.position.x, TopConstraint - buffer);
        }

    }
}
