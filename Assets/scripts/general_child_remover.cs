using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class general_child_remover : MonoBehaviour
{
    //3-9-2022
    //this script removes child objects if the parent object gets inactivated
    GameObject parObj;
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        parObj = transform.parent.gameObject;
        if (parObj.activeSelf==false)
        {
            gameObject.SetActive(false);
        }
        else
        {
            gameObject.SetActive(true);
        }
    }
}
