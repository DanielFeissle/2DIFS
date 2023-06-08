using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public static class BinSaveSystem 
{
    public static void SaveScene (WorldFlowTrack player)
    {
        BinaryFormatter formatter = new BinaryFormatter();
        string path = Application.persistentDataPath+"/player.bin";
        FileStream stream = new FileStream(path, FileMode.Create);
        PlayerData data = new PlayerData(player);

        formatter.Serialize(stream, data);
         stream.Close();
    }
    public static PlayerData LoadPlayer()
    {
        string path = Application.persistentDataPath + "/player.bin";
        if (File.Exists(path))
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
