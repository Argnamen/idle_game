using UnityEngine;
using UnityEngine.UI;

public class HpBar : MonoBehaviour
{
    [SerializeField] private GameObject _healthBarObject;
    [SerializeField] private Slider _sliderBar;
    [SerializeField] private DraggablePlayers _draggablePlayers; //Тут MobCollision, как я понимаю, должен быть.

    public GameObject HealthBarObject
    {
        get => _healthBarObject;
        set => _healthBarObject = value;
    }

    private void Start()
    {
        SetMaxValue();
    }

    public void SetMaxValue()
    {
        _sliderBar.maxValue = _draggablePlayers.healthPlayer;
        _sliderBar.value = _draggablePlayers.healthPlayer;
    }

    public void SetValue()
    {
        _sliderBar.value = _draggablePlayers.healthPlayer;
    }
}
