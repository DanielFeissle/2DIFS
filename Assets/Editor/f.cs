using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


[CustomEditor(typeof(f))]
public class f : Editor
{
    private SerializedProperty canWalkProperty;
    private SerializedProperty walkSpeedProperty;

    void OnEnable()
    {
        canWalkProperty = serializedObject.FindProperty("canWalk");
        walkSpeedProperty = serializedObject.FindProperty("walkSpeed");
    }

    public override void OnInspectorGUI()
    {
        serializedObject.Update();
        EditorGUILayout.BeginVertical();
        EditorGUILayout.PropertyField(canWalkProperty);
        // The magic happens right here!
        if (canWalkProperty.boolValue)
            EditorGUILayout.PropertyField(walkSpeedProperty);
        EditorGUILayout.EndVertical();
        serializedObject.ApplyModifiedProperties();
    }
}
