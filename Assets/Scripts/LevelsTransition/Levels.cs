using System;
using System.Collections.Generic;
using Infrastructure.Shared.Extensions;
using UnityEngine;

public class Levels : MonoBehaviour, ILevelState
{
    [SerializeField] private ConstantConfig _constantConfig;
    [SerializeField] private List<LevelsPrefabs> _prefabs;

    private int _levelIndex = 1;

    public static int BossLevelNumber = 0;

    public int LevelIndex
    {
        get => _levelIndex;
        set => _levelIndex = value;
    }

    public void ChangeState()
    {
        UpdateLevelNumber();

        //_levelIndex %= _prefabs.Count;
    }

    public void UpdateLevelNumber()
    {
        Debug.Log(LevelIndex + " Index");

        if (LevelIndex == _constantConfig.Constants.Stages_Base_NumberOfWaves + 1) 
        {
            BossLevelNumber = 1;
        }
        else if (LevelIndex != _constantConfig.Constants.Stages_Base_NumberOfWaves)
        {
            BossLevelNumber = 0;
        }
        else
        {
            BossLevelNumber = UnityEngine.Random.Range(2, _prefabs.Count);
        }

        StaticGetEndLevelCount = _prefabs[BossLevelNumber]._endLevelCount;

        StateChanged?.Invoke();
    }

    public float[] GetTimeSpawn()
    {
        return new float[2] { _prefabs[BossLevelNumber].Stages_Spawn_Interval, _prefabs[BossLevelNumber].Stages_Spawn_Interval+1 };
    }

    public GameObject GetPrefab()
    {
        GameObject evilMob = new GameObject();

        evilMob = _prefabs[BossLevelNumber].EnemyPrefabs.Random();

        return evilMob;
    }

    public int GetEndLevelCount => _prefabs[BossLevelNumber]._endLevelCount;

    public static int StaticGetEndLevelCount;

    public event Action StateChanged;
}
