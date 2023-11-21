/*
using System;
using System.Collections.Generic;
using Plugins.Ship.Sheets.InfoSheet;
using Realization.Configs;
using Units;
using UnityEngine;
using CharacterStore = Parameters.CharacterStore;

namespace Realization.States.CharacterSheet
{
    public class CharacterInfoBuilder : InfoBuilder<Character>
    {
        private string _uid;
        private MinionClass _class;
        private string _prefab;
        private int _grade;
        private string _tags;
        private int _health;
        private float _armor;
        private float _power;
        private float _timeBetweenAttacks;
        private int _range;
        private float _criticalDamageChance;
        private float _criticalDamageMultiplier;
        private float _chanceOfDodge;
        private int _energy;
        private int _powerOfHealing;
        private float _additionalParameter;

        protected override void SetQueue(Queue<Action<string>> queue)
        {
            queue.Enqueue((s => _uid = s));
            queue.Enqueue(AddClass);
            queue.Enqueue((s => _prefab = s));
            queue.Enqueue((s => int.TryParse(s, out _grade)));
            queue.Enqueue((s => _tags = s));
            queue.Enqueue((s => int.TryParse(s, out _health)));
            queue.Enqueue((s => float.TryParse(s, out _armor)));
            queue.Enqueue((s => float.TryParse(s, out _power)));
            queue.Enqueue((s => float.TryParse(s, out _timeBetweenAttacks)));
            queue.Enqueue((s => int.TryParse(s, out _range)));
            queue.Enqueue((s => float.TryParse(s, out _criticalDamageChance)));
            queue.Enqueue((s => float.TryParse(s, out _criticalDamageMultiplier)));
            queue.Enqueue((s => float.TryParse(s, out _chanceOfDodge)));
            queue.Enqueue((s => int.TryParse(s, out _energy)));
            queue.Enqueue((s => int.TryParse(s, out _powerOfHealing)));
            queue.Enqueue((s => float.TryParse(s, out _additionalParameter)));
        }

        private void AddClass(string value)
        {
            if (Enum.TryParse<MinionClass>(value, out var result))
            {
                _class = result;
            }
        }

        protected override IInfo<Character> GetInternal()
            => new Character()
            {
                Uid = _uid,
                Class = _class,
                Prefab = _prefab,
                Grade = _grade,
                Tags = _tags,
                Health = _health,
                Armor = _armor,
                Power = _power,
                TimeBetweenAttacks = _timeBetweenAttacks,
                Range = _range,
                CriticalDamageChance = _criticalDamageChance,
                CriticalDamageMultiplier = _criticalDamageMultiplier,
                ChanceOfDodge = _chanceOfDodge,
                Energy = _energy,
                PowerOfHealing = _powerOfHealing,
                AdditionalParameter = _additionalParameter
            };
    }
    
    public class CharacterStoreInfoBuilder : InfoBuilder<CharacterStore>
    {
        private int _grade;
        private int _price;
        private int _sell_1;
        private int _sell_2;
        private int _sell_3;
        private int _sell_4;
        private int _sell_5;

        protected override void SetQueue(Queue<Action<string>> queue)
        {
            queue.Enqueue((s => int.TryParse(s, out _grade)));
            queue.Enqueue((s => int.TryParse(s, out _price)));
            queue.Enqueue((s => int.TryParse(s, out _sell_1)));
            queue.Enqueue((s => int.TryParse(s, out _sell_2)));
            queue.Enqueue((s => int.TryParse(s, out _sell_3)));
            queue.Enqueue((s => int.TryParse(s, out _sell_4)));
            queue.Enqueue((s => int.TryParse(s, out _sell_5)));
        }
        
        protected override IInfo<CharacterStore> GetInternal()
            => new CharacterStore()
            {
                Grade = _grade, 
                Price = _price,
                Sell_1 = _sell_1,
                Sell_2 = _sell_2,
                Sell_3 = _sell_3,
                Sell_4 = _sell_4,
                Sell_5 = _sell_5,
            };
    }

    public class ConstantsInfoBuilder : InfoBuilder<Constants>
    {
        private int _tavernBasicCountOfCharacters;

        private float _tavern1NdGradeProbability;
        private float _tavern2NdGradeProbability;
        private float _tavern3NdGradeProbability;
        private float _tavern4NdGradeProbability;
        private float _tavern5NdGradeProbability;

        private int _tavernBasicAmountOfGold;

        private float _battleStunDuration;
        private float _battleDotFrequencyBurning;
        private float _battleDotFrequencyPoisoning;
        private float _battleDotFrequencyBleeding;

        private Vector2 _battleDamageSpread;
        private Vector2 _battleHealingSpread;

        private int _generalMaxRange;

        private float _generalClockFrequency;

        protected override void SetQueue(Queue<Action<string>> queue)
        {
            queue.Enqueue((s => int.TryParse(s, out _tavernBasicCountOfCharacters)));

            queue.Enqueue((s => float.TryParse(s, out _tavern1NdGradeProbability)));
            queue.Enqueue((s => float.TryParse(s, out _tavern2NdGradeProbability)));
            queue.Enqueue((s => float.TryParse(s, out _tavern3NdGradeProbability)));
            queue.Enqueue((s => float.TryParse(s, out _tavern4NdGradeProbability)));
            queue.Enqueue((s => float.TryParse(s, out _tavern5NdGradeProbability)));

            queue.Enqueue((s => int.TryParse(s, out _tavernBasicAmountOfGold)));

            queue.Enqueue((s => float.TryParse(s, out _battleStunDuration)));
            queue.Enqueue((s => float.TryParse(s, out _battleDotFrequencyBurning)));
            queue.Enqueue((s => float.TryParse(s, out _battleDotFrequencyPoisoning)));
            queue.Enqueue((s => float.TryParse(s, out _battleDotFrequencyBleeding)));

            queue.Enqueue((s => _battleDamageSpread = ConvertToVector(s)));
            queue.Enqueue((s => _battleHealingSpread = ConvertToVector(s)));

            queue.Enqueue((s => int.TryParse(s, out _generalMaxRange)));

            queue.Enqueue((s => float.TryParse(s, out _generalClockFrequency)));
        }

        private Vector2 ConvertToVector(string value)
        {
            var separator = value.IndexOf(':');
            float x = float.Parse(value.Substring(0, separator));
            float y = float.Parse(value.Substring(separator + 1, value.Length - separator-1));
            return new Vector2(x, y);
        }

        protected override IInfo<Constants> GetInternal()
            => new Constants()
            {
                TavernBasicCountOfCharacters = _tavernBasicCountOfCharacters,
                TavernBasicAmountOfGold= _tavernBasicAmountOfGold,
                Tavern1NdGradeProbability = _tavern1NdGradeProbability,
                Tavern2NdGradeProbability = _tavern2NdGradeProbability,
                Tavern3NdGradeProbability = _tavern3NdGradeProbability,
                Tavern4NdGradeProbability = _tavern4NdGradeProbability,
                Tavern5NdGradeProbability = _tavern5NdGradeProbability,
                BattleStunDuration = _battleStunDuration,
                BattleDotFrequencyBurning = _battleDotFrequencyBurning,
                BattleDotFrequencyPoisoning = _battleDotFrequencyPoisoning,
                BattleDotFrequencyBleeding = _battleDotFrequencyBleeding,
                BattleDamageSpread = _battleDamageSpread,
                BattleHealingSpread = _battleHealingSpread,
            };
    }
}
*/