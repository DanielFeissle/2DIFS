using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class button_scene_select_manager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (this.GetComponent<realGenericButtonListner>().buttonScreeen==5)
        {
        
            SceneManager.LoadScene("title_scene");
        }
    }
}
