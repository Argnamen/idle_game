using TMPro;
using UnityEngine;

public class AnimationClickPlayer : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _textDamage;

    private void Update()
    {
       // if (Autocklicker2)
        {
            float dps = TuchDamageCharacter.DPS * TuchDamageCharacter._criticalMultiHero;
            _textDamage.text = dps.ToString();
        }
        //else
        {
            _textDamage.text = TuchDamageCharacter.DPS.ToString();
        }
    }
    public void Destroy()
    {
        Destroy(transform.parent.gameObject);
    }
}
