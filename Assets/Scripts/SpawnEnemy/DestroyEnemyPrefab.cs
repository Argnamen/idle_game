using UnityEngine;

public class DestroyEnemyPrefab : MonoBehaviour
{
    [SerializeField] private float _borderPosX;
    [SerializeField] private Enemy _enemy;

    private SpawnEnemy _spawnEnemy;
    private HealthEnemy _healthEnemy;

    private void Start()
    {
        _spawnEnemy = FindObjectOfType<SpawnEnemy>();
        _healthEnemy = FindObjectOfType<HealthEnemy>();
    }

    private void OnMouseDown()
    {
        this.GetComponent<MobsCollision>().HP -= TuchDamageCharacter.DPS;
    }

    private void Update()
    {
        if (gameObject.transform.position.x < _borderPosX || this.GetComponent<MobsCollision>().HP <= 0 || _healthEnemy._hpEnemy <= 0)
        {
            Debug.Log("Destroy object");

            Destroy(gameObject);
            _spawnEnemy.EnemyOnScene.Remove(_enemy);
        }
    }
}
