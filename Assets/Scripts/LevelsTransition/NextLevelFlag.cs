using UnityEngine;

public class NextLevelFlag : MonoBehaviour
{
    [SerializeField] private EnemyKillCounter _enemyKillCounter;

    private int _endLevel = 1;

    public bool IsLevelEnd { get; set; }

    public int EndLevel
    {
        get
        {
            if (Levels.BossLevelNumber == 0)
            {
                return _endLevel;
            }
            else
            {
                return Levels.StaticGetEndLevelCount;
            }
        }
        set 
        {
            if (Levels.BossLevelNumber == 0)
            {
                _endLevel = value;
            }
        }
    }

    int saveLevel = 0;
    public void AddEndLevel(int value)
    {
        if (value < 0)
        {
            saveLevel = _endLevel;
        }
        else if (saveLevel > _endLevel)
        {
            _endLevel = saveLevel;
        }

        _endLevel += value;
    }
}
