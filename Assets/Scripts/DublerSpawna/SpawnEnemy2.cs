using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UIElements;
using Random = System.Random;
using URandom = UnityEngine.Random;
using System.Collections;

public class SpawnEnemy2 : MonoBehaviour
{
    [SerializeField] private StartNextLevel _startNextLevel;
    [SerializeField] private StageConfig _stageConfig;
    [SerializeField] private ConstantConfig _constantConfig;
    [SerializeField] private UIDocument uIDocument;
    [Header("Levels")]
    [SerializeField] private Levels _levels;
    [Header("Prefabs")]
    //[SerializeField] private List<GameObject> _enemyPrefabs;
    [Header("Time spawn")]
    [SerializeField] private float _startDelay;
    [SerializeField] private float _fromTime;
    [SerializeField] private float _beforeTime;
    [Header("Transform spawn")]
    [SerializeField] private int[] _spawnPointsX;
    [SerializeField] private Vector2 _rangePosY;
    [Header("NextLevelFlag")]
    [SerializeField] private NextLevelFlag _nextLevelFlag;
    [SerializeField] private EnemyKillCounter _enemyKillCounter;

    [SerializeField] private Wallet _wallet;

    public enum TypeLevel
    {
        Standard, Boss, Endless
    }


    //private List<GameObject> _enemyOnScene = new();
    private Random _randomTimeSpawn = new Random();

    public static List<ClickOnEnemy2> EnemyOnScene = new List<ClickOnEnemy2>();
    private static ClickOnEnemy2[] MassEnemyOnScene;

    public static bool isStartSpawn = false;

    public int Stages_NumberOfEnemies = 10;
    private static int _now_NumberOfEnemies;


    private void Start()
    {
        // if (File.Exists(Application.persistentDataPath + "/gamesave.data") == true)
        // {
        //     InvokeRepeating("SpawnerPrefabs", _startDelay, URandom.Range(_fromTime, _beforeTime));
        //
        // }

        Stages_NumberOfEnemies = _constantConfig.Constants.Stages_NumberOfEnemies;
        _now_NumberOfEnemies = Stages_NumberOfEnemies;

        InvokeRepeating("SpawnerPrefabs", _startDelay, URandom.Range(_fromTime, _beforeTime));
        _startDelay = _fromTime;
    }

    private void OnEnable()
    {
        MassEnemyOnScene = new ClickOnEnemy2[_constantConfig.Constants.Stages_NumberOfEnemies];
    }

    private void LateUpdate()
    {
        UIHPBarSrage();
    }

    public void StopSpawn()
    {
        if (_nextLevelFlag.IsLevelEnd == true)
        {
            CancelInvoke();
        }
    }

    public void StopSpawner()
    {
        CancelInvoke();
    }

    public void StarterSpawnPrefabs(TypeLevel typeLevel)
    {
        float[] timers = new float[2];
        timers = _levels.GetTimeSpawn();

        switch (typeLevel)
        {
            case TypeLevel.Standard:
                InvokeRepeating("SpawnerPrefabs", _startDelay, URandom.Range(timers[0], timers[1]));
                break;

            case TypeLevel.Boss:
                StartCoroutine(SpawnMobs());
                break;

            case TypeLevel.Endless:
                break;
        }
    }

    float oldHP = 0;

    private void UIHPBarSrage()
    {
        float hp = 0;

        float HP = 0;

        float maxHPStage = 0;

        float.TryParse(_stageConfig.Stage.Target_HP[HPStageUpdate()], out maxHPStage);

        if(maxHPStage != oldHP)
        {
            oldHP = maxHPStage;

            if (!StartNextLevel.isBoss)
            {
                _now_NumberOfEnemies = Stages_NumberOfEnemies;
            }
            else
            {
                _now_NumberOfEnemies = 1;
            }
        }

        for (int i = 0; i < _now_NumberOfEnemies; i++)
        {
            if (i < EnemyOnScene.Count)
            {
                hp += EnemyOnScene[i].GetComponent<MobsCollision>().HP;
            }
            else
            {
                hp += maxHPStage / _constantConfig.Constants.Stages_NumberOfEnemies;
            }
        }

        float nowHP = (100 / maxHPStage) * hp;

        //Debug.Log(nowHP + " " + hp + " " + _now_NumberOfEnemies);

        uIDocument.rootVisualElement.Q<ProgressBar>("StageBar").value = nowHP;

        if (nowHP <= 0)
        {
            _startNextLevel.WinGame();
        }
    }

