using UnityEditor;
using UnityEngine;
using Realization.Configs;
using System.Collections.Generic;


[CreateAssetMenu(fileName = "ConstansConfig", menuName = "Configs/Constants")]
public class ConstantConfig : ScriptableObject
{
    public Constant Constants;
}

