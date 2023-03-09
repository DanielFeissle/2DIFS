using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ball_paddle : MonoBehaviour
{
    float distance = 10;
   
    Vector3 curtar = new Vector3(0, 0, 0);
    Vector3 StartPos = new Vector3(0, 0, 0);
    // Start is called before the first frame update
    void Start()
    {
        StartPos = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        GameObject ball = GameObject.Find("ball");
        curtar = new Vector3(0, ball.transform.position.y, 0);
        //    transform.position = transform.position + curtar * distance * Time.deltaTime;
        transform.position =  new Vector3(StartPos.x, ball.transform.position.y, StartPos.z);
    }
}
