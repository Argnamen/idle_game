using System;
using UnityEngine;

public class CheckZombieDestroy : MonoBehaviour
{
    public event Action<CheckZombieDestroy> DeadZombie;

    private void OnDestroy()
    {
        //DeadZombie.Invoke(this);
    }
}