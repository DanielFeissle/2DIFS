using System;
using UnityEditor;
using UnityEngine;

public class EditorInputSettings : EditorWindow
{

    int cloneTimesX = 1;
    int cloneTimesY = 1;
    int cloneTimesZ = 1;
    int spacing = 2;

         [MenuItem("Tools/Scene Settings")]
         static void Init()
        {
        EditorWindow window = GetWindow(typeof(EditorInputSettings));
        window.Show();
    }

    int OnGUI()
    {
        cloneTimesX = EditorGUILayout.IntSlider(cloneTimesX, 1, 10);
        cloneTimesY = EditorGUILayout.IntSlider(cloneTimesY, 1, 10);
        cloneTimesZ = EditorGUILayout.IntSlider(cloneTimesZ, 1, 10);

        if (GUILayout.Button("Duplicate object"))
            CloneSelected();
        return cloneTimesX;
    }

    void CloneSelected()
    {
        if (!Selection.activeGameObject)
        {
            Debug.LogError("Select a GameObject first");
            return;
        }

        for (int i = 0; i < cloneTimesX; i++)
            for (int j = 0; j < cloneTimesY; j++)
                for (int k = 0; k < cloneTimesZ; k++)
                    Instantiate(Selection.activeGameObject, new Vector3(i, j, k) * spacing, Selection.activeGameObject.transform.rotation);
    }
}