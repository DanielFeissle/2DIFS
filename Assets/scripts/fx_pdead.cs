using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fx_pdead : MonoBehaviour
{
    //6-30-2022
    //enable this script when the pdead is true (generalized as well)
    //first use in 2difs
    float nextUsage;
   public float delay = 0.4f; //only half delay
    int randFX = 2;
    int fxcnt = 0;
    //The resource to lfoad should be something that disappears after spawning (animation wise)
    public string ResourceLoad = "";
    public int offsetx=0;
    public int offsety = 0;
    // Start is called before the first frame update
    void Start()
    {
        fxcnt = 0;
        randFX = UnityEngine.Random.Range(0, 5);
    }

    // Update is called once per frame
    void Update()
    {


        if (Time.time > nextUsage) //delete otherwise
        {
            if (fxcnt>randFX)
            {
                fxcnt = 0;
            //    Debug.Log("WHAT I TO LOAD IS " + ResourceLoad);
                GameObject FX_obj = Instantiate(Resources.Load(ResourceLoad)) as GameObject;
                FX_obj.name = "FX_obj";
                FX_obj.transform.position = this.transform.position+new Vector3(offsetx, offsety,0);
                FX_obj.transform.localScale = new Vector3(UnityEngine.Random.Range(.5f, 2), UnityEngine.Random.Range(.5f, 2), 1);
                
                if (FX_obj.GetComponent<Rigidbody2D>())
                {
                    FX_obj.GetComponent<Rigidbody2D>().AddRelativeForce(Vector3.up * 15 * Time.deltaTime * 100);
                }
            }

            fxcnt++;
            randFX = UnityEngine.Random.Range(0, 5);
            nextUsage = Time.time + delay; //it is on display
        }
}
}
