using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class real_dest_after_touch : MonoBehaviour
{
    //6-23-2022- if needed change this to an arra latter
    public string OBJ;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.tag== OBJ)
        {
            Destroy(this.gameObject);
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
