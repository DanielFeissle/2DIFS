using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
[InitializeOnLoad]

public class editor_last_placed : MonoBehaviour
{
    //3-30-2023 retrieved/modified
    // from
    //https://forum.unity.com/threads/last-object-selected-in-editor.239900/
    static editor_last_placed()
    {
        EditorApplication.update += EditorUpdate;
    }

    private static List<GameObject> OrderedSelection = new List<GameObject>();
    public static GameObject LastSelected;

    private static void EditorUpdate()
    {
        if (SceneManager.GetActiveScene().name == "scene_edit_template")
        {
            CreateOrderedSelection();
        }
           
    }
     
    private static void CreateOrderedSelection()
    {
        bool logLastSelected = false;

        var selection = Selection.GetFiltered<GameObject>(SelectionMode.Unfiltered);

        for (var i = OrderedSelection.Count - 1; i >= 0; i--)
        {
            var s = OrderedSelection[i];
            if (s == null)
            {
                OnSelectionModified(null, SelectionChange.Remove);
            }

            // Check that we contain every transform in the transforms.
            if (selection.Contains(s) == false)
            {
              
                OnSelectionModified(s, SelectionChange.Remove);
                OrderedSelection.Remove(s);
                logLastSelected = true;
            }
        }

        foreach (var s in selection)
        {
            var countDifference = selection.Length - OrderedSelection.Count;
            if (countDifference >= 2 && LastSelected != null) // we have made a big difference in count suddenly. We probably used shift to add multiple objects.
            {
                // ==> we need to try and figure out in which direction (up or down) the shift selection has been executed, and determine the order based on that.

                // newObjects contains only the objects that are not ordered yet.
                var newObjects = selection.ToList();
                for (int i = OrderedSelection.Count - 1; i >= 0; i--)
                {
                    newObjects.Remove(OrderedSelection[i]);
                }

                // where are the new objects compared to the last selection?

                var shiftSelectionGoesUp = ((GameObject)newObjects[0]).transform.GetSiblingIndex() < LastSelected.transform.GetSiblingIndex();

                List<UnityEngine.GameObject> orderedNewObjects;
                if (shiftSelectionGoesUp)
                {
                    orderedNewObjects = newObjects.OrderByDescending(x => ((GameObject)x).transform.GetSiblingIndex()).ToList();
                }
                else
                {
                    orderedNewObjects = newObjects.OrderBy(x => ((GameObject)x).transform.GetSiblingIndex()).ToList();
                }

                foreach (var orderedNewObject in orderedNewObjects)
                {
                    var go = ((GameObject)orderedNewObject);
                    OnSelectionModified(go, SelectionChange.Add);
                    OrderedSelection.Add(go);
                    logLastSelected = true;
                }
            }
            else // this is probably a simple click selection.
            {
                // Check that we contain every transform in the transforms.
                if (OrderedSelection.Contains(s) == false)
                {
                    var go = ((GameObject)s);
                    OnSelectionModified(go, SelectionChange.Add);
                    OrderedSelection.Add(go);
                    logLastSelected = true;
                }
            }
        }

        LastSelected = OrderedSelection.Count == 0 ? null : OrderedSelection[OrderedSelection.Count - 1];
        if (logLastSelected)
        {

            if (LastSelected != null)
            {
                
                if (Selection.activeObject.name.Contains("__bulk_edit_in_text_mode_no_editor_changes4u__"))
                {
                    Selection.objects = null;
                }
                //    if (LastSelected.transform.position!=0)
                {


                }

            }



         //       Debug.Log($"LastSelected: {LastSelected.name}");
        //    else Debug.Log($"LastSelected: none");
        }
    }

    private enum SelectionChange
    {
        Add,
        Remove
    }
    Vector3 blarg =new Vector3 (0, 0, 0);
    string xtest;
    static void OnSelectionModified(GameObject _go, SelectionChange _change)
    {


            switch (_change)
        {
            case SelectionChange.Add:
                //Debug.Log($"added: {_go.name}");
                break;
            case SelectionChange.Remove:
                if (_go == null)
                {
                    //Debug.Log($"remove null transform");
                }
                else
                {
                    //Debug.Log($"remove: {_go.name}");
                    if (!_go.GetComponent("marker_standalone"))
                    {
                        string ScriptName2 = "marker_standalone";
                        System.Type MyScriptType2 = System.Type.GetType(ScriptName2 + ",Assembly-CSharp");
                        _go.AddComponent(MyScriptType2);
                    }

                }
                break;
        }
    }
}
