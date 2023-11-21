using System;
using Plugins.Ship.Sheets.InfoSheet;
using UnityEngine;

namespace Realization.Configs
{
    [Serializable]
    public class Constant : IInfo<Constant>
    {
        [SerializeField] private float _bastionHpMax;
        [SerializeField] private float _bastionRegenerationValue;
        [SerializeField] private int _bastionCriticalHpUpperBorder;
        [SerializeField] private int _bastionCriticalHpLowerBorder;
        [SerializeField] private int _bastionCriticalHpAttackSpeedReducing;
        [SerializeField] private float _bastionCriticalHpChangeTimer;
        [SerializeField] private float _bastionDestroyedRegeneration;

        [SerializeField] private int _stages_Base_NumberOfWaves;
        [SerializeField] private int _stages_FarmStagge_Difficult;
        [SerializeField] private int _stages_NumberOfEnemies;
        [SerializeField] private int _stages_Spawn_Interval;
        [SerializeField] private int _stages_Spawn_PowerPercent;

        [SerializeField] private float _base_HeroDamage;
        [SerializeField] private float _base_HeroCriticalDamageChance;
        [SerializeField] private float _base_HeroCriticalDamageMultiplier;

        [SerializeField] private float _characterAttack_Max_Priority;

        [SerializeField] private float _characterAttack_Higher_Priority_2z;
        [SerializeField] private float _characterAttack_Lower_Priority_2z;

        [SerializeField] private float _characterAttack_Higher_Priority_3z;
        [SerializeField] private float _characterAttack_Medium_Priority_3z;
        [SerializeField] private float _characterAttack_Lower_Priority_3z;

        [SerializeField] private float _spawn_Delay;
        [SerializeField] private float _spawn_CoolDown_Points;
        [SerializeField] private float _spawn_StopSpawnDuration;

        [SerializeField] private float _movement_CharacterSpeed;
        [SerializeField] private float _movement_BossSpeed;

        [SerializeField] private float _base_GoldReward;
        [SerializeField] private float _boss_DropChance;

        [SerializeField] private float _character_DropChance;

        [SerializeField] private float _hero_MaxLvl;
        [SerializeField] private float _hero_Abilities_MaxLvl;

        [SerializeField] private float _character_MaxLvl;
        [SerializeField] private float _character_Items_MaxLvl;

        [SerializeField] private float _hero_BaseUpgradeCost;
        [SerializeField] private float _base_UpgradeCostMultiplyer;

        [SerializeField] private float _hero_Ability_CrushingStrike_UnlockLvl;
        [SerializeField] private float _hero_Ability_RuthlessStrike_UnlockLvl;
        [SerializeField] private float _hero_Ability_ThirstForWealth_UnlockLvl;
        [SerializeField] private float _hero_Ability_BattleRage_UnlockLvl;
        [SerializeField] private float _hero_Ability_Inspiration_UnlockLvl;
        [SerializeField] private float _hero_Ability_Retribution_UnlockLvl;

        [SerializeField] private float _character_SkillUnlockLvl_1st;
        [SerializeField] private float _character_SkillUnlockLvl_2nd;
        [SerializeField] private float _character_SkillUnlockLvl_3rd;
        [SerializeField] private float _character_SkillUnlockLvl_4th;
        [SerializeField] private float _character_SkillUnlockLvl_5th;
        [SerializeField] private float _character_SkillUnlockLvl_6th;
        [SerializeField] private float _character_SkillUnlockLvl_7th;
        [SerializeField] private float _character_SkillUnlockLvl_8th;
        [SerializeField] private float _character_SkillUnlockLvl_9th;

        [SerializeField] private float _character_SkillPriceMultiplyer;

        public float BastionHPMax 
        {
            get => _bastionHpMax;
            set => _bastionHpMax = value;
        }

        public float BastionRegenerationValue
        {
            get => _bastionRegenerationValue;
            set => _bastionRegenerationValue = value;
        }

        public int BastionCriticalHpUpperBorder
        {
            get => _bastionCriticalHpUpperBorder;
            set => _bastionCriticalHpUpperBorder = value;
        }

        public int BastionCriticalHpLowerBorder
        {
            get => _bastionCriticalHpLowerBorder;
            set => _bastionCriticalHpLowerBorder = value;
        }

