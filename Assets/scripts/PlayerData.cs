using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[System.Serializable]
public class PlayerData 
{
    public int level_world;
    public int level_scene;
    public int [,] level_high_score = new int[9, 5]; //6-12-2023-for now just creating an empty 9x99 array
    public int currentWorld=1;
    public int currentStage = 1;

    public PlayerData( LevelHistory player_saving_loading)
    {
        level_world = player_saving_loading.world;
        level_scene = player_saving_loading.scene;
        //   level_high_score[currentWorld, currentStage] = player_saving_loading.curStageScore;
        level_high_score = player_saving_loading.high_score;
    }
}
