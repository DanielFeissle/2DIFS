using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fx_gen_delete_timed : MonoBehaviour
{
   public float delay = 1.5f; //only half delay
    float nextUsage;
    // Start is called before the first frame update
    void Start()
    {
        nextUsage = Time.time+delay;
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.time > nextUsage)
        {
            Debug.Log("DELETED");
            Destroy(this.gameObject);
            nextUsage = Time.time + delay; //it is on display
          
        }

        
    }
}