    private int HPStageUpdate()
    {
        int levelNumberForConfig = UiTextLevel._staticLevelNumber - 1;

        if (!StartNextLevel.isBoss)
        {
            if (levelNumberForConfig != 0)
            {
                levelNumberForConfig *= 2;
            }
        }
        else
        {
            levelNumberForConfig = levelNumberForConfig / _constantConfig.Constants.Stages_Base_NumberOfWaves;
        }

        return levelNumberForConfig;
    }

    private async void SpawnerPrefabs()
    {
        if (LoadScreen.isStartSpawn && isStartSpawn && _now_NumberOfEnemies > EnemyOnScene.Count)
        {
            Random rnd = new Random();

            //GameObject _enemy = Instantiate(_enemyPrefabs[URandom.Range(0, _enemyPrefabs.Count)]);

            ClickOnEnemy2 _enemy = Instantiate(_levels.GetPrefab()).GetComponent<ClickOnEnemy2>();

            _enemy.GetComponent<SpawnGoldPrefab>()._wallet = _wallet;

            EnemyOnScene.Add(_enemy);

            _enemy.GetComponent<DestroyEnemyPrefab2>()._enemy = _enemy;

            _enemy.GetComponent<MobsCollision>().ThisEnemy = _enemy;

            _enemy.GetComponent<DestroyEnemyPrefab2>().levelNumber = UiTextLevel._staticLevelNumber;

            _enemy.GetComponent<DestroyEnemyPrefab2>().uIDocument = uIDocument;

            if (_enemy.TryGetComponent<AnimatorZombie>(out var animatorZombie))
            {
                if (!animatorZombie.SpawnAnimation())
                {
                    _enemy.transform.position = new Vector3(
                                                10,
                                                URandom.Range(_rangePosY.x, _rangePosY.y), 0);

                    _enemy.GetComponent<MovePrefabs2>()._IsWalk = true;
                }
                else
                {
                    _enemy.transform.position = new Vector3(
                                                _spawnPointsX[URandom.Range(0, _spawnPointsX.Length)],
                                                URandom.Range(_rangePosY.x, _rangePosY.y), 0);

                    _enemy.GetComponent<MovePrefabs2>()._IsWalk = false;

                    await System.Threading.Tasks.Task.Delay(500);

                    if (_enemy)
                    {
                        _enemy.GetComponent<MovePrefabs2>()._IsWalk = true;
                    }
                }

                //EnemyOnScene.Add(_enemy);
            }

            //if (_enemy.IsRange)
            //{
            //    _enemy.transform.position = new Vector3(_rangeSpawnPosX, rnd.Next(-_spawnRangeY, _spawnRangeY), 0);
            //}

            //else
            //{
            //    _enemy.transform.position = new Vector3(_spawnPosX, rnd.Next(-_spawnRangeY, _spawnRangeY), 0);
            //}
        }
    }

    public static void RemoveEnemyOnScene(ClickOnEnemy2 clickOnEnemy2)
    {
        SpawnEnemy2._now_NumberOfEnemies--;

        EnemyOnScene.Remove(clickOnEnemy2);
    }

    private bool isStartSpawnBoss = false;
    private IEnumerator SpawnMobs()
    {
        isStartSpawnBoss = true;

        Debug.Log("Boss");

        while (!LoadScreen.isStartSpawn)
        {
            yield return new WaitForSeconds(0.1f);
        }

        Debug.Log("StartSpawn");

        yield return new WaitForSeconds(_startDelay);

        SpawnerPrefabs();

        isStartSpawnBoss = false;

    }
}
