using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public static class BinSaveSystem 
{
    public static void SaveScene (LevelHistory player_saving_loading)
    {
        BinaryFormatter formatter = new BinaryFormatter();
        string path = Application.persistentDataPath+"/player.bin";
        FileStream stream = new FileStream(path, FileMode.Create);
        PlayerData data = new PlayerData(player_saving_loading);
        //new PlayerData(player);

        formatter.Serialize(stream, data);
         stream.Close();
    }
    public static PlayerData LoadPlayer()
    {
        Debug.Log("LOADING SAVE DATA NOW"+ Application.persistentDataPath + "/player.bin");
        string path = Application.persistentDataPath + "/player.bin";
        FileInfo info = new FileInfo(path);
        if (File.Exists(path)&& info.Length>0)
        {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(path, FileMode.Open);

           PlayerData data= formatter.Deserialize(stream) as PlayerData;

            stream.Close();
            return data;
        } else
        {
            Debug.Log("Save file not found in " + path);
            return null;
        }
    }
}
