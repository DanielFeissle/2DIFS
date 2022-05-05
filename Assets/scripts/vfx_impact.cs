using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class vfx_impact : MonoBehaviour
{
    //5-3-2022 attach this script to anything that may touch the ground
    public string ObjCheckName= "Player_plane";
    bool impactTrigger = false;
    int gc_vfx = 5;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    GameObject[] items;
    // Update is called once per frame
    void Update()
    {
        if (GameObject.Find(ObjCheckName).GetComponent<mplane_controller>().pdead == false && impactTrigger==true)
        {
            impactTrigger = false;
        }

    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("ground") && impactTrigger==false)
        {
            if (GameObject.Find(ObjCheckName).GetComponent<mplane_controller>().pdead == true)
            {
                items = GameObject.FindGameObjectsWithTag("vfx_impact");
                int tempCount = items.Length;
                foreach (GameObject item in items)
                {
                    if (tempCount > gc_vfx)
                    {
                        if (!item.gameObject.GetComponent<Renderer>().isVisible)
                        {
                            Destroy(item);
                            tempCount--;
                        }
                        
                    }

                }


                string mname = "impact" + UnityEngine.Random.Range(1, 3);
                Debug.Log("THE NAME IS " + mname);
                GameObject ImpactCol = Instantiate(Resources.Load("_FX\\vfx\\" + mname)) as GameObject;
                ImpactCol.name = "impact_dust";
                ImpactCol.transform.position = this.transform.position;
                impactTrigger = true;
            }
        }


    }
}
