using UnityEngine;

[CreateAssetMenu(menuName = "HelmetItem")]
public class HelmetItemConfig : ItemConfig
{
    protected override ItemType GetType() => ItemType.Helmet;
}