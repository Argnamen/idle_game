using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticlesBuff : MonoBehaviour
{
    [SerializeField] private GameObject[] _particlesObjects;
    
    
    public void DisabledParticles()
    {
        foreach (var particlesObject in _particlesObjects)
        {
            particlesObject.SetActive(false);
        }
    }
}