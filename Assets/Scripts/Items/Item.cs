using System;
using UnityEngine;

[Serializable]
public struct Item
{
    public string Name;
    public Sprite ItemSprite;
    public float HpParam;
    public float BuffParam;
    public float DamageParam;
    public float CrtDamageParam;
    public float ChanceCrtDamage;
    public ItemConfig.ItemType ItemType;

}