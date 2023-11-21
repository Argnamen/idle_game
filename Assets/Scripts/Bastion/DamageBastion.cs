using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Damage
{
    public class DamageBastion : MonoBehaviour
    {
        private Bastion _bastion;
        public DamageBastion(Bastion bastion)
        {
            _bastion = bastion;
        }
        public void Damage(float DP)
        {
            _bastion.HP_Current -= DP;
        }
    }
}