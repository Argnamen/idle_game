using System.Collections.Generic;
using UnityEngine;

public class SpawnEnemy : MonoBehaviour
{
    [Header("Prefabs")]
    [SerializeField] private List<Enemy> _enemyPrefabs;
    [Header("Time spawn")]
    [SerializeField] private float _startDelay;
    [SerializeField] private int _fromTime;
    [SerializeField] private int _beforeTime;
    [Header("Transform spawn")]
    [SerializeField] private float _spawnRangeY;
    [SerializeField] private float _spawnPosX;


    private List<Enemy> _enemyOnScene = new();
    public List<Enemy> EnemyOnScene => _enemyOnScene;

    private void Start()
    {
        Debug.Log("Start spawn");
        InvokeRepeating("SpawnerPrefabs", _startDelay, Random.Range(_fromTime, _beforeTime));
    }

    private void Update()
    {
        //ControllerSpawn();
    }

    private void ControllerSpawn()
    {

        if (Input.GetMouseButtonDown(0))
        {
            Debug.Log("Start spawn");
            InvokeRepeating("SpawnerPrefabs", _startDelay, Random.Range(_fromTime, _beforeTime));
        }

        if (Input.GetMouseButtonDown(1))
        {
            Debug.Log("Stop spawn");
            CancelInvoke();
        }
    }

    private void SpawnerPrefabs()
    {
        /*
        GameObject _enemy = Instantiate(_enemyPrefabs[Random.Range(0, _enemyPrefabs.Count)],
            new Vector3(_spawnPosX, Random.Range(-_spawnRangeY, _spawnRangeY), 0),
        _enemyPrefabs[Random.Range(0, _enemyPrefabs.Count)].transform.rotation);
        _enemyOnScene.Add(_enemy);
        */
    }
}
