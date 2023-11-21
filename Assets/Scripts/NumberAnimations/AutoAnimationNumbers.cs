using TMPro;
using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System;
using DG.Tweening;

public class AutoAnimationNumbers : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _textDamage;

    private SpawnAutoNumber _autoNumber;
    private Player _player;

    private void Start()
    {
        //_player = FindObjectOfType<Player>();
        //_textDamage.text = _player._DP.ToString();

        _autoNumber = FindObjectOfType<SpawnAutoNumber>();
        //_textDamage.text = _autoNumber._damageTest.ToString();

        //transform.DOMove(Vector3.up, duration: 0.3f);
        //_textDamage.DOFade(0, duration: 1).OnComplete(Destroy(gameObject));
    }

    public void Destroy()
    {
        Destroy(gameObject);
    }
}
