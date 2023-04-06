using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using UnityEditor.SceneManagement;
using System.IO;
using System;

public class ShowPopupExample : EditorWindow
{
    /*
    [MenuItem("Tools/Scene Settings")]
    static void Settings()
    {
        // var STL = EditorInputSettings.Show("HI","Thh","b");
        //   Debug.Log(STL);
        EditorWindow window = GetWindow(typeof(EditorInputSettings));
      //  var STL= window.Show();
        if (SceneManager.GetActiveScene().name == "scene_edit_template")
        {
         //   if (!string.IsNullOrEmpty(STL))
            {
                //   Camera.main.
              //  Camera.main.GetComponent<world_scene_editor>().ReadString(STL);

            }
        }
        else
        {
        //    ShowPopupExample window = ScriptableObject.CreateInstance<ShowPopupExample>();
            window.position = new Rect(Screen.width / 2, Screen.height / 2, 250, 150);
            window.ShowPopup();
        }
    }
    */

    //https://docs.unity3d.com/ScriptReference/EditorWindow.ShowPopup.html
    [MenuItem("Tools/Scene Load")]
    static void Init()
    {
        var STL = EditorInputDialog.Show("Question", "Type name of scene located in resources/scenes/XXX", "");
        
        if (SceneManager.GetActiveScene().name == "scene_edit_template")
        {
            if (!string.IsNullOrEmpty(STL))
            {
                //   Camera.main.
                Camera.main.GetComponent<world_scene_editor>().ReadString(STL);
            
            }
        }
        else
        {
            ShowPopupExample window = ScriptableObject.CreateInstance<ShowPopupExample>();
            window.position = new Rect(Screen.width / 2, Screen.height / 2, 250, 150);
            window.ShowPopup();
        }
    }





