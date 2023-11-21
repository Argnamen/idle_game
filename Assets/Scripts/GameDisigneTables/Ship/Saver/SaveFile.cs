using System;
using System.Collections.Generic;
using NaughtyAttributes;
using UnityEngine;

namespace Plugins.Ship.Saver
{
    [CreateAssetMenu(fileName = "DefaultSave", order = 0)]
    public class SaveFile : ScriptableObject
    {
        [SerializeField] private List<Save> _saves = new();

        public List<Save> Saves
        {
            get => _saves;
            set => _saves = value;
        }
    }

    [Serializable]
    public struct Save
    {
        [SerializeField] public string Name;
        [ResizableTextArea]
        [SerializeField] public string Value;
        [SerializeField] public string Link;

        public Save(string name, string value, string link)
        {
            Name = name;
            Value = value;
            Link = link;
        }
    }
}