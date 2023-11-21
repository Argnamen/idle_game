using UnityEngine;

[CreateAssetMenu(menuName = "WeaponItem")]
public class WeaponItemConfig : ItemConfig
{
    [SerializeField] private Animator _animatorAttack;

    public Animator AnimatorAttack => _animatorAttack;
    protected override ItemType GetType() => ItemType.Weapon;

}