    [MenuItem("Tools/Scene Save")]
    static void InitSave()
    {
        var STL = EditorInputDialog.Show("Question", "Type name of scene to be saved in resources/scenes/XXX", "");
        StreamReader reader = new StreamReader("Assets/Resources/scenes/_scene_data_holder.txt");
        string txt_chunk="";
        TextAsset txt_act_chunk=null;
        //3-30-2023
        //Chunk data zone
         
        if (System.IO.File.Exists("Assets/Resources/scenes/_scene_loader_chunk.txt"))
        {
            StreamReader reader_chunk = new StreamReader("Assets/Resources/scenes/_scene_loader_chunk.txt");
            txt_chunk = reader_chunk.ReadToEnd();
            txt_act_chunk = (TextAsset)Resources.Load("Assets/Resources/scenes/_scene_loader_chunk.txt", typeof(TextAsset));
        }
         

        ////////////////////////////////////
        //1-26-2023 Final piece of overhead data modification plan
        int Wind = 1;
        int CloudLevel = 1;
        int Weather = 1;
        int FPS = 60;
        float RADBCK = 1;
        float RAD = 1;
        int count = 0;
        string objTXT = "Welcome!";
        int getHeight = 0; //height to obtain
        int lstart = 0; //land start
        int lend = 1; //land end
        float gravx = 0;
        float gravy = -9.81f;
        //12-8-2022
        //perhaps a better method to catch if a file does not exist
        string txt = reader.ReadToEnd();
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
            else if (tta.Substring(0, 3) == "FPS")
            {
                string[] sclir = tta.Split(',');
                FPS = int.Parse(sclir[1]);
                // Camera.main.GetComponent<weather>().cloudy = int.Parse(sclir[1]);
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
            else if (tta.Substring(0, 3) == "WND")
            {
                string[] sclir = tta.Split(',');
                Wind = int.Parse(sclir[1]);
                //Camera.main.GetComponent<weather>().AirSpeed = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "RAD")
            {
                string[] sclir = tta.Split(',');
                RADBCK = Single.Parse(sclir[1]);
                //  Camera.main.GetComponent<weather>().radiosity = int.Parse(sclir[1]);
            }
            else if (tta.Substring(0, 3) == "RAB")
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
        reader.Close();
        if (SceneManager.GetActiveScene().name == "scene_edit_template")
        {
            if (!string.IsNullOrEmpty(STL))
            {
             //   Camera.main.GetComponent<editor_world_storage>().Wind=5;
                //   Camera.main.
                //   Camera.main.GetComponent<world_scene_editor>().ReadString(STL);

                string blarg = $@"#lines that start with # are comments 
#values are seperated by commas (,)
#objective for scene
#GTO game type objective (0-Height/distance obj, 1-Land on gameobject name, 2-Pass checkpoints, 3-Grab object and get to designated end point)
GTO,0
#OBJ,Scene title, GET Height (+or-), Land start, Land End
OBJ,{objTXT},{getHeight},{lstart},{lend}
#CLD,Cloud Height
CLD,{CloudLevel}
#WTH, Weather 0-99 higher number more clouds/rain
WTH,{Weather}
#WND, Wind level -4000 to 4000
WND,{Wind}
#RAD, RADIOSITy level 0 to 1
RAD,{RAD}
#RAB, Background Radiosit leve 0 to 1
RAB,{RADBCK}
#FPS, target fps for the scene
FPS,{FPS}
#GRX, gravity scale x
GRX,{gravx}
#GRY, gravity scale y
GRY,{gravy}
# Prefab,LayerOrder,StartX,EndX,StartY,EndY
";
                GameObject[] Objects;
                Objects = GameObject.FindGameObjectsWithTag("ground");
                foreach (var obj in Objects)
                {
                    //   var objPos = obj.transform.position;

                    //  var xPos = objPos.x - 100;

                    //   obj.transform.position = new Vector3(xPos, objPos.y, objPos.z);
                    //1-24-2023 fix issue with spaces in the name
                    //PrefabUtility.GetPrefabParent(obj)
                    //1-24-2023 this is a duplicate of below, the other options- Found best method is to combine parts
                    //                    blarg = blarg + "ground/" + PrefabUtility.GetCorrespondingObjectFromOriginalSource(obj).name + ","+obj.layer+","+obj.GetComponent<Renderer>().bounds.min.x+","+ obj.GetComponent<Renderer>().bounds.max.x +","+ obj.GetComponent<Renderer>().bounds.min.y +","+ obj.GetComponent<Renderer>().bounds.max.y+@"
                    //       blarg = blarg + "ground/" + PrefabUtility.GetCorrespondingObjectFromOriginalSource(obj).name + ","+obj.layer+","+obj.transform.position.x+","+ obj.transform.position.x +","+ obj.transform.position.y +","+ obj.transform.position.y+@"

                    if (! obj.GetComponent("marker_standalone")) //add this in the normal regard
                    {
                        try
                        {
                            blarg = blarg + "ground/" + PrefabUtility.GetCorrespondingObjectFromOriginalSource(obj).name + "," + obj.layer + "," + obj.transform.position.x + "," + obj.GetComponent<Renderer>().bounds.max.x + "," + obj.transform.position.y + "," + obj.GetComponent<Renderer>().bounds.max.y + @"
";
                          
                        } catch (Exception ex)
                        {
                           
                            blarg = blarg + "ground/" + obj.name.Split('-')[1].Split('/')[1] + "," + obj.layer + "," + obj.transform.position.x + "," + obj.GetComponent<Renderer>().bounds.max.x + "," + obj.transform.position.y + "," + obj.GetComponent<Renderer>().bounds.max.y + @"
";
                           
                        }
                    }



                }

                if (txt_chunk != "")
                {
                    string[] totChunk = txt_chunk.Split('\r');
                    int totCount = totChunk.Length;
                    int arrCount = 0;
                    foreach (string st in totChunk)
                    {
                      //  blarg = blarg + st + Environment.NewLine;// @"
                                                                 //";
                        if (arrCount>= totCount-1)
                        {
                            //at the end
                            blarg = blarg + st;
                        }
                        else
                        {
                            blarg = blarg + st + Environment.NewLine;
                        }
                        arrCount++;
                    }
                   blarg= blarg.Replace("\r\n\r\n", "\r\n");
                    
                }
                
                string path = "Assets/Resources/scenes/"+STL+".txt_temp";
                string ACTpath = "Assets/Resources/scenes/" + STL + ".txt";
                //Write some text to the test.txt file
                StreamWriter writer = new StreamWriter(path, false);
                writer.NewLine = "\r\n";
            
                string[] bla = blarg.Split('\n');
                foreach (string ff in bla)
                    {
                    if (ff != "")
                    {
                        writer.Write(ff);
                      //  Debug.Log("THIS IS " + ff);
                    }
                    
                }
                
                writer.Close();
                //Re-import the file to update the reference in the editor
                File.WriteAllLines(ACTpath, File.ReadLines(path));
                File.Delete(path);
                AssetDatabase.ImportAsset(ACTpath);

            }
                
        }
        else
        {
            ShowPopupExample window = ScriptableObject.CreateInstance<ShowPopupExample>();
            window.position = new Rect(Screen.width / 2, Screen.height / 2, 250, 150);
            window.ShowPopup();
        }
    }

    [MenuItem("Tools/Reset")]
    static void InitReset()
    {
      //  var STL = EditorInputDialog.Show("Question", "Type name of scene to be saved in resources/scenes/XXX", "");

        if (SceneManager.GetActiveScene().name == "scene_edit_template")
        {
            //     EditorSceneManager.OpenScene("Scenes/scene_edit_template.unity");
            // EditorSceneManager.OpenScene(Application.dataPath + "/" + myScenePath.Substring(myScenePath.IndexOf("Scenes")), OpenSceneMode.Additive);
            EditorSceneManager.OpenScene(Application.dataPath + "/" + "Scenes/scene_edit_template.unity", OpenSceneMode.Single);

        }
        else
        {
            ShowPopupExample window = ScriptableObject.CreateInstance<ShowPopupExample>();
            window.position = new Rect(Screen.width / 2, Screen.height / 2, 250, 150);
            window.ShowPopup();
        }
    }

    void OnGUI()
    {
        EditorGUILayout.LabelField("This master scene name and the master template do not match. When using this, have open 'scene_edit_template' and avoid saving!", EditorStyles.wordWrappedLabel);
        GUILayout.Space(70);
        if (GUILayout.Button("Agree!")) this.Close();
    }
}