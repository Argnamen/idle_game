using UnityEngine;

[CreateAssetMenu(menuName = "ArmorItem")]
public class ArmorItemConfig :ItemConfig
{
    protected override ItemType GetType() => ItemType.Armor;

}