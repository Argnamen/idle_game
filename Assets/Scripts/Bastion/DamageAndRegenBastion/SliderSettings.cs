using System;
using System.Collections;
using System.Collections.Generic;
using Damage;
using Regenaration;
using UnityEngine;
using UnityEngine.UI;

namespace SliderSet
{
    public class SliderSettings : MonoBehaviour
    {
        [SerializeField] private Slider _sliderHpBarBastion;
        [SerializeField] private Image _fillImageHpBarBastion;
        [SerializeField] private GameObject _healthBarPrefab;


        private bool _IsEnabledTimerCorutine;
        private IEnumerator _enumerator;

        public GameObject HealthBarPrefab
        {
            get => _healthBarPrefab;
            set => _healthBarPrefab = value;
        }

        public Slider SliderHpBarBastion
        {
            get => _sliderHpBarBastion;
            set => value = _sliderHpBarBastion;
        }

        public Image FillImageHpBarBastion
        {
            get => _fillImageHpBarBastion;
            set => value = _fillImageHpBarBastion;
        }

        private void FixedUpdate()
        {
            //if (_damager.IsTrueDamage)
                HealthBarPrefab.SetActive(true);
        }

        public IEnumerator TimerToDisabledHPBar(float currentTime)
        {
            if (_IsEnabledTimerCorutine == true)
            {
                yield break;
            }

            _IsEnabledTimerCorutine = true;
            while (currentTime > 0)
            {
                currentTime -= Time.deltaTime;
                Debug.Log($"Time: {currentTime}");
                yield return new WaitForSeconds(0.01f);
            }

            _healthBarPrefab.SetActive(false);
            _IsEnabledTimerCorutine = false;
        }

        public void StartTimerToDisabledHPBar(float currentTime)
        {
            if (_IsEnabledTimerCorutine)
                return;
            _enumerator = TimerToDisabledHPBar(currentTime);
            StartCoroutine(_enumerator);
        }

        public void StoperCoroutine()
        {
            if (_enumerator != null)
            {
                StopCoroutine(_enumerator);
                _IsEnabledTimerCorutine = false;
            }
        }

        public void StartSetValueSlider(Bastion bastion)
        {
            _fillImageHpBarBastion.color = Color.green;
            _sliderHpBarBastion.maxValue = bastion.HP_Max;
            _sliderHpBarBastion.value = _sliderHpBarBastion.maxValue;
            bastion.HP_Current = _sliderHpBarBastion.value;
            _healthBarPrefab.SetActive(false);
        }
    }
}