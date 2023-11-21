using System.Collections;
using UnityEngine;
using UnityEngine.UIElements;
using System.Collections.Generic;
using System.Collections;

public class StartNextLevel : MonoBehaviour
{
    [SerializeField] private StageConfig _stageConfig;
    [SerializeField] private ConstantConfig _constantConfig;

    public static int NumberOfDead = 0;

    [SerializeField] private UIDocument _uIDocument;
    [SerializeField] private AudioManager _audioManager;
    [SerializeField] private Levels _levels;
    [SerializeField] private SpawnEnemy2 _spawnEnemy2;
    [SerializeField] private NextLevelFlag _nextLevelFlag;
    [SerializeField] private EnemyKillCounter _enemyKillCounter;
    [SerializeField] private UiTextLevel _uiTextLevel;
    private Button _buttonStartNextLevel;

    [SerializeField] private SaveAndLoadGame _saveAndLoad;

    private VisualElement _root;

    private bool isBackLevel = false;

    public static int bossMod = 1;

    public static bool isBoss = false;

    private void Awake()
    {
        _root = _uIDocument.rootVisualElement;
        _buttonStartNextLevel = _root.Q<Button>("BossLevelButton");
    }

    private void OnEnable()
    {
        SaveFileList saveFile = _saveAndLoad.LoadGame();
        if (saveFile != null)
        {
            StartCoroutine(LoadLevel(saveFile));
        }
        _buttonStartNextLevel.clicked += () => StarterNextLevel(0,0);

        _audioManager.Invoke(AudioEvent.BackgroundMusic, true);
        //_buttonStartNextLevel.onClick.AddListener(StarterNextLevel);

        for(int i = 1; i <= 10; i++)
        {
            if(i <= _constantConfig.Constants.Stages_Base_NumberOfWaves)
            {
                _root.Q<VisualElement>("LevelNumber_" + i).style.display = DisplayStyle.Flex;
            }
            else
            {
                _root.Q<VisualElement>("LevelNumber_" + i).style.display = DisplayStyle.None;
            }
        }

        HPStageUpdate();

        //_root.Q<VisualElement>("FarmLevelImage").style.display = DisplayStyle.None;
    }

    private IEnumerator LoadLevel(SaveFileList saveFile)
    {
        int chap = saveFile.ChapterNumber;

        //Debug.Log("CHapter: " + chap + " " + saveFile.ChapterNumber);

        int lvl = saveFile.LevelNumber;

        for (int i = 1; i < lvl + ((chap - 1) * 5); i++)
        {
            if (lvl >= 5)
            {
                StarterNextLevel(chap, 4);
            }
            else
            {
                StarterNextLevel(chap, lvl);
            }

            if (_nextLevelFlag.EndLevel < _levels.GetEndLevelCount)
                _nextLevelFlag.AddEndLevel(3);
        }

        yield return null;
    }

    private void OnDisable()
    {
        _buttonStartNextLevel.clicked -= () => StarterNextLevel(0,0);
        //_buttonStartNextLevel.onClick.RemoveListener(StarterNextLevel);
    }

    private void Update()
    {
        if(NumberOfDead == _constantConfig.Constants.Stages_NumberOfEnemies)
        {
            _nextLevelFlag.IsLevelEnd = true;
            NumberOfDead = 0;
        }

        if (_nextLevelFlag.IsLevelEnd)
        {
            if (isPlayerDead)
            {
                _buttonStartNextLevel.style.visibility = Visibility.Visible;
            }
            else
            {
                isBackLevel = false;

                StarterNextLevel(0,0);

                isPlayerDead = false;
            }
        }

        for (int k = 0; k < Player.PlayerCharacters.Count; k++)
        {
            if (!Player.PlayerCharacters[k].isDeath || isBackLevel)
            {
                break;
            }

            if (k + 1 == Player.PlayerCharacters.Count)
            {
                GameOver();
            }
        }

        //_buttonStartNextLevel.gameObject.SetActive(_nextLevelFlag.IsLevelEnd == true);
    }

    public void GameOver()
    {
        Debug.Log("BackLevel");
        SpawnEnemy2.isStartSpawn = false;
        isBackLevel = true;

        isPlayerDead = true;

        StartBackLevel();

        for (int i = 0; i < SpawnEnemy2.EnemyOnScene.Count; i++)
        {
            Destroy(SpawnEnemy2.EnemyOnScene[i]);
        }
    }

    public void WinGame()
    {
        //if (_uiTextLevel.LevelNumber == _constantConfig.Constants.Stages_Base_NumberOfWaves)
        {
            //Debug.Log(_levels.LevelIndex + " " + _checkEndChapter);
            //Debug.Log($"Reset levels: true");
            _uiTextLevel.Chapter++;
            UiTextLevel._staticChapter++;

            _levels.LevelIndex = 0;

            _uiTextLevel.LevelNumber = 0;
            UiTextLevel._staticLevelNumber = 0;
        }
    }

    private IEnumerator StartBossMusic()
    {
        _audioManager.Invoke(AudioEvent.BossPreview, false);
        yield return new WaitForSeconds(2);
        _audioManager.Invoke(AudioEvent.BossMusic, true);
    }
    private void StarterNextLevel(int chapter, int level)
    {
        //_root.Q<VisualElement>("FarmLevelImage").style.display = DisplayStyle.None;
        if (chapter != 0)
        {
            _levels.LevelIndex = level;

            _uiTextLevel.LevelNumber = level;
            UiTextLevel._staticLevelNumber = level;

            _uiTextLevel.Chapter = chapter;
            UiTextLevel._staticChapter = chapter;
        }

        _root.Q<VisualElement>("LevelNumber_" + (_uiTextLevel.LevelNumber + 1)).style.unityBackgroundImageTintColor = new StyleColor(new Color32(180, 183, 0, 255));

        Debug.Log(_uiTextLevel.LevelNumber + " LevelNumber");

        if (_uiTextLevel.LevelNumber == _constantConfig.Constants.Stages_Base_NumberOfWaves)
        {
            bossMod++;
            StartCoroutine(StartBossMusic());

            Debug.Log(_uiTextLevel.LevelNumber + " Boss");

            isBoss = true;
        }
        else if (_uiTextLevel.LevelNumber < _constantConfig.Constants.Stages_Base_NumberOfWaves)
        {
            isBoss = false;
            _audioManager.Invoke(AudioEvent.BackgroundMusic, true);
        }
        for (int i = 0; i < SpawnEnemy2.EnemyOnScene.Count; i++)
        {
            //Destroy(SpawnEnemy2.EnemyOnScene[i]);
            //SpawnEnemy2.EnemyOnScene.RemoveAt(i);
        }

        for (int k = 0; k < Player.PlayerCharacters.Count; k++)
        {
            if (!Player.PlayerCharacters[k].isDeath)
            {
                break;
            }

            if (k + 1 == Player.PlayerCharacters.Count)
            {
                //StartBackLevel();
            }
        }

        for (int k = 0; k < Player.PlayerCharacters.Count; k++)
        {
            if (Player.PlayerCharacters[k].isDeath)
            {
                Player.PlayerCharacters[k].isLife = true;
            }
        }

        _nextLevelFlag.IsLevelEnd = false;

        //_levels.UpdateLevelNumber();

        //RepeatBackground.isMove = true;
        RepeatBackground.isMove = false;

        _spawnEnemy2.StopSpawner();

        // ��� ������� ������ ����� ++
        _levels.UpdateLevelNumber();

        //Debug.Log($"LevelIndex: {_levels.LevelIndex}");

        if(_uiTextLevel.LevelNumber == _constantConfig.Constants.Stages_Base_NumberOfWaves)
            _spawnEnemy2.StarterSpawnPrefabs(SpawnEnemy2.TypeLevel.Boss);
        else
            _spawnEnemy2.StarterSpawnPrefabs(SpawnEnemy2.TypeLevel.Standard);

        _buttonStartNextLevel.style.visibility = Visibility.Hidden;
        //_buttonStartNextLevel.gameObject.SetActive(false);
        //_enemyKillCounter.EnemyKillText.enabled = true;

        if (chapter == 0)
        {
            _uiTextLevel.LevelNumber++;
            UiTextLevel._staticLevelNumber++;

            _levels.LevelIndex++;
        }

        HPStageUpdate();
    }

    public static bool isBackLevelComplite = false;
    public static bool isPlayerDead = false;
    private void StartBackLevel()
    {
        _root.Q<VisualElement>("FarmLevelImage").style.display = DisplayStyle.Flex;
        _root.Q<ProgressBar>("All_HPBar").title = "";
        _root.Q<VisualElement>("Panel_Level").style.display = DisplayStyle.None;

        _root.Q<VisualElement>("FarmLevelImage").style.rotate = new StyleRotate(new Rotate(360));

        _nextLevelFlag.AddEndLevel(-9);

        _uiTextLevel.LevelNumber = _constantConfig.Constants.Stages_Base_NumberOfWaves - 1;
        UiTextLevel._staticLevelNumber = _constantConfig.Constants.Stages_Base_NumberOfWaves - 1;

        _levels.LevelIndex = 6;

        SpawnEnemy2.isStartSpawn = false;

        isBoss = false;

        for (int k = 0; k < Player.PlayerCharacters.Count; k++)
        {
            if (bossMod >= 2)
                bossMod -= 2;

            Player.PlayerCharacters[k].isLife = true;
        }

        _nextLevelFlag.IsLevelEnd = false;

        //_levels.UpdateLevelNumber();

        //RepeatBackground.isMove = true;
        RepeatBackground.isMove = false;

        _spawnEnemy2.StopSpawner();

        // ��� ������� ������ ����� ++
        _levels.UpdateLevelNumber();

        //Debug.Log($"LevelIndex: {_levels.LevelIndex}");
        _spawnEnemy2.StarterSpawnPrefabs(SpawnEnemy2.TypeLevel.Endless);

        _buttonStartNextLevel.style.visibility = Visibility.Hidden;

        for (int k = 0; k < Player.PlayerCharacters.Count; k++)
        {
            if (Player.PlayerCharacters[k].isDeath)
            {
                Player.PlayerCharacters[k].isLife = true;
            }
        }

        for(int i = 0; i < Player.PlayerCharacters.Count; i++)
        {
            Player.PlayerCharacters[i].LifeBacklevel();
        }

        //_buttonStartNextLevel.gameObject.SetActive(false);
        //_enemyKillCounter.EnemyKillText.enabled = true;

        isBackLevelComplite = true;

        HPStageUpdate();
    }

    private void HPStageUpdate()
    {
        int levelNumberForConfig = UiTextLevel._staticLevelNumber - 1;

        if (!isBoss)
        {
            if (levelNumberForConfig != 0)
            {
                levelNumberForConfig *= 2;
            }

            _uIDocument.rootVisualElement.Q<Label>("HPNumberLabel").text = _stageConfig.Stage.Target_HP[levelNumberForConfig] + " HP";
        }
        else
        {
            _uIDocument.rootVisualElement.Q<Label>("HPNumberLabel").text =
                _stageConfig.Stage.Target_HP[levelNumberForConfig / _constantConfig.Constants.Stages_Base_NumberOfWaves] + " HP";
        }
    }
}
