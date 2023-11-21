using UnityEngine;

[CreateAssetMenu(menuName = "DamageConfig")]
public class DamageConfig : ScriptableObject
{
    [Range(0f, 1f)] [SerializeField] private float _baseHeroCriticalDamageChance;
    [SerializeField] private float _baseHeroCriticalDamageMultiplier;

    public float BaseHeroCriticalDamageChance => _baseHeroCriticalDamageChance;
    public float BaseHeroCriticalDamageMultiplier => _baseHeroCriticalDamageMultiplier;
}