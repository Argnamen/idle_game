using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageRealize : MonoBehaviour
{
    [SerializeField] private ConstantConfig constantConfig;
    [SerializeField] private StageConfig stageConfig;
    [SerializeField] private SpawnEnemy2 spawnEnemy2;

    private int _stages_Base_NumberOfWaves;
    private int _stages_FarmStagge_Difficult;
    private int _stages_NumberOfEnemies;
    private int _stages_Spawn_Interval;
    private int _stages_Spawn_PowerPercent;

    private string[] _stage_UID;
    private string[] _target_HP;
    private string[] _reward;

    private void Start()
    {
        _stages_Base_NumberOfWaves = constantConfig.Constants.Stages_Base_NumberOfWaves;
        _stages_FarmStagge_Difficult = constantConfig.Constants.Stages_FarmStagge_Difficult;
        _stages_NumberOfEnemies = constantConfig.Constants.Stages_NumberOfEnemies;
        _stages_Spawn_Interval = constantConfig.Constants.Stages_Spawn_Interval;
        _stages_Spawn_PowerPercent = constantConfig.Constants.Stages_Spawn_PowerPercent;

        _stage_UID = stageConfig.Stage.Stage_UID;
        _target_HP = stageConfig.Stage.Target_HP;
        _reward = stageConfig.Stage.Reward;

        spawnEnemy2.Stages_NumberOfEnemies = _stages_NumberOfEnemies;
        //spawnEnemy2
    }
}