        public int BastionCriticalHpAttackSpeedReducing
        {
            get => _bastionCriticalHpAttackSpeedReducing;
            set => _bastionCriticalHpAttackSpeedReducing = value;
        }

        public float BastionCriticalHpChangeTimer
        {
            get => _bastionCriticalHpChangeTimer;
            set => _bastionCriticalHpChangeTimer = value;
        }

        public float BastionDestroyedRegeneration
        {
            get => _bastionDestroyedRegeneration;
            set => _bastionDestroyedRegeneration = value;
        }

        public int Stages_Base_NumberOfWaves
        {
            get => _stages_Base_NumberOfWaves;
            set => _stages_Base_NumberOfWaves = value;
        }

        public int Stages_FarmStagge_Difficult
        {
            get => _stages_FarmStagge_Difficult;
            set => _stages_FarmStagge_Difficult = value;
        }

        public int Stages_NumberOfEnemies
        {
            get => _stages_NumberOfEnemies;
            set => _stages_NumberOfEnemies = value;
        }

        public int Stages_Spawn_Interval
        {
            get => _stages_Spawn_Interval;
            set => _stages_Spawn_Interval = value;
        }

        public int Stages_Spawn_PowerPercent
        {
            get => _stages_Spawn_PowerPercent;
            set => _stages_Spawn_PowerPercent = value;
        }

        public float Base_HeroDamage
        {
            get => _base_HeroDamage;
            set => _base_HeroDamage = value;
        }

        public float Base_HeroCriticalDamageChance
        {
            get => _base_HeroCriticalDamageChance;
            set => _base_HeroCriticalDamageChance = value;
        }
        public float Base_HeroCriticalDamageMultiplier
        {
            get => _base_HeroCriticalDamageMultiplier;
            set => _base_HeroCriticalDamageMultiplier = value;
        }

        public float CharacterAttack_Max_Priority
        {
            get => _characterAttack_Max_Priority;
            set => _characterAttack_Max_Priority = value;
        }

        public float CharacterAttack_Higher_Priority_2z
        {
            get => _characterAttack_Higher_Priority_2z;
            set => _characterAttack_Higher_Priority_2z = value;
        }
        public float CharacterAttack_Lower_Priority_2z
        {
            get => _characterAttack_Lower_Priority_2z;
            set => _characterAttack_Lower_Priority_2z = value;
        }

        public float CharacterAttack_Higher_Priority_3z
        {
            get => _characterAttack_Higher_Priority_3z;
            set => _characterAttack_Higher_Priority_3z = value;
        }
        public float CharacterAttack_Medium_Priority_3z
        {
            get => _characterAttack_Medium_Priority_3z;
            set => _characterAttack_Medium_Priority_3z = value;
        }
        public float CharacterAttack_Lower_Priority_3z
        {
            get => _characterAttack_Lower_Priority_3z;
            set => _characterAttack_Lower_Priority_3z = value;
        }

        public float Spawn_Delay
        {
            get => _spawn_Delay;
            set => _spawn_Delay = value;
        }
        public float Spawn_CoolDown_Points
        {
            get => _spawn_CoolDown_Points;
            set => _spawn_CoolDown_Points = value;
        }
        public float Spawn_StopSpawnDuration
        {
            get => _spawn_StopSpawnDuration;
            set => _spawn_StopSpawnDuration = value;
        }

        public float Movement_CharacterSpeed
        {
            get => _movement_CharacterSpeed;
            set => _movement_CharacterSpeed = value;
        }
        public float Movement_BossSpeed
        {
            get => _movement_BossSpeed;
            set => _movement_BossSpeed = value;
        }

        public float Base_GoldReward
        {
            get => _base_GoldReward;
            set => _base_GoldReward = value;
        }
        public float Boss_DropChance
        {
            get => _boss_DropChance;
            set => _boss_DropChance = value;
        }

        public float Character_DropChance
        {
            get => _character_DropChance;
            set => _character_DropChance = value;
        }

        public float Hero_MaxLvl
        {
            get => _hero_MaxLvl;
            set => _hero_MaxLvl = value;
        }
        public float Hero_Abilities_MaxLvl
        {
            get => _hero_Abilities_MaxLvl;
            set => _hero_Abilities_MaxLvl = value;
        }

