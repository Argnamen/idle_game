/*
using System;
using Plugins.Ship.Sheets.InfoSheet;
using UnityEngine;

namespace Realization.Configs
{
    [Serializable]
    public class Constants : IInfo<Constants>
    {
        [SerializeField] private int _tavernBasicCountOfCharacters;

        [SerializeField] private float _tavern1NdGradeProbability;
        [SerializeField] private float _tavern2NdGradeProbability;
        [SerializeField] private float _tavern3NdGradeProbability;
        [SerializeField] private float _tavern4NdGradeProbability;
        [SerializeField] private float _tavern5NdGradeProbability;

        [SerializeField] private int _tavernBasicAmountOfGold;

        [SerializeField] private float _battleStunDuration;
        [SerializeField] private float _battleDotFrequencyBurning;
        [SerializeField] private float _battleDotFrequencyPoisoning;
        [SerializeField] private float _battleDotFrequencyBleeding;

        [SerializeField] private Vector2 _battleDamageSpread;
        [SerializeField] private Vector2 _battleHealingSpread;

        [SerializeField] private int _generalMaxRange;

        [SerializeField] private float _generalClockFrequency;

        public static Constants Instance;

        public int TavernBasicCountOfCharacters
        {
            get => _tavernBasicCountOfCharacters;
            set => _tavernBasicCountOfCharacters = value;
        }


        public float Tavern1NdGradeProbability
        {
            get => _tavern1NdGradeProbability;
            set => _tavern1NdGradeProbability = value;
        }

        public float Tavern2NdGradeProbability
        {
            get => _tavern2NdGradeProbability;
            set => _tavern2NdGradeProbability = value;
        }

        public float Tavern3NdGradeProbability
        {
            get => _tavern3NdGradeProbability;
            set => _tavern3NdGradeProbability = value;
        }

        public float Tavern4NdGradeProbability
        {
            get => _tavern4NdGradeProbability;
            set => _tavern4NdGradeProbability = value;
        }

        public float Tavern5NdGradeProbability
        {
            get => _tavern5NdGradeProbability;
            set => _tavern5NdGradeProbability = value;
        }


        public int TavernBasicAmountOfGold
        {
            get => _tavernBasicAmountOfGold;
            set => _tavernBasicAmountOfGold = value;
        }


        public float BattleStunDuration
        {
            get => _battleStunDuration;
            set => _battleStunDuration = value;
        }

        public float BattleDotFrequencyBurning
        {
            get => _battleDotFrequencyBurning;
            set => _battleDotFrequencyBurning = value;
        }

        public float BattleDotFrequencyPoisoning
        {
            get => _battleDotFrequencyPoisoning;
            set => _battleDotFrequencyPoisoning = value;
        }

        public float BattleDotFrequencyBleeding
        {
            get => _battleDotFrequencyBleeding;
            set => _battleDotFrequencyBleeding = value;
        }


        public Vector2 BattleDamageSpread
        {
            get => _battleDamageSpread;
            set => _battleDamageSpread = value;
        }

        public Vector2 BattleHealingSpread
        {
            get => _battleHealingSpread;
            set => _battleHealingSpread = value;
        }


        public int GeneralMaxRange
        {
            get => _generalMaxRange;
            set => _generalMaxRange = value;
        }


        public float GeneralClockFrequency
        {
            get => _generalClockFrequency;
            set => _generalClockFrequency = value;
        }

        public void Perform(Constants constants)
        {
            constants._tavernBasicCountOfCharacters = _tavernBasicCountOfCharacters;
            constants._tavern1NdGradeProbability = _tavern1NdGradeProbability;
            constants._tavern2NdGradeProbability = _tavern2NdGradeProbability;
            constants._tavern3NdGradeProbability = _tavern3NdGradeProbability;
            constants._tavern4NdGradeProbability = _tavern4NdGradeProbability;
            constants._tavern5NdGradeProbability = _tavern5NdGradeProbability;
            constants._tavernBasicAmountOfGold = _tavernBasicAmountOfGold;
            constants._battleStunDuration = _battleStunDuration;
            constants._battleDotFrequencyBurning = _battleDotFrequencyBurning;
            constants._battleDotFrequencyPoisoning = _battleDotFrequencyPoisoning;
            constants._battleDotFrequencyBleeding = _battleDotFrequencyBleeding;
            constants._battleDamageSpread = _battleDamageSpread;
            constants._battleHealingSpread = _battleHealingSpread;
            constants._generalMaxRange = _generalMaxRange;
            constants._generalClockFrequency = _generalClockFrequency;
        }
    }
}
*/