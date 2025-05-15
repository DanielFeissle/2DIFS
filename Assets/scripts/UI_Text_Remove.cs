using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UI_Text_Remove : MonoBehaviour
{
    //5-12-2025
    //better method for destroying gameobject is
    //destroy(this.gameobject, 5);
    public float time_to_removal = 5;
    float nextUsage;
    float delay = 1.0f; //only half delay
    int delayCount = 0;
    // Start is called before the first frame update
    void Start()
    {
        nextUsage = Time.time + delay; //it is on display
    }

    // Update is called once per frame
    void Update()
    {

        //in title pre loop
        if (Time.time > nextUsage)
        {
            // transform.position = startPositio;
            delayCount++;
            nextUsage = Time.time + delay; //it is on display
        }
        if (delayCount>time_to_removal)
        {
            Destroy(this.gameObject);
        }

    }
}
