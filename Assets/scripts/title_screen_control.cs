using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class title_screen_control : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
       // StartCoroutine(SlowBounceOnRecover());
    }
    public int mainMenuLocation = 0; //main menu location transition

    public Vector3 startPositio = new Vector3(10, 20, -10);
    public Vector3 endPosition = new Vector3(10, -1.2f, -10);


    public Vector3 plane_startPositio = new Vector3(-1, -1.44f, 0);
    public Vector3 plane_endPosition = new Vector3(60, -1.44f, 0);

    public int RandomDelay = 5;
    int delayCount = 0;
    GameObject title_plane;
    //Player_plane_title
    public float speed = 1.0f;
    public float planeSpeed = 0.2f;
    float nextUsage;
    float delay = 1.0f; //only half delay

    private void Awake()
    {
        RandomDelay= Mathf.RoundToInt(UnityEngine.Random.Range(1, 10));
        Debug.Log("ILIVE!!");
        mainMenuLocation = 1; //start the title screen process
        nextUsage = Time.time + delay; //it is on display
        title_plane = GameObject.Find("Player_plane_title");
    }

    // Update is called once per frame
    void Update()
    {

        // Move the GameObject towards the end position
        if (mainMenuLocation == 1)
        {
            //we do the first task, which is to wait a little random while
            if (Time.time > nextUsage)
            {
                transform.position = startPositio;
                delayCount++;
                nextUsage = Time.time + delay; //it is on display
            }
            if (delayCount>RandomDelay)
            {
                RandomDelay = Mathf.RoundToInt(UnityEngine.Random.Range(1, 10));
                mainMenuLocation = 2;
                delayCount = 0;
            }
        }
        else if (mainMenuLocation == 2)
        {
            //now we follow the plane down
            startPositio = new Vector3(10, 20, -10);
            this.transform.position = startPositio;
            endPosition = new Vector3(10, -1.2f, -10);
            mainMenuLocation = 3;
        }
        else if (mainMenuLocation == 3)
        {
            MoveAndFollowPlaneDown();
          
        }
        else if ( mainMenuLocation==4)
        {
            if (Time.time > nextUsage)
            {
              //  transform.position = startPositio;
                delayCount++;
                nextUsage = Time.time + delay; //it is on display
            }
            if (delayCount > RandomDelay)
            {
                RandomDelay = Mathf.RoundToInt(UnityEngine.Random.Range(1, 10));
                mainMenuLocation = 5;
                title_plane.transform.position = plane_startPositio;
                delayCount = 0;
            }

        }
        else if (mainMenuLocation==5)
        {

            PlaneMoveLeftToRight();

        }




    }


    private void PlaneMoveLeftToRight()
    {
      
        title_plane.transform.position = Vector3.Lerp(title_plane.transform.position, plane_endPosition, planeSpeed * Time.deltaTime);
        if (Mathf.Round(title_plane.transform.position.x) == Mathf.Round(plane_endPosition.x))
        {
            if (Mathf.Round(title_plane.transform.position.y) == Mathf.Round(plane_endPosition.y))
            {
                delayCount = 0;
                nextUsage = Time.time + delay; //it is on display
                mainMenuLocation = 6;
                /*
                if (Time.time > nextUsage)
                {
                    transform.position = startPositio;
                  
                    nextUsage = Time.time + delay; //it is on display

                }
                */

            }

        }
    }

    private void MoveAndFollowPlaneDown()
    {
        transform.position = Vector3.Lerp(transform.position, endPosition, speed * Time.deltaTime);
        if (Mathf.Round(transform.position.x) == Mathf.Round(endPosition.x))
        {
            if (Mathf.Round(transform.position.y) == Mathf.Round(endPosition.y))
            {
                delayCount = 0;
                nextUsage = Time.time + delay; //it is on display
                mainMenuLocation = 4;
                /*
                if (Time.time > nextUsage)
                {
                    transform.position = startPositio;
                  
                    nextUsage = Time.time + delay; //it is on display

                }
                */

            }

        }
    }


    private IEnumerator SlowBounceOnRecover()
    {



        YieldInstruction timedWait = new WaitForSeconds(0.5f);
        Vector3 lastPosition = transform.position;
        float lastTimestamp = Time.time;
     //   invincible = true;
     //   while (engineSpool < 10)
        {
            yield return timedWait;
            GameObject.Find("planeSkid_back").GetComponent<wheelHealth>().wheelHP = 100;
            GameObject.Find("planeSkid_front").GetComponent<wheelHealth>().wheelHP = 100;

        }

    }

}
