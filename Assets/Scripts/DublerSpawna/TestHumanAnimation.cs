using UnityEngine;
using UnityEngine.EventSystems;

public class TestHumanAnimation : MonoBehaviour, IPointerClickHandler
{
    [SerializeField] private int _damageOnHuman;

    private HealthEnemy _healthEnemy;

    private void Start()
    {
        _healthEnemy = FindObjectOfType<HealthEnemy>();
    }

    public void Damaging()
    {
        _healthEnemy._hpEnemy -= _damageOnHuman;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        Damaging();
        Debug.Log($"Health Human {gameObject.name} : {_healthEnemy._hpEnemy}");
    }
}
