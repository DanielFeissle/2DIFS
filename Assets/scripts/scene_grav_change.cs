using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class scene_grav_change : MonoBehaviour
{
    //10-25-2022
    //call this script to change gravity.
    //this should be attached to 
    // Start is called before the first frame update
    Vector2 startGrav;
    void Start()
    {
        startGrav = Physics2D.gravity;
     //   Physics2D.gravity = new Vector2(0, -3.8f);

    }
    public void resetGravi()
    {
        Physics2D.gravity = startGrav;
    }
    public void changeGravi(float gravX, float gravY)
    {
        Physics2D.gravity = new Vector2(gravX, gravY);
    }


}
