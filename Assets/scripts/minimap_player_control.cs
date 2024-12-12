using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class minimap_player_control : MonoBehaviour
{
    Vector3 locpos;
    Vector3 locsca;
    // Start is called before the first frame update
    void Start()
    {
        locpos = this.transform.localPosition;
        locsca = this.transform.localScale;
    }
    private void OnEnable()
    {
        if ( mapsize == 1)
        {
            this.GetComponent<MeshRenderer>().enabled = false;
        }
    }
   public int mapsize = 2; 
    // Update is called once per frame
    void Update()
    {
        if (!GameObject.Find("fss")) //12-3-2024-handle game completion screen
        {
            if (Time.timeScale != 0) //5-12-2022-Handle pausing
            {
                if (Input.GetButtonDown("MapToggle"))
                {
                    Debug.Log("PRESS" + mapsize);
                    mapsize++;
                    if (mapsize == 1)
                    {
                        this.GetComponent<MeshRenderer>().enabled = false;
                    }
                    else if (mapsize == 2)
                    {
                        this.GetComponent<MeshRenderer>().enabled = true;
                        //  this.transform.localPosition = new Vector3(6.911f, -3.768f, 2);
                        //this.transform.localScale = new Vector3(4, 2.5f);
                        this.transform.localPosition = locpos;
                        this.transform.localScale = locsca;
                    }
                    else
                    {
                        this.transform.localPosition = new Vector3(5.54f, -2.93f, 2);
                        //   this.transform.localScale = new Vector3(7, 4.5f);
                        //  this.transform.localPosition = locpos*2;
                        this.transform.localScale = locsca * 2;

                    }
                    if (mapsize > 2)
                    {
                        mapsize = 0;
                    }

                }
            }
        }
      

    }
}
