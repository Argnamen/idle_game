using System;
using System.Collections.Generic;
using Plugins.Ship.Sheets.InfoSheet;
using Realization.Configs;

namespace Realization.States
{
    public class ConstantInfoBuilder : InfoBuilder<Constant>
    {
        private float _bastionHpMax;
        private float _bastionRegenerationValue;
        private int _bastionCriticalHpUpperBorder;
        private int _bastionCriticalHpLowerBorder;
        private int _bastionCriticalHpAttackSpeedReducing;
        private float _bastionCriticalHpChangeTimer;
        private float _bastionDestroyedRegeneration;

        private int _stages_Base_NumberOfWaves;
        private int _stages_FarmStagge_Difficult;
        private int _stages_NumberOfEnemies;
        private int _stages_Spawn_Interval;
        private int _stages_Spawn_PowerPercent;

        private float _base_HeroDamage;
        private float _base_HeroCriticalDamageChance;
        private float _base_HeroCriticalDamageMultiplier;

        private float _characterAttack_Max_Priority;

        private float _characterAttack_Higher_Priority_2z;
        private float _characterAttack_Lower_Priority_2z;

        private float _characterAttack_Higher_Priority_3z;
        private float _characterAttack_Medium_Priority_3z;
        private float _characterAttack_Lower_Priority_3z;

        private float _spawn_Delay;
        private float _spawn_CoolDown_Points;
        private float _spawn_StopSpawnDuration;

        private float _movement_CharacterSpeed;
        private float _movement_BossSpeed;

        private float _base_GoldReward;
        private float _boss_DropChance;

        private float _character_DropChance;

        private float _hero_MaxLvl;
        private float _hero_Abilities_MaxLvl;

        private float _character_MaxLvl;
        private float _character_Items_MaxLvl;

        private float _hero_BaseUpgradeCost;
        private float _base_UpgradeCostMultiplyer;

        private float _hero_Ability_CrushingStrike_UnlockLvl;
        private float _hero_Ability_RuthlessStrike_UnlockLvl;
        private float _hero_Ability_ThirstForWealth_UnlockLvl;
        private float _hero_Ability_BattleRage_UnlockLvl;
        private float _hero_Ability_Inspiration_UnlockLvl;
        private float _hero_Ability_Retribution_UnlockLvl;

        private float _character_SkillUnlockLvl_1st;
        private float _character_SkillUnlockLvl_2nd;
        private float _character_SkillUnlockLvl_3rd;
        private float _character_SkillUnlockLvl_4th;
        private float _character_SkillUnlockLvl_5th;
        private float _character_SkillUnlockLvl_6th;
        private float _character_SkillUnlockLvl_7th;
        private float _character_SkillUnlockLvl_8th;
        private float _character_SkillUnlockLvl_9th;

        private float _character_SkillPriceMultiplyer;



        protected override void SetQueue(Queue<Action<string>> queue)
        {
            queue.Enqueue((s => float.TryParse(s, out _bastionHpMax)));
            queue.Enqueue((s => float.TryParse(s, out _bastionRegenerationValue)));
            queue.Enqueue((s => int.TryParse(s, out _bastionCriticalHpUpperBorder)));
            queue.Enqueue((s => int.TryParse(s, out _bastionCriticalHpLowerBorder)));
            queue.Enqueue((s => int.TryParse(s, out _bastionCriticalHpAttackSpeedReducing)));
            queue.Enqueue((s => float.TryParse(s, out _bastionCriticalHpChangeTimer)));
            queue.Enqueue((s => float.TryParse(s, out _bastionDestroyedRegeneration)));

            queue.Enqueue((s => int.TryParse(s, out _stages_Base_NumberOfWaves)));
            queue.Enqueue((s => int.TryParse(s, out _stages_FarmStagge_Difficult)));
            queue.Enqueue((s => int.TryParse(s, out _stages_NumberOfEnemies)));
            queue.Enqueue((s => int.TryParse(s, out _stages_Spawn_Interval)));
            queue.Enqueue((s => int.TryParse(s, out _stages_Spawn_PowerPercent)));

            queue.Enqueue((s => float.TryParse(s, out _base_HeroDamage)));
            queue.Enqueue((s => float.TryParse(s, out _base_HeroCriticalDamageChance)));
            queue.Enqueue((s => float.TryParse(s, out _base_HeroCriticalDamageMultiplier)));

            queue.Enqueue((s => float.TryParse(s, out _characterAttack_Max_Priority)));

            queue.Enqueue((s => float.TryParse(s, out _characterAttack_Higher_Priority_2z)));
            queue.Enqueue((s => float.TryParse(s, out _characterAttack_Lower_Priority_2z)));

            queue.Enqueue((s => float.TryParse(s, out _characterAttack_Higher_Priority_3z)));
            queue.Enqueue((s => float.TryParse(s, out _characterAttack_Medium_Priority_3z)));
            queue.Enqueue((s => float.TryParse(s, out _characterAttack_Lower_Priority_3z)));

            queue.Enqueue((s => float.TryParse(s, out _spawn_Delay)));
            queue.Enqueue((s => float.TryParse(s, out _spawn_CoolDown_Points)));
            queue.Enqueue((s => float.TryParse(s, out _spawn_StopSpawnDuration)));

            queue.Enqueue((s => float.TryParse(s, out _movement_CharacterSpeed)));
            queue.Enqueue((s => float.TryParse(s, out _movement_BossSpeed)));

            queue.Enqueue((s => float.TryParse(s, out _base_GoldReward)));
            queue.Enqueue((s => float.TryParse(s, out _boss_DropChance)));

            queue.Enqueue((s => float.TryParse(s, out _character_DropChance)));

            queue.Enqueue((s => float.TryParse(s, out _hero_MaxLvl)));
            queue.Enqueue((s => float.TryParse(s, out _hero_Abilities_MaxLvl)));

            queue.Enqueue((s => float.TryParse(s, out _character_MaxLvl)));
            queue.Enqueue((s => float.TryParse(s, out _character_Items_MaxLvl)));

            queue.Enqueue((s => float.TryParse(s, out _hero_BaseUpgradeCost)));
            queue.Enqueue((s => float.TryParse(s, out _base_UpgradeCostMultiplyer)));

            queue.Enqueue((s => float.TryParse(s, out _hero_Ability_CrushingStrike_UnlockLvl)));
            queue.Enqueue((s => float.TryParse(s, out _hero_Ability_RuthlessStrike_UnlockLvl)));
            queue.Enqueue((s => float.TryParse(s, out _hero_Ability_ThirstForWealth_UnlockLvl)));
            queue.Enqueue((s => float.TryParse(s, out _hero_Ability_BattleRage_UnlockLvl)));
            queue.Enqueue((s => float.TryParse(s, out _hero_Ability_Inspiration_UnlockLvl)));
            queue.Enqueue((s => float.TryParse(s, out _hero_Ability_Retribution_UnlockLvl)));

            queue.Enqueue((s => float.TryParse(s, out _character_SkillUnlockLvl_1st)));
            queue.Enqueue((s => float.TryParse(s, out _character_SkillUnlockLvl_2nd)));
            queue.Enqueue((s => float.TryParse(s, out _character_SkillUnlockLvl_3rd)));
            queue.Enqueue((s => float.TryParse(s, out _character_SkillUnlockLvl_4th)));
            queue.Enqueue((s => float.TryParse(s, out _character_SkillUnlockLvl_5th)));
            queue.Enqueue((s => float.TryParse(s, out _character_SkillUnlockLvl_6th)));
            queue.Enqueue((s => float.TryParse(s, out _character_SkillUnlockLvl_7th)));
            queue.Enqueue((s => float.TryParse(s, out _character_SkillUnlockLvl_8th)));
            queue.Enqueue((s => float.TryParse(s, out _character_SkillUnlockLvl_9th)));

            queue.Enqueue((s => float.TryParse(s, out _character_SkillPriceMultiplyer)));

        }


        protected override IInfo<Constant> GetInternal()
            => new Constant()
            {
                BastionHPMax = _bastionHpMax,
                BastionRegenerationValue = _bastionRegenerationValue,
                BastionCriticalHpUpperBorder = _bastionCriticalHpUpperBorder,
                BastionCriticalHpLowerBorder = _bastionCriticalHpLowerBorder,
                BastionCriticalHpAttackSpeedReducing = _bastionCriticalHpAttackSpeedReducing,
                BastionCriticalHpChangeTimer = _bastionCriticalHpChangeTimer,
                BastionDestroyedRegeneration = _bastionDestroyedRegeneration,

                Stages_Base_NumberOfWaves = _stages_Base_NumberOfWaves,
                Stages_FarmStagge_Difficult = _stages_FarmStagge_Difficult,
                Stages_NumberOfEnemies = _stages_NumberOfEnemies,
                Stages_Spawn_Interval = _stages_Spawn_Interval,
                Stages_Spawn_PowerPercent = _stages_Spawn_PowerPercent,

                Base_HeroDamage = _base_HeroDamage,
                Base_HeroCriticalDamageChance = _base_HeroCriticalDamageChance,
                Base_HeroCriticalDamageMultiplier = _base_HeroCriticalDamageMultiplier,

                CharacterAttack_Max_Priority = _characterAttack_Max_Priority,
                CharacterAttack_Higher_Priority_2z = _characterAttack_Higher_Priority_2z,
                CharacterAttack_Lower_Priority_2z = _characterAttack_Lower_Priority_2z,

                CharacterAttack_Higher_Priority_3z = _characterAttack_Higher_Priority_3z,
                CharacterAttack_Medium_Priority_3z = _characterAttack_Medium_Priority_3z,
                CharacterAttack_Lower_Priority_3z = _characterAttack_Lower_Priority_3z,

                Spawn_Delay = _spawn_Delay,
                Spawn_CoolDown_Points = _spawn_CoolDown_Points,
                Spawn_StopSpawnDuration = _spawn_StopSpawnDuration,

                Movement_CharacterSpeed = _movement_CharacterSpeed,
                Movement_BossSpeed = _movement_BossSpeed,

                Base_GoldReward = _base_GoldReward,
                Boss_DropChance = _boss_DropChance,

                Character_DropChance = _character_DropChance,

                Hero_MaxLvl = _hero_MaxLvl,
                Hero_Abilities_MaxLvl = _hero_Abilities_MaxLvl,

                Character_MaxLvl = _character_MaxLvl,
                Character_Items_MaxLvl = _character_Items_MaxLvl,

                Hero_BaseUpgradeCost = _hero_BaseUpgradeCost,
                Base_UpgradeCostMultiplyer = _base_UpgradeCostMultiplyer,

                Hero_Ability_CrushingStrike_UnlockLvl = _hero_Ability_CrushingStrike_UnlockLvl,
                Hero_Ability_RuthlessStrike_UnlockLvl = _hero_Ability_RuthlessStrike_UnlockLvl,
                Hero_Ability_ThirstForWealth_UnlockLvl = _hero_Ability_ThirstForWealth_UnlockLvl,
                Hero_Ability_BattleRage_UnlockLvl = _hero_Ability_BattleRage_UnlockLvl,
                Hero_Ability_Inspiration_UnlockLvl = _hero_Ability_Inspiration_UnlockLvl,
                Hero_Ability_Retribution_UnlockLvl = _hero_Ability_Retribution_UnlockLvl,

                Character_SkillUnlockLvl_1st = _character_SkillUnlockLvl_1st,
                Character_SkillUnlockLvl_2nd = _character_SkillUnlockLvl_2nd,
                Character_SkillUnlockLvl_3rd = _character_SkillUnlockLvl_3rd,
                Character_SkillUnlockLvl_4th = _character_SkillUnlockLvl_4th,
                Character_SkillUnlockLvl_5th = _character_SkillUnlockLvl_5th,
                Character_SkillUnlockLvl_6th = _character_SkillUnlockLvl_6th,
                Character_SkillUnlockLvl_7th = _character_SkillUnlockLvl_7th,
                Character_SkillUnlockLvl_8th = _character_SkillUnlockLvl_8th,
                Character_SkillUnlockLvl_9th = _character_SkillUnlockLvl_9th,

                Character_SkillPriceMultiplyer = _character_SkillPriceMultiplyer
            };
    }
}