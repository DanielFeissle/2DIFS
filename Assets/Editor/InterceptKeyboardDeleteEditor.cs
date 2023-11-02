using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
//retrived10-26-2023
//https://forum.unity.com/threads/unity-editor-disable-delete-of-a-scene-gameobject.85497/
//[CustomEditor(typeof(GameObject))]
[InitializeOnLoad]
public class InterceptKeyboardDeleteEditor : Editor
{
    // NOTE: you can still delete GameObjects by right click and select delete in Hierarchy view

    protected virtual void OnEnable()
    {
        EditorApplication.hierarchyWindowItemOnGUI += OnHierarchyGUI;
    }

    protected virtual void OnDisable()
    {
        EditorApplication.hierarchyWindowItemOnGUI -= OnHierarchyGUI;
    }

    // disable the ability to delete GameObjects in Scene view
    protected virtual void OnSceneGUI()
    {
        InterceptKeyboardDelete();
    }

    // disable the ability to delete GameObjects in Hierarchy view
    protected virtual void OnHierarchyGUI(int instanceID, Rect selectionRect)
    {
        InterceptKeyboardDelete();
    }

   
    // intercept keyboard delete event
    private void InterceptKeyboardDelete()
    {
        var e = Event.current;
        if (e.keyCode == KeyCode.Delete)
        {
            if (Selection.activeObject.name.Contains("__bulk_edit_in_text_mode_no_editor_changes4u__"))
            {
                Debug.Log("CANCEL");
                //e.Use(); // warning
                e.type = EventType.Used;
            }

           

 

        }
    }
}