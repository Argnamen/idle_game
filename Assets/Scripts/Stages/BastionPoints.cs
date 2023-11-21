using System;
using Plugins.Ship.Sheets.InfoSheet;
using UnityEngine;

namespace Realization.Configs
{
    [Serializable]
    public class BastionPoints : IInfo<BastionPoints>
    {
        [SerializeField] private string _mainPoint;
        [SerializeField] private string[] _points = new string[40];

        public string MainPoint
        {
            get => _mainPoint;
            set => _mainPoint = value;
        }
        public string[] Points
        {
            get => _points;
            set => _points = value;
        }
        public void Perform(BastionPoints bastionPoints)
        {
            bastionPoints._points = _points;
            bastionPoints._mainPoint = _mainPoint;
        }
    }
}
