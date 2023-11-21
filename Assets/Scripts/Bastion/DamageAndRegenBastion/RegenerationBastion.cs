using System;
using SliderSet;
using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using UnityEngine.UIElements;

namespace Regenaration
{
    public class RegenerationBastion : MonoBehaviour
    {
        [SerializeField] private UIDocument _uiDocument;

        static private UIDocument _useThisUIDocument;

        private Label _textDPS;
        private Label _textDP;
        private VisualElement _elementYellowArrow;

        private Bastion _bastion;
        private SliderSettings _sliderSettings;

        private void Awake()
        {
            _useThisUIDocument = _uiDocument;
        }

        public RegenerationBastion(Bastion bastion, SliderSettings sliderSettings)
        {
            _bastion = bastion;
            _sliderSettings = sliderSettings;
        }

        public void RegenerationHP(float regenerationParam)
        {
            _sliderSettings.SliderHpBarBastion.value = _bastion.HP_Current;

            if (_bastion.HP_Current == _bastion.HP_Max)
                return;

            if (_bastion.HP_Current < _bastion.HP_Max)
            {
                _bastion.HP_Current += Time.fixedDeltaTime * regenerationParam;
            }
        }

        public void SetColorHPBarGreen()
        {
            VisualElement _textRoot = _useThisUIDocument.rootVisualElement;

            VisualElement vs = _textRoot.Q<VisualElement>("Information");
            Label vs2 = vs.Q<VisualElement>("DPS").Q<Label>("DPSTime");

            _textDPS = vs2.Q<Label>("Text_DPSCharacters");
            _elementYellowArrow = _textRoot.Q<VisualElement>("VisualElement_YellowArrow");

            //Debug.Log("Normal_Zone");
            _sliderSettings.FillImageHpBarBastion.color = Color.green;
            _textDPS.style.color = Color.white;
            _elementYellowArrow.visible = false;
        }

        public void SetColorHPBarRed()
        {
            VisualElement _textRoot = _useThisUIDocument.rootVisualElement;

            VisualElement vs = _textRoot.Q<VisualElement>("Information");
            Label vs2 = vs.Q<VisualElement>("DPS").Q<Label>("DPSTime");

            _textDPS = vs2.Q<Label>("Text_DPSCharacters");
            _elementYellowArrow = _textRoot.Q<VisualElement>("VisualElement_YellowArrow");

            _sliderSettings.FillImageHpBarBastion.color = Color.yellow;
            _textDPS.style.color = Color.yellow;
            _elementYellowArrow.visible = true;
        }
    }
}