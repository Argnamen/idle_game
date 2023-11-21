using System.Linq;
using UnityEngine;
using UnityEngine.EventSystems;

public class Autocklicker2 : MonoBehaviour, IPointerClickHandler
{
    [SerializeField] private SpawnEnemy2 _spawnEnemy;
    [SerializeField] private GameObject _explosionObject;
    [SerializeField] private GameObject _explosionCriticalObject;

    private void Update()
    {
        //Debug.Log("ƒебажимс€");

        if (Input.GetMouseButtonDown(0))
        {
            if (SpawnEnemy2.EnemyOnScene.Count == 0)
            {
                return;
            }

            ClickOnEnemy2 enemy;
            enemy = null;

            var _enemyes = SpawnEnemy2.EnemyOnScene;

            foreach (var enemyScene in _enemyes)
            {
                if (enemyScene != null)
                {
                    enemy = enemyScene;
                    break;
                }
            }

            if (enemy == null)
            {
                // Debug.Log("Enemy is null");
                return;
            }

            enemy.IsShoot = true;
            enemy.Damaging();

            //if(TuchDamageCharacter.IsCriticalHit)
            // {
            //     GameObject criticalHit = Instantiate(_explosionCriticalObject, enemy.transform.position,
            //         Quaternion.identity);
            // }
            // else
            // {
            //     
            // }

            GameObject game = Instantiate(_explosionObject, enemy.transform.position,
                Quaternion.identity);
            enemy.IsShoot = false;

            //Debug.Log("ЅьЄм нежить");
        }
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if (SpawnEnemy2.EnemyOnScene.Count == 0)
        {
            return;
        }

        var _enemy = SpawnEnemy2.EnemyOnScene.First();

        _enemy.IsShoot = true;
        _enemy.Damaging();
        _enemy.IsShoot = false;

        Debug.Log("ЅьЄм нежить");
    }
}