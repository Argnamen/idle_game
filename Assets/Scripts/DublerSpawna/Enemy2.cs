using UnityEngine;

public class Enemy2 : MonoBehaviour
{
    [SerializeField] private ClickOnEnemy2 _clickOnEnemy;
    [SerializeField] private bool _IsRange;

    public bool IsRange
    {
        get => _IsRange;
        set
        {
            _IsRange = value;

        }
    }

    /*
    public void Damaging()
    {
        _clickOnEnemy.Damaging();
    }
    */
}
