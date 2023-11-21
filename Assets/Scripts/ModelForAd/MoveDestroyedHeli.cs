using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveDestroyedHeli : MonoBehaviour
{
    [SerializeField] private float _speedMoveHeliLeft;

    private MoverBackground _moverBackground;

    private void Start()
    {
        _moverBackground = FindObjectOfType<MoverBackground>();
    }

    private void Update()
    {
        if (_moverBackground.IsStop)
        {
            _speedMoveHeliLeft = 0f;
        }
        else
        {
            _speedMoveHeliLeft = _moverBackground.SpeedBackground;
        }

        if (RepeatBackground.isMove)
        {
            MovedHeliLeft();
        }
    }

    public void MovedHeliLeft()
    {
        transform.Translate(Vector3.left * _speedMoveHeliLeft * Time.deltaTime);
    }
}