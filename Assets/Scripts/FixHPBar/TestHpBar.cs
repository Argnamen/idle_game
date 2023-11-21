using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestHpBar : MonoBehaviour
{
    [SerializeField] private Slider _sliderHpBar;
    [SerializeField] private float _hp;

    private void Start()
    {
        _sliderHpBar.maxValue = _hp;
    }

    private void Update()
    {
        _sliderHpBar.value = _hp;
    }
}