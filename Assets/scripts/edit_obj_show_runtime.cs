using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class edit_obj_show_runtime : MonoBehaviour
{
    //5-5-2022 this will enable basic mesh render for the object it is attached to
    //for use in editor mostly
    // Start is called before the first frame update
    void Start()
    {
        this.GetComponent<MeshRenderer>().enabled = true;
    }

 
}
