using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class Level_Flow_Paths : MonoBehaviour
{
   //7-6-2023
   //hopefully a general level flow loader that can be called upon by other scripts
    // Start is called before the first frame update
    void Start()
    {

    }



public string checkLevels(int scene,int world)
    {
        Debug.Log("HHHHHHHHHHHHHHHHHHHHHHHIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII");
        StreamReader reader = new StreamReader("Assets/Resources/scenes/flow.txt");
        int count = 0;
        string txt = reader.ReadToEnd();
        string totScenesPerWorld = "";
        foreach (string tta in txt.Split('\n'))
        {
            if (world==count )
            {
                //we are on the correct scene setup
                string[] master_data = tta.Split(';');
                //master data 0 is the background (if used)
                //master data 1 is the scenes per level
                string[] ind_scn = master_data[1].Split(',');
                totScenesPerWorld = world + "x" + ind_scn.Length;
            }

            count++;
        }
        return totScenesPerWorld;
    }
}
