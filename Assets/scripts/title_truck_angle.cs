using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class title_truck_angle : MonoBehaviour
{

    public Vector3 startPositio=new Vector3(11.573f,-0.932f,0);
    public Vector3 endPosition=new Vector3(13.865f,1.677f,0);
    public float speed = 1.0f;
    float nextUsage;
    float delay = 1.05f; //only half delay

    private void Start()
    {
        nextUsage = Time.time + delay; //it is on display
    }

    private void Update()
    {
        // Move the GameObject towards the end position
        transform.position = Vector3.Lerp(transform.position, endPosition, speed * Time.deltaTime);
        if (Mathf.Round(transform.position.x)==Mathf.Round(endPosition.x))
            {
            if (Mathf.Round(transform.position.y) == Mathf.Round(endPosition.y))
            {
                if (Time.time > nextUsage)
                {
                    transform.position = startPositio;
                    speed = UnityEngine.Random.Range(0.25f, 1);
                    nextUsage = Time.time + delay; //it is on display

                }
                
            }

            }
    }
}
