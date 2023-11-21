using TMPro;
using UnityEngine;
using UnityEngine.UIElements;

public class EnemyKillCounter : MonoBehaviour
{
    [SerializeField] private UIDocument _uIDocument;
    [SerializeField] private ProgressBar _enemyKillText;
    [SerializeField] private NextLevelFlag _nextLevelFlag;
    [SerializeField] private Levels _levels;

    private VisualElement _root;

    private int _enemyKilled;

    private int saveEndLevel = 0;

    private float _minCount, _maxKilled;

    public int EnemyKilled
    {
        get => _enemyKilled;
        set => _enemyKilled = value;
    }

    private void Awake()
    {
        if (Levels.BossLevelNumber == 0)
        {
            _nextLevelFlag.EndLevel = _nextLevelFlag.EndLevel;
        }
        else
        {
            //_nextLevelFlag.EndLevel = _levels.GetEndLevelCount;
        }

        _root = _uIDocument.rootVisualElement;
    }

    private async void OnEnable()
    {
        await System.Threading.Tasks.Task.Delay(100);

        for (int i = 1; i < (UiTextLevel._staticLevelNumber); i++)
        {
            //_root.Q<ProgressBar>("LevelProgressBar_" + i).value = 100;
        }

        //_enemyKillText = _root.Q<ProgressBar>("LevelProgressBar_" + (UiTextLevel._staticLevelNumber));

    }

    private async void Start()
    {
        await System.Threading.Tasks.Task.Delay(200);

        saveEndLevel = _nextLevelFlag.EndLevel;
        _levels.StateChanged += OnStateChange;

        Debug.Log((_levels.LevelIndex));

        if (UiTextLevel._staticLevelNumber != 5)
        {
            //_enemyKillText.value = 0;
        } //$"{_enemyKilled.ToString()}/{_nextLevelFlag.EndLevel}";

        if (_nextLevelFlag.EndLevel < _levels.GetEndLevelCount)
        {
            _maxKilled = 1 + 4 + 7 + 10;
        }
        else
        {
            _maxKilled = 10 + 10 + 10 + 10;
        }

        _minCount = 100 / _nextLevelFlag.EndLevel;

    }

    private void OnStateChange()
    {
        //Debug.Log(_nextLevelFlag.EndLevel);

        //_enemyKillText.value = _enemyKilled * _minCount;

        if (Levels.BossLevelNumber != 0)
        {
            _nextLevelFlag.AddEndLevel(0);
        }
        else
        {
            if (UiTextLevel._staticLevelNumber < 5)
            {
                //if (_root.Q<ProgressBar>("LevelProgressBar_" + (UiTextLevel._staticLevelNumber)).value != 0)
                {
                    for (int i = 1; i < 5; i++)
                    {
                        //_root.Q<ProgressBar>("LevelProgressBar_" + i).value = 0;
                    }
                }

                //_enemyKillText = _root.Q<ProgressBar>("LevelProgressBar_" + (UiTextLevel._staticLevelNumber));
            }
        }

        if(saveEndLevel > _nextLevelFlag.EndLevel && Levels.BossLevelNumber == 0)
        {
            _nextLevelFlag.EndLevel = saveEndLevel;
        }
        else if (_nextLevelFlag.EndLevel < _levels.GetEndLevelCount)
        {
            _nextLevelFlag.AddEndLevel(3);

            saveEndLevel += 3;
        }
        else if (_nextLevelFlag.EndLevel > _levels.GetEndLevelCount)
        {
            _nextLevelFlag.EndLevel = _levels.GetEndLevelCount;
        }
        else
        {

            _nextLevelFlag.AddEndLevel(0);
        }

        //_minCount = _enemyKillText.highValue / _nextLevelFlag.EndLevel;

        _enemyKilled = 0;
    }

    private void Update()
    {
        if (StartNextLevel.isBackLevelComplite)
        {
            UpdateProgressBar();
        }
        else
        {
            if (_enemyKillText != null)
            {
                if (_nextLevelFlag.EndLevel < _enemyKilled)
                {
                    _enemyKilled = _nextLevelFlag.EndLevel;
                }

                if (UiTextLevel._staticLevelNumber < 5)
                {
                    //_enemyKillText.value = _enemyKilled * _minCount; //$"{_enemyKilled.ToString()}/{_nextLevelFlag.EndLevel}";
                }
            }
        }
    }

    private void UpdateProgressBar()
    {
        for (int i = 1; i < (UiTextLevel._staticLevelNumber); i++)
        {
            //_root.Q<ProgressBar>("LevelProgressBar_" + i).value = 100;
        }

        //_enemyKillText = _root.Q<ProgressBar>("LevelProgressBar_" + (UiTextLevel._staticLevelNumber));

        StartNextLevel.isBackLevelComplite = false;

    }
}
