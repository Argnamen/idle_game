using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "LevelPrefabs", menuName = "Config/levels", order = 0)]
public class LevelsPrefabs : ScriptableObject
{
    [field: SerializeField]
    public List<GameObject> EnemyPrefabs
    {
        get;
        private set;
    }

    [field: SerializeField]
    public int _endLevelCount
    {
        get;
        private set;
    }

    public float Stages_Spawn_Interval;
   
}
