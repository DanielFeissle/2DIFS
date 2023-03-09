using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ball_screen : MonoBehaviour
{
    //3-8-2023
    //testing not using a rb to move objects around on the screen. to do it with as few as components as needed.
    private Camera cam;
    float distance = 5;
    float ax = 0;
    float ay = 0;
    Vector3 curtar = new Vector3(0, 0, 0);
    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
        do //never have 0,0,0 the object will not go anywhere
        {
            curtar = new Vector3(Random.Range(-1, 1), Random.Range(-1, 1), 0);
        } while (curtar == new Vector3(0, 0, 0));
        ax = curtar.x;
        ay = curtar.y;
        if (ax==0)
        {
            if (Random.Range(0,100)<50)
            {
                ax = 1;
            }
            else
            {
                ax = -1;
            }
        }
        if (ay == 0)
        {
            if (Random.Range(0, 100) < 50)
            {
                ay = 1;
            }
            else
            {
                ay = -1;
            }
        }

    }
    //these are counters to give time to the ball/boundry so they are not still collliding
    int leftCol = 0;
    int wallCol = 0;
    private void LateUpdate()
    {

        CircleCollider2D myCollider = this.GetComponent<CircleCollider2D>();
        Collider2D[] otherColliders = Physics2D.OverlapAreaAll(myCollider.bounds.min, myCollider.bounds.max);
     

        if (otherColliders.Length > 1 && leftCol == 0)
        {
            leftCol = leftCol + 30;
            ax = ax * -1;
            if (Random.Range(0,100)>50)
            {
                ay = -1;
            }
            else
            {
                ay = 1;
            }
        }
        if (leftCol>0)
        {
            leftCol--;
        }
     //   Debug.Log(wallCol);
        cam = Camera.main;
        Vector3 p = cam.ScreenToWorldPoint(new Vector3(0, cam.pixelHeight, cam.nearClipPlane)); //top left
        Vector3 q = cam.ScreenToWorldPoint(new Vector3(cam.pixelWidth, 0, cam.nearClipPlane)); //bottom right

        if (this.transform.position.x < p.x || this.transform.position.x > q.x)
        {
            if (wallCol==0)
            {
                ax = ax * -1;
                wallCol = 30;
            }
           
        }

        /////
        if (this.transform.position.y > p.y || this.transform.position.y < q.y)
        {
            if (wallCol == 0)
            {
                ay = ay * -1;
                wallCol = 30;
            }

        }

        curtar = new Vector3(ax, ay, 0);
        transform.position = transform.position + curtar * distance * Time.deltaTime;

        if (wallCol > 0)
        {
            wallCol--;
        }

    }
    // Update is called once per frame
    void Update()
    {



    }
}
