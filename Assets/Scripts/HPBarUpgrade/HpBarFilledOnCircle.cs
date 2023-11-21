using UnityEngine;
using UnityEngine.UI;

public class HpBarFilledOnCircle : MonoBehaviour
{

    [SerializeField] private float _maxHp;
    [SerializeField] private GameObject _circle;
    public float _nowHp;


    private void Start()
    {
        _nowHp = _maxHp;
    }

    private void Update()
    {
        ControlledCircleHp();
    }

    public void ControlledCircleHp()
    {
        if (_nowHp < 0)
        {
            _circle.gameObject.SetActive(false);
        }

        float fillAmount = _nowHp / _maxHp;
        _circle.gameObject.GetComponent<Image>().fillAmount = fillAmount;
    }
}