        public float Character_MaxLvl
        {
            get => _character_MaxLvl;
            set => _character_MaxLvl = value;
        }
        public float Character_Items_MaxLvl
        {
            get => _character_Items_MaxLvl;
            set => _character_Items_MaxLvl = value;
        }

        public float Hero_BaseUpgradeCost
        {
            get => _hero_BaseUpgradeCost;
            set => _hero_BaseUpgradeCost = value;
        }
        public float Base_UpgradeCostMultiplyer
        {
            get => _base_UpgradeCostMultiplyer;
            set => _base_UpgradeCostMultiplyer = value;
        }

        public float Hero_Ability_CrushingStrike_UnlockLvl
        {
            get => _hero_Ability_CrushingStrike_UnlockLvl;
            set => _hero_Ability_CrushingStrike_UnlockLvl = value;
        }
        public float Hero_Ability_RuthlessStrike_UnlockLvl
        {
            get => _hero_Ability_RuthlessStrike_UnlockLvl;
            set => _hero_Ability_RuthlessStrike_UnlockLvl = value;
        }
        public float Hero_Ability_ThirstForWealth_UnlockLvl
        {
            get => _hero_Ability_ThirstForWealth_UnlockLvl;
            set => _hero_Ability_ThirstForWealth_UnlockLvl = value;
        }
        public float Hero_Ability_BattleRage_UnlockLvl
        {
            get => _hero_Ability_BattleRage_UnlockLvl;
            set => _hero_Ability_BattleRage_UnlockLvl = value;
        }
        public float Hero_Ability_Inspiration_UnlockLvl
        {
            get => _hero_Ability_Inspiration_UnlockLvl;
            set => _hero_Ability_Inspiration_UnlockLvl = value;
        }
        public float Hero_Ability_Retribution_UnlockLvl
        {
            get => _hero_Ability_Retribution_UnlockLvl;
            set => _hero_Ability_Retribution_UnlockLvl = value;
        }

        public float Character_SkillUnlockLvl_1st
        {
            get => _character_SkillUnlockLvl_1st;
            set => _character_SkillUnlockLvl_1st = value;
        }
        public float Character_SkillUnlockLvl_2nd
        {
            get => _character_SkillUnlockLvl_2nd;
            set => _character_SkillUnlockLvl_2nd = value;
        }
        public float Character_SkillUnlockLvl_3rd
        {
            get => _character_SkillUnlockLvl_3rd;
            set => _character_SkillUnlockLvl_3rd = value;
        }
        public float Character_SkillUnlockLvl_4th
        {
            get => _character_SkillUnlockLvl_4th;
            set => _character_SkillUnlockLvl_4th = value;
        }
        public float Character_SkillUnlockLvl_5th
        {
            get => _character_SkillUnlockLvl_5th;
            set => _character_SkillUnlockLvl_5th = value;
        }
        public float Character_SkillUnlockLvl_6th
        {
            get => _character_SkillUnlockLvl_6th;
            set => _character_SkillUnlockLvl_6th = value;
        }
        public float Character_SkillUnlockLvl_7th
        {
            get => _character_SkillUnlockLvl_7th;
            set => _character_SkillUnlockLvl_7th = value;
        }
        public float Character_SkillUnlockLvl_8th
        {
            get => _character_SkillUnlockLvl_8th;
            set => _character_SkillUnlockLvl_8th = value;
        }
        public float Character_SkillUnlockLvl_9th
        {
            get => _character_SkillUnlockLvl_9th;
            set => _character_SkillUnlockLvl_9th = value;
        }

        public float Character_SkillPriceMultiplyer
        {
            get => _character_SkillPriceMultiplyer;
            set => _character_SkillPriceMultiplyer = value;
        }
        public void Perform(Constant constants)
        {
            constants._bastionHpMax = _bastionHpMax;
            constants._bastionRegenerationValue = _bastionRegenerationValue;
            constants._bastionCriticalHpUpperBorder = _bastionCriticalHpUpperBorder;
            constants._bastionCriticalHpLowerBorder = _bastionCriticalHpLowerBorder;
            constants._bastionCriticalHpAttackSpeedReducing = _bastionCriticalHpAttackSpeedReducing;
            constants._bastionCriticalHpChangeTimer = _bastionCriticalHpChangeTimer;
            constants._bastionDestroyedRegeneration = _bastionDestroyedRegeneration;

            constants._stages_Base_NumberOfWaves = _stages_Base_NumberOfWaves;
            constants._stages_FarmStagge_Difficult = _stages_FarmStagge_Difficult;
            constants._stages_NumberOfEnemies = _stages_NumberOfEnemies;
            constants._stages_Spawn_Interval = _stages_Spawn_Interval;
            constants._stages_Spawn_PowerPercent = _stages_Spawn_PowerPercent;

            constants._base_HeroDamage = _base_HeroDamage;
            constants._base_HeroCriticalDamageChance = _base_HeroCriticalDamageChance;
            constants._base_HeroCriticalDamageMultiplier = _base_HeroCriticalDamageMultiplier;

            constants._characterAttack_Max_Priority = _characterAttack_Max_Priority;
            constants._characterAttack_Higher_Priority_2z = _characterAttack_Higher_Priority_2z;
            constants._characterAttack_Lower_Priority_2z = _characterAttack_Lower_Priority_2z;

            constants._characterAttack_Higher_Priority_3z = _characterAttack_Higher_Priority_3z;
            constants._characterAttack_Medium_Priority_3z = _characterAttack_Medium_Priority_3z;
            constants._characterAttack_Lower_Priority_3z = _characterAttack_Lower_Priority_3z;

            constants._spawn_Delay = _spawn_Delay;
            constants._spawn_CoolDown_Points = _spawn_CoolDown_Points;
            constants._spawn_StopSpawnDuration = _spawn_StopSpawnDuration;

            constants._movement_CharacterSpeed = _movement_CharacterSpeed;
            constants._movement_BossSpeed = _movement_BossSpeed;

            constants._base_GoldReward = _base_GoldReward;
            constants._boss_DropChance = _boss_DropChance;

            constants._character_DropChance = _character_DropChance;

            constants._hero_MaxLvl = _hero_MaxLvl;
            constants._hero_Abilities_MaxLvl = _hero_Abilities_MaxLvl;

            constants._character_MaxLvl = _character_MaxLvl;
            constants._character_Items_MaxLvl = _character_Items_MaxLvl;

            constants._hero_BaseUpgradeCost = _hero_BaseUpgradeCost;
            constants._base_UpgradeCostMultiplyer = _base_UpgradeCostMultiplyer;

            constants._hero_Ability_CrushingStrike_UnlockLvl = _hero_Ability_CrushingStrike_UnlockLvl;
            constants._hero_Ability_RuthlessStrike_UnlockLvl = _hero_Ability_RuthlessStrike_UnlockLvl;
            constants._hero_Ability_ThirstForWealth_UnlockLvl = _hero_Ability_ThirstForWealth_UnlockLvl;
            constants._hero_Ability_BattleRage_UnlockLvl = _hero_Ability_BattleRage_UnlockLvl;
            constants._hero_Ability_Inspiration_UnlockLvl = _hero_Ability_Inspiration_UnlockLvl;
            constants._hero_Ability_Retribution_UnlockLvl = _hero_Ability_Retribution_UnlockLvl;

            constants._character_SkillUnlockLvl_1st = _character_SkillUnlockLvl_1st;
            constants._character_SkillUnlockLvl_2nd = _character_SkillUnlockLvl_2nd;
            constants._character_SkillUnlockLvl_3rd = _character_SkillUnlockLvl_3rd;
            constants._character_SkillUnlockLvl_4th = _character_SkillUnlockLvl_4th;
            constants._character_SkillUnlockLvl_5th = _character_SkillUnlockLvl_5th;
            constants._character_SkillUnlockLvl_6th = _character_SkillUnlockLvl_6th;
            constants._character_SkillUnlockLvl_7th = _character_SkillUnlockLvl_7th;
            constants._character_SkillUnlockLvl_8th = _character_SkillUnlockLvl_8th;
            constants._character_SkillUnlockLvl_9th = _character_SkillUnlockLvl_9th;

            constants._character_SkillPriceMultiplyer = _character_SkillPriceMultiplyer;
        }
    }
}

