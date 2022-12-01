using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fx_general_shrink_delete : MonoBehaviour
{
    //12-1-2022
    //a general script for fx to shrink down to a size and then delete it
    public float shrinkRate = .0025f;
    public double shrinkRate2= .0025f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.gameObject.transform.localScale -= new Vector3(shrinkRate, shrinkRate, 0);
        if (this.gameObject.transform.localScale.x <= 0)
        {
            Destroy(this.gameObject);
        }
    }
}
