using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HUD_SFX_STOP : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        this.GetComponent<AudioSource>().Stop();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
