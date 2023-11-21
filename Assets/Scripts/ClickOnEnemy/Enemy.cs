using UnityEngine;

public class Enemy : MonoBehaviour
{
    [SerializeField] private ClickOnEnemy _clickOnEnemy;
    //[SerializeField] private HealthEnemy _healthEnemy;

    public void Damaging()
    {
        _clickOnEnemy.Damaging();
    }
}
