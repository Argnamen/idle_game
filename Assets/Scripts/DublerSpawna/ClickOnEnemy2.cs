using UnityEngine;
using UnityEngine.EventSystems;

public class ClickOnEnemy2 : MonoBehaviour
{
    [SerializeField] private float _damageOnEnemy;

    public MobsCollision _healthEnemy;
    private bool _IsShoot;

    public bool IsShoot
    {
        get => _IsShoot;
        set => _IsShoot = value;
    }


    private void Start()
    {
        _IsShoot = false;
        _healthEnemy = FindObjectOfType<MobsCollision>();
    }

    private void FixedUpdate()
    {
        if (_damageOnEnemy != TuchDamageCharacter.DPS)
            _damageOnEnemy = TuchDamageCharacter.DPS;
    }

    public void Damaging()
    {
        if (_healthEnemy == null)
        {
            return;
        }

        _healthEnemy.HP -= _damageOnEnemy;
        _healthEnemy.SetHP(_damageOnEnemy);
        TuchDamageCharacter.isShot = true;
    }

    public void DamagingCriticalHit()
    {
        if (_healthEnemy == null)
        {
            return;
        }

        _damageOnEnemy = TuchDamageCharacter.DPS * TuchDamageCharacter._criticalMultiHero;
        //Debug.Log($"DamageOnEnemy: {_damageOnEnemy}");
        _healthEnemy.HP -= _damageOnEnemy;
        _healthEnemy.SetHP(_damageOnEnemy);
        TuchDamageCharacter.isShot = true;
    }

    // public void OnMouseDown()
    // {
    //     _IsShoot = true;
    //     Damaging();
    //     _IsShoot = false;
    //     //Debug.Log($"Health {gameObject.name} : {_healthEnemy.HP}");
    // }
}