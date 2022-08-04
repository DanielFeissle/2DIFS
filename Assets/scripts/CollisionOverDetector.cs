using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionOverDetector : MonoBehaviour {
    Renderer m_Renderer;
    bool colChecker = false;
    // Use this for initialization
    //2020: script used for specr3
    //2022:modified script for use in 2difs (clean up)
    public string[] TagsToWatch;
    void Start () {
        m_Renderer = GetComponent<Renderer>();


        Component[] colDet;

        colDet = GetComponents(typeof(BoxCollider2D));

        foreach (BoxCollider2D boxCheck in colDet)
        {
            if (boxCheck.isTrigger==false)
            {
                Debug.Log("THIS HAS A COLLIDER WARNING");
                colChecker = true;
            }
        }
             



        Debug.Log("EXIT OF CHECK SCRFIP");
    }
    int sameFrameOffScreen = 0; //added 9-29-20, this feature is ONLY for the 
    int priorFrameScreen = 0;
	// Update is called once per frame
	void Update () {
        if (priorFrameScreen==sameFrameOffScreen)
        {
            sameFrameOffScreen = 0;
        }
     
        //9-17-20 added to a general script
        //4-7-20 new inner collision detection method!
        //will actually check if objects are inside of playership
        if (colChecker==true)
        {

            GameObject otherColliders = Physics2D.OverlapBox(this.transform.position, this.transform.localScale, 0).gameObject;
            foreach (string tag in TagsToWatch)
            {
                if (otherColliders.tag == tag)
                {

                    bool clearToChuck = false;
                    // use cases, for if it has  a trigger or not (SIMPLE)
                    if (otherColliders.gameObject.GetComponent<BoxCollider2D>())
                    {
                        if (otherColliders.gameObject.GetComponent<BoxCollider2D>().isTrigger==false)
                        {
                            clearToChuck = true;
                        }
                    }
                   else if (otherColliders.gameObject.GetComponent<PolygonCollider2D>())
                    {
                        if (otherColliders.gameObject.GetComponent<PolygonCollider2D>().isTrigger == false)
                        {
                            clearToChuck = true;
                        }
                    }
                  else  if (otherColliders.gameObject.GetComponent<CircleCollider2D>())
                    {
                        if (otherColliders.gameObject.GetComponent<CircleCollider2D>().isTrigger == false)
                        {
                            clearToChuck = true;
                        }
                    }
                    //end of SIMPLE use cases
                    if (clearToChuck==true)
                    {
                        sameFrameOffScreen++;
                        Debug.Log("$$$$$$$$$$$$$$$$$$$$$$$$" + otherColliders.name);
                        Debug.Log("object is stuck");
                        transform.position = new Vector3(transform.position.x + .6f, transform.position.y + .6f);
                    }

                }
            }


        }
        priorFrameScreen = sameFrameOffScreen;
    

//        if ((GameObject.Find("Main Camera").transform.position.x-this.transform.position.x)<30) //9-22-20we know it is a single screen then
if (colChecker==true && sameFrameOffScreen>5)
        {
            if (m_Renderer.isVisible)
            {
                //  //debug.log("object is visible");

            }
            else
            {
                this.transform.position = new Vector2(GameObject.Find("Main Camera").transform.position.x, GameObject.Find("Main Camera").transform.position.y);
                //boss is off screen


            }
        }



    }
    

}

