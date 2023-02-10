using System;
using System.IO;
using UnityEditor;
using UnityEngine;

// Simple editor script that lets you clone your object in a grid
//https://forum.unity.com/threads/solved-in-unity-public-variables-can-be-seen-in-the-inspector-right-see-inside-for-details.267498/
public class IntSliderExample : EditorWindow
{


    //-4000 to 4000
    int Wind = 1;
    int CloudLevel = 1;
    int Weather = 1;
    int FPS = 30;
    float RADBCK = 1;
    float RAD = 1;
    int spacing = 2;
    string objTXT = "Welcome!";
    int getHeight = 0; //height to obtain
    int lstart = 0; //land start
    int lend = 1; //land end
    private SerializedProperty WindCross;
    private SerializedProperty walkSpeedProperty;
    float gravx = 0;
    float gravy = -9.81f;
    [CustomEditor(typeof(editor_world_storage), true)]
    [MenuItem("Tools/Scene Settings")]
    static void Init()
    {
        // editor_world_storage editor_world_storage;




       // UnityEditor.EditorWindow window = GetWindow(typeof(EditorGUIIntSlider));
        UnityEditor.EditorWindow window = GetWindow(typeof(IntSliderExample));
       // EditorWindow window = GetWindow(typeof(IntSliderExample));
     //   window.position = new Rect(100, 100, 250, 100);
        window.Show();
    }


    private void OnEnable()
    {
       // WindCross = SerializedObject.FindProperty("");
    }


    private void CreateGUI()
    {
        //string  WindCrossf = SerializedObject.FindProperty("WindCross");
        // Wind = 333;
        //  Wind = Camera.main.GetComponent<editor_world_storage>().Wind;
        string path = "Assets/Resources/scenes/_scene_data_holder.txt";
        StreamReader reader = new StreamReader(path);

       

        ////////////////////////////////////

        int count = 0;
        //12-8-2022
        //perhaps a better method to catch if a file does not exist
        string txt = reader.ReadToEnd();// (TextAsset)Resources.Load("scenes\\" + sceneRead, typeof(TextAsset));
        foreach (string tta in txt.Split('\n'))
        {
          
            count++;
            if (count >= txt.Split('\n').Length)
            {
                break;
            }
            if (tta.Substring(0, 1) == "#")
            {
                Debug.Log("line comment");

            }
            else if (tta.Substring(0, 3) == "GTO")
            {
                //template will have most up to date content
                //(0-Height/distance obj, 1-Land on gameobject name, 2-Pass checkpoints, 3-Grab object and get to designated end point)
                string[] sclir = tta.Split(',');
              //  GameObject.Find("checkerBoard(256x256)").GetComponent<POLF>().GameObjective = Convert.ToInt32(sclir[1]);

            }
            else if (tta.Substring(0, 3) == "CLD")
            {
                string[] sclir = tta.Split(',');
                CloudLevel = int.Parse(sclir[1]);
                //Camera.main.GetComponent<weather>().cloudHeight = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "WTH")
            {
                string[] sclir = tta.Split(',');
                Weather = int.Parse(sclir[1]);
                // Camera.main.GetComponent<weather>().cloudy = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "WND")
            {
                string[] sclir = tta.Split(',');
                Wind= int.Parse(sclir[1]);
                //Camera.main.GetComponent<weather>().AirSpeed = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "RAB")
            {
                string[] sclir = tta.Split(',');
                RADBCK = Single.Parse(sclir[1]);
                //  Camera.main.GetComponent<weather>().radiosity = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "GRX")
            {
                string[] sclir = tta.Split(',');
                gravx = Single.Parse(sclir[1]);
                //  Camera.main.GetComponent<weather>().radiosity = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "GRY")
            {
                string[] sclir = tta.Split(',');
                gravy = Single.Parse(sclir[1]);
                //  Camera.main.GetComponent<weather>().radiosity = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "FPS")
            {
                string[] sclir = tta.Split(',');
                FPS = int.Parse(sclir[1]);
                //  Camera.main.GetComponent<weather>().background_radiosity = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "RAD")
            {
                string[] sclir = tta.Split(',');
                RAD = Single.Parse(sclir[1]);
                //  Camera.main.GetComponent<weather>().background_radiosity = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "OBJ")
            {
                string[] sclir = tta.Split(',');
                objTXT = sclir[1];
                getHeight = int.Parse(sclir[2]);
                lstart = int.Parse(sclir[3]);
                lend = int.Parse(sclir[4]);
                //  Camera.main.GetComponent<weather>().background_radiosity = int.Parse(sclir[1]);
            }
        }
        Debug.Log("--------------------------------------DONE");

        ///////////////////////////////////
        Debug.Log("FFFFFFFFFFFFFFFFFFFFFFFF EEEEEEEEEEEEEE");
        //Debug.Log(reader.ReadToEnd());
        reader.Close();

    }
    void OnGUI()
    {
      


        Wind = EditorGUILayout.IntSlider("Wind Level", Wind, -4000, 4000);
         CloudLevel = EditorGUILayout.IntSlider("Cloud Level", CloudLevel, -4000, 4000);
         Weather = EditorGUILayout.IntSlider("Weather",Weather, 0, 99);
         FPS = EditorGUILayout.IntSlider("Scene Target FPS",FPS, 30, 300);
         RADBCK = EditorGUILayout.Slider("RadBCK",RADBCK, 0, 1);
         RAD = EditorGUILayout.Slider("Rad",RAD, 0, 1);
        gravx = EditorGUILayout.Slider("Gravity X", gravx, -100, 100);
        gravy = EditorGUILayout.Slider("Gravity Y", gravy, -100, 100);
        objTXT = EditorGUILayout.TextField("Objective", objTXT);
        getHeight = EditorGUILayout.IntField("Height to reach", getHeight);
        lstart = EditorGUILayout.IntField("Distance start range", lstart);
        lend = EditorGUILayout.IntField("Distance end range", lend);
        //    CloudLevel = EditorGUILayout.IntSlider(CloudLevel, 1, 10);
        if (GUILayout.Button("Stage Changes"))
            stageChanges();
    }

    void stageChanges()
    {
      
        //Write some text to the test.txt file
        StreamWriter writer = new StreamWriter("Assets/Resources/scenes/_scene_data_holder.txt", false);
        writer.NewLine = "\r\n";

        writer.WriteLine("CLD,"+CloudLevel);
        writer.WriteLine("WTH," + Weather);
        writer.WriteLine("WND," + Wind);
        writer.WriteLine("RAD," + RAD);
        writer.WriteLine("RAB," + RADBCK);
        writer.WriteLine("FPS," + FPS);
        writer.WriteLine("GRX," + gravx);
        writer.WriteLine("GRY," + gravy);
        writer.WriteLine("OBJ," + objTXT+","+getHeight+","+lstart+","+lend);

        writer.Close();
    }


}