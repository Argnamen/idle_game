using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

public class TuchDamageCharacter : Player
{
    [SerializeField] private ConstantConfig _constantConfig;
    public static float DPS;

    private Label _labelDPS;
    private float _heroDPT;

    public static float _criticalChanceHero;
    public static float _criticalMultiHero;

    public static bool isShot = false;


    protected override void OnEnable()
    {
        base.OnEnable();

        Base_HeroDamage = _constantConfig.Constants.Base_HeroDamage;

        _criticalChanceHero = _constantConfig.Constants.Base_HeroCriticalDamageChance;
        _criticalMultiHero = _constantConfig.Constants.Base_HeroCriticalDamageMultiplier;

        Debug.Log($"CriticalChanceHero: {_criticalChanceHero}, " +
                  $"CriticalMultiHero: {_criticalMultiHero}");

        if (_buttonNumber == 0)
        {
            //Player.PlayerCharacters.Add(this);
            _labelDPS = _root.Q<VisualElement>("InfCharacters").Q<VisualElement>("Character_" + (_buttonNumber + 1))
                .Q<Label>("DP");

            //PlayerPrefs.SetInt("Gems", _gems);

            //string _gemsString = ConvertPoins((int)PlayerPrefs.GetInt("Gems"));

            //_labelGems.text =  _gemsString.ToString();
        }
    }

    protected override void LevelUP(int multiplier)
    {
        base.LevelUP(multiplier);

        float dp = 0;
        if (isActiveBaff)
        {
            for (int i = 0; i < meBaff.Count; i++)
            {
                dp += _baffDP[(int)meBaff[i]];
            }

            dp += _DP;
        }
        else
        {
            dp = _DP;
        }

        DPS = (dp);

        if (_buttonNumber == 0)
        {
            DPSTextUpdate();
        }
    }

    private void LateUpdate()
    {
        if (isShot && CharacterPrefab)
        {
            isShot = false;
            Shot();
        }

        if (isDeath)
        {
            Dead();
        }
    }

    private void Dead()
    {
        DPS = 0;
        _labelDPS.text = DPS.ToString();
    }

    public void Shot()
    {
        CharacterPrefab.GetComponent<AnimatorHumans>().AnimatingShootHuman();
        //BaffDamageCharacter.isShot = true;
    }

    public void DPSTextUpdate()
    {
        //DPS = (float)((int)((_DP + _baffDP) * 100)) / 100;
        PlayerPrefs.SetFloat("DPS", DPS);
        _labelDPS.text = DPS.ToString();
    }

    public void CalculationOfTheUltimateStrengthOfTheHero()
    {
        //_heroDPT=(DPS+ /*_buffAttack*/)*(_criticalMultiHero+/*_buffCrtMulti*/);
    }

    public void Prestige()
    {
        level = 0;
        //_hp = 0;
        DPS = 0;
        _DP = 0;
        DPMultiplier = 0;

        // PlayerPrefs.SetFloat("DPS",DPS+/*_attackItem*/);
        // PlayerPrefs.SetFloat("CriticalMultiHero",_criticalMultiHero+/*_criticalMultiItem*/);
        // PlayerPrefs.SetFloat("CriticalChanceHero",_criticalChanceHero+/*criticalChanceItem*/);
        // PlayerPrefs.SetFloat("HpHero",_hpHero+/* _hpItem*/);
        //......


        //Нарыл для примера, как будет инвентарь можно будет для примера глянуть.

        #region SaveInventory

        // public static void SaveInventory(Inventory inventory)
        // {
        //     List<int> itemIdList = new List<int>();
        //     List<int> itemCountList = new List<int>();
        //
        //     foreach (Progress.Item item in inventory.items)
        //     {
        //         if (item != null)
        //         {
        //             itemIdList.Add(item.GetInstanceID());
        //             itemCountList.Add(1);
        //         }
        //         else
        //         {
        //             itemIdList.Add(0);
        //             itemCountList.Add(0);
        //         }
        //     }
        //
        //     PlayerPrefs.SetIntArray("ItemIdList", itemIdList.ToArray());
        //     PlayerPrefs.SetIntArray("ItemCountList", itemCountList.ToArray());
        //     List<int> equipmentIdList = new List<int>();
        //
        //     foreach (Equipment equipment in inventory.equipment)
        //     {
        //         if (equipment != null)
        //         {
        //             equipmentIdList.Add(equipment.GetInstanceID());
        //         }
        //         else
        //         {
        //             equipmentIdList.Add(0);
        //         }
        //     }
        //
        //     PlayerPrefs.SetIntArray("EquipmentIdList", equipmentIdList.ToArray());
        //
        //     PlayerPrefs.Save();
        // }

        #endregion
    }
}