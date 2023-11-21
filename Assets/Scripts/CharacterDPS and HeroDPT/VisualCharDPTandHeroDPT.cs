using UnityEngine;
using UnityEngine.UIElements;

public class VisualCharDPTandHeroDPT : MonoBehaviour
{
    [SerializeField] private TuchDamageCharacter _tuchDamageCharacter;
    [SerializeField] private UIDocument _uiDocument;

    private VisualElement _rootVisualElementDPT;
    private VisualElement _rootVisualElementDPSCharacters;
    private float _modif = 1f;
    private float _modifCharacters = 2f;

    private void Awake()
    {
        _rootVisualElementDPT = _uiDocument.rootVisualElement;
        _rootVisualElementDPSCharacters = _uiDocument.rootVisualElement;
    }

    private void Update()
    {
        VisualedDPSCharacters(_modifCharacters);
        VisualedHeroDPT(_tuchDamageCharacter._DP, _modif);
    }

    private void VisualedHeroDPT(float baseDamage, float totalModifier)
    {
        //totalModifier = /*buffAttack+_criticalDamageCharacter+_criticalDamageItem*/;
        float _dpt = baseDamage * totalModifier;

        _rootVisualElementDPT.Q<Label>("Text_DPS").text = _dpt.ToString();

        Debug.Log($"DPT: {_dpt} = baseDamage: {baseDamage} * totalModifier: {totalModifier}");
    }

    private void VisualedDPSCharacters(float totalModifier)
    {
        //totalModifier= //sum bonuses.................................;
        
        float _dpsCharacters = 0;

        foreach (var playerCharacter in Player.PlayerCharacters)
        {
            if (playerCharacter is TuchDamageCharacter)
            {
                continue;
            }

            _dpsCharacters += playerCharacter._DP * totalModifier;
        }

        _rootVisualElementDPSCharacters.Q<Label>("Text_DPSCharacters").text = _dpsCharacters.ToString();
        Debug.Log($"DPSCharacters: {_dpsCharacters}");
        
    }

}