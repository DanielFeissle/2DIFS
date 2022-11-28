using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class first_time_start : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        //11-17-2022 this script gets called once per game load
        GameObject pback = Instantiate(Resources.Load("player\\sel_a")) as GameObject;
        pback.name = "sela";
        pback.transform.position = new Vector2(0, 0);
        DontDestroyOnLoad(pback.gameObject);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
