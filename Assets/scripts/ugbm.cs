using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.Networking;

public class ugbm : MonoBehaviour
{

    public AudioSource audioSource;
    public string musicDirectory = "C:/Projects/music"; // Change this to the directory where your music files are stored
    string[] musicFiles;
    int audioIndex = 0;
    string verified_directory = "";
    void Start()
    {
        string path = Application.persistentDataPath + "/musicdir.txt";
        if (File.Exists(path))
        {
            // Read the text from the file
           // StreamReader reader = new StreamReader(path);
           // musicDirectory = reader.ReadLine();
            string[] lines = File.ReadAllLines(path);
            foreach (string line in lines)
            {
                musicDirectory = line;
                break; //only run this once (2-20-2025-improve this)
            }

           //reader.Close();

            Debug.Log("File content: " + musicDirectory);
        }
        else
        {
            Debug.Log("File not found at: " + path);
        }


        musicLoader();

    }
    public void musicLoader()
    {
        audioSource = this.gameObject.GetComponent<AudioSource>();
        musicFiles = Directory.GetFiles(musicDirectory, "*.mp3");
        if (musicFiles.Length > 0)
        {
            if (musicDirectory!=verified_directory)
            {
                musicFiles = musicFiles.OrderBy(x => Guid.NewGuid()).ToArray();
                StartCoroutine(PlayMusic2(musicFiles[0])); // Play the first music file found

                string path = Application.persistentDataPath + "/musicdir.txt";

                // Write some text to the file
                StreamWriter writer = new StreamWriter(path, false);
                writer.WriteLine(musicDirectory);
                writer.Close();

                Debug.Log("File written to: " + path);


                verified_directory = musicDirectory;
            }

        }
        else
        {
            verified_directory = "";
        }
    }
    /* IEnumerator PlayMusic(string filePath)
     {
         WWW request = new WWW("file://" + filePath);
         yield return request;

         AudioClip clip = request.GetAudioClip(false, true);
         audioSource.clip = clip;
         audioSource.Play();
     }
    */
    void Update()
    {
        if (audioSource != null && !audioSource.isPlaying)
        {
            audioIndex++;
            StartCoroutine(PlayMusic2(musicFiles[audioIndex]));
            if (audioIndex>musicFiles.Length-1)
            {
                audioIndex = 0;
            }
        }
    }


    IEnumerator PlayMusic2(string filePath)
    {
        UnityWebRequest request = UnityWebRequestMultimedia.GetAudioClip("file:///" + filePath, AudioType.MPEG);
        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.Success)
        {
            AudioClip clip = DownloadHandlerAudioClip.GetContent(request);
            audioSource.clip = clip;
            audioSource.Play();
        }
        else
        {
            Debug.LogError("Error loading audio file: " + request.error);

        }
    }
}