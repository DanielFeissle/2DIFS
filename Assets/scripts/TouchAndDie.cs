using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchAndDie : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
   public string defTag1 = "";
    public string defTag2 = "";
    public bool colSignal = false;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag != defTag1)
        {
            if (collision.tag != defTag2)
            {
                colSignal = true;
            }
        }
    }
}
