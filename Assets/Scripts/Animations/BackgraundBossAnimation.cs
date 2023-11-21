using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System;

public class BackgraundBossAnimation : MonoBehaviour
{
    [SerializeField] private SpriteRenderer _moon, _backgraund, _dark;

    private bool isStartAnimation = false;

    private SpriteRenderer[] _moonLight;
    private void OnEnable()
    {
        _moonLight = new SpriteRenderer[_moon.transform.GetChild(0).childCount];

        for (int i = 0; i < _moonLight.Length; i++)
        {
            _moonLight[i] = _moon.transform.GetChild(0).GetChild(i).gameObject.GetComponent<SpriteRenderer>();
        }
    }
    private void FixedUpdate()
    {
        //Debug.Log(Levels.BossLevelNumber);
        if (Levels.BossLevelNumber > 0 && !isStartAnimation)
        {
            isStartAnimation = true;
            _moon.DOColor(new Color32(166, 50, 50, 255), 0.5f);
            for (int i = 0; i < _moonLight.Length; i++)
            {
                _moonLight[i].DOColor(new Color32(166, 50, 50, RepeatBackground.AlphaColor), 0.5f);
            }

            _backgraund.DOColor(new Color32(128, 68, 68, 255), 0.5f);
            _dark.DOColor(new Color32(0, 0, 0, 50), 0.5f);
        }

        if (Levels.BossLevelNumber == 0 && isStartAnimation)
        {
            isStartAnimation = false;
            _moon.DOColor(Color.white, 0.5f);
            for (int i = 0; i < _moonLight.Length; i++)
            {
                _moonLight[i].DOColor(new Color32(255, 255, 255, RepeatBackground.AlphaColor), 0.5f);
            }

            _backgraund.DOColor(Color.white, 0.5f);
            _dark.DOColor(new Color32(0, 0, 0, 0), 0.5f);
        }
        
    }
}
