using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class ExampleWindow : EditorWindow
{
    private string exampleString;
    private Vector2 scroll;

    [MenuItem("Example/Show ExampleWindow")]
    private static void Initialize()
    {
        var window = GetWindow<ExampleWindow>();
        window.Show();
    }

    private void OnGUI()
    {
        EditorGUILayout.PrefixLabel("Example String");
        scroll = EditorGUILayout.BeginScrollView(scroll, GUILayout.MaxHeight(3 * EditorGUIUtility.singleLineHeight));
        exampleString = EditorGUILayout.TextArea(exampleString, EditorStyles.textArea);
        EditorGUILayout.EndScrollView();
    }
}
