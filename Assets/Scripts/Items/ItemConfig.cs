using System;
using UnityEngine;

[CreateAssetMenu(menuName = "Item")]
public abstract class ItemConfig : ScriptableObject
{
    [SerializeField] private string _nameItem;
    [SerializeField] private Sprite _itemSprite;
    [SerializeField] private float _hpParam;
    [SerializeField] private float _buffParam;
    [SerializeField] private float _damageParam;
    [SerializeField] private float _crtDamageParam;
    [Range(0f, 1f)] [SerializeField] private float _chanceCrtDamage;
    [SerializeField] private ItemType itemType;

    private void Awake()
    {
        itemType = GetType();
    }
    
    public Item GetItem()
    {
        return new Item()
        {
            Name = _nameItem,
            ItemSprite = _itemSprite,
            HpParam = _hpParam,
            BuffParam = _buffParam,
            DamageParam = _damageParam,
            CrtDamageParam = _crtDamageParam,
            ChanceCrtDamage = _chanceCrtDamage,
            ItemType = GetType()
        };
    }

    public enum ItemType
    {
        Weapon,
        Armor,
        Helmet
    }

    protected abstract ItemType GetType();
}