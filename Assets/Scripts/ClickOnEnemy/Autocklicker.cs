using System.Linq;
using UnityEngine;
using UnityEngine.EventSystems;

public class Autocklicker : MonoBehaviour, IPointerClickHandler
{
    [SerializeField] private SpawnEnemy _spawnEnemy;

    public void OnPointerClick(PointerEventData eventData)
    {
        if (_spawnEnemy.EnemyOnScene.Count == 0)
        {
            return;
        }
        var _enemy = _spawnEnemy.EnemyOnScene.First();
        _enemy.Damaging();

        Debug.Log("Урон");
    }
}
