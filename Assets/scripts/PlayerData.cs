using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[System.Serializable]
public class PlayerData 
{
    public int level_world;
    public int level_scene;
    

    public PlayerData( WorldFlowTrack player)
    {
        level_world = player.world;
        level_scene = player.scene;
    }
}
