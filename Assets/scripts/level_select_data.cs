using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class level_select_data : MonoBehaviour
{
    public string scene_to_load = "not a scene, hopefully";
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    string prevData = "";

   public void deleteAll()
    {
        prevData = scene_to_load;


        //clean up stage before loading objects
        general_invent_kill[] myItems = FindObjectsOfType(typeof(general_invent_kill)) as general_invent_kill[];
        Debug.Log("Found " + myItems.Length + " instances with this script attached");
        foreach (general_invent_kill item in myItems)
        {
            Debug.Log("THIS IS THE ITEM" + item.gameObject.name);

              Destroy(item.gameObject);
        }


    }
}
