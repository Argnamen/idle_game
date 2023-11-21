using UnityEngine;
using UnityEngine.EventSystems;

public class ClickOnEnemy : MonoBehaviour, IPointerClickHandler
{
    [SerializeField] private int _damageOnEnemy;

    private HealthEnemy _healthEnemy;


    private void Start()
    {
        _healthEnemy = FindObjectOfType<HealthEnemy>();
    }

    public void Damaging()
    {
        _healthEnemy._hpEnemy -= _damageOnEnemy;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        //Damaging();
        Debug.Log($"Health {gameObject.name} : {_healthEnemy._hpEnemy}");
    }
}
