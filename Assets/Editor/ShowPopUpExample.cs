using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using UnityEditor.SceneManagement;
using System.IO;
public class ShowPopupExample : EditorWindow
{

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

        if (SceneManager.GetActiveScene().name == "scene_edit_template")
        {
            if (!string.IsNullOrEmpty(STL))
            {
                //   Camera.main.
                //   Camera.main.GetComponent<world_scene_editor>().ReadString(STL);

                string blarg = @"#lines that start with # are comments 
#values are seperated by commas (,)
#objective for scene
#GTO game type objective (0-Height/distance obj, 1-Land on gameobject name, 2-Pass checkpoints, 3-Grab object and get to designated end point)
GTO,0
#OBJ,Scene title, GET Height (+or-), Land start, Land End
OBJ,Welcome test!,40,0,9999
#CLD,Cloud Height
CLD,80
#WTH, Weather 0-99 higher number more clouds/rain
WTH,40
#WND, Wind level -4000 to 4000
WND,444
#RAD, RADIOSITy level 0 to 1
RAD,1
#RAB, Background Radiosit leve 0 to 1
RAB,1
# Prefab,LayerOrder,StartX,EndX,StartY,EndY
";
                GameObject[] Objects;
                Objects = GameObject.FindGameObjectsWithTag("ground");
                foreach (var obj in Objects)
                {
                    //   var objPos = obj.transform.position;

                    //  var xPos = objPos.x - 100;

                    //   obj.transform.position = new Vector3(xPos, objPos.y, objPos.z);
                    blarg = blarg + "ground/" +obj.name+","+obj.layer+","+obj.GetComponent<Renderer>().bounds.min.x+","+ obj.GetComponent<Renderer>().bounds.max.x +","+ obj.GetComponent<Renderer>().bounds.min.y +","+ obj.GetComponent<Renderer>().bounds.max.y+@"
";
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
                        Debug.Log("THIS IS " + ff);
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