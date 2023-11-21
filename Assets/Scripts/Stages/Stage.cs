using System;
using Plugins.Ship.Sheets.InfoSheet;
using UnityEngine;
using System.Collections.Generic;

namespace Realization.Configs
{
    [Serializable]
    public class Stage : IInfo<Stage>
    {
        [SerializeField] private string[] _stage_UID = new string[20];
        [SerializeField] private string[] _target_HP = new string[20];
        [SerializeField] private string[] _reward = new string[20];

        public string[] Stage_UID
        {
            get => _stage_UID;
            set => _stage_UID = value;
        }
        public string[] Target_HP
        {
            get => _target_HP;
            set => _target_HP = value;
        }
        public string[] Reward
        {
            get => _reward;
            set => _reward = value;
        }

        public void Perform(Stage stage)
        {
            stage._stage_UID = _stage_UID;
            stage._target_HP = _target_HP;
            stage._reward = _reward;
        }
    }
}
