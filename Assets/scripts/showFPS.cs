using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class showFPS : MonoBehaviour
{
    //retrived 3-31-2022 for testing
    //https://answers.unity.com/questions/1189486/how-to-see-fps-frames-per-second.html?msclkid=1690b249b15011ecac84a79b09d5006e
    public Text fpsText;
    public float deltaTime;

    void Update()
    {
        deltaTime += (Time.deltaTime - deltaTime) * 0.1f;
        float fps = 1.0f / deltaTime;
        fpsText.text = Mathf.Ceil(fps).ToString();
    }
}
