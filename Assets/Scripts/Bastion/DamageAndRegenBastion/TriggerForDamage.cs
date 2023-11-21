using UnityEngine;

public class TriggerForDamage : MonoBehaviour
{
    private Bastion _bastion;

    private float _testDamage = 30f;
    private bool _IsTrueDamage;

    private void Start()
    {
        _bastion = FindObjectOfType<Bastion>();
        _IsTrueDamage = false;
    }

    private void Update()
    {
        DamagingBastion();
    }

    private void DamagingBastion()
    {
        if (_IsTrueDamage)
        {
            // if (TryGetComponent(out Bastion bastion))
            //     bastion.HP_Current -= Time.deltaTime * _testDamage;
        }
    }

    private void TestDamagingBastion()
    {
        _bastion.HP_Current -= _testDamage;
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.name == "Sprite_Zone_Attack_and_BoxColl")
        {
            TestDamagingBastion();
            _IsTrueDamage = true;
        }
    }
}