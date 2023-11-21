using System;
using UnityEngine;

public class ControllerZoneAttack : MonoBehaviour
{
    [SerializeField] private GameObject _zoneAttack;
    [SerializeField] private Vector3 _scaleZoneAttack;

    private void Awake()
    {
        _zoneAttack.transform.localScale = _scaleZoneAttack;
    }

    private void Update()
    {
        _zoneAttack.transform.localScale = _scaleZoneAttack;
    }
}