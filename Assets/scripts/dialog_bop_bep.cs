using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class dialog_bop_bep : MonoBehaviour
{
    //5-21-2025
    //attach this to a text based object only
    float nextUsage;
    public float delay = 0.1f; 
    AudioClip _audio;
    AudioSource AudSrc;
    int wordCount = 0;
    int cur_word = 0;
    // Start is called before the first frame update
    void Start()
    {
        wordCount = this.GetComponent<Text>().text.Length;
    }

    // Update is called once per frame
    void Update()
    {
        if (cur_word<wordCount)
        {
            if (Time.time > nextUsage)
            {
                string cpt = UnityEngine.Random.Range(1, 6).ToString();
                AudSrc = gameObject.AddComponent(typeof(AudioSource)) as AudioSource;
                AudSrc.volume = .55f;
                _audio = Resources.Load<AudioClip>("_FX\\SFX\\terns\\" + cpt);
                AudSrc.PlayOneShot(_audio);
                cur_word++;
                nextUsage = Time.time + delay; //it is on display
            }
        }

    }
}
