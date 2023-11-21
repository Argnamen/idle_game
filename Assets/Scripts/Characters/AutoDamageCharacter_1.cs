using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class AutoDamageCharacter_1 : Player
{
    [SerializeField] private SpawnEnemy spawnEnemy;

    private Label _labelDPS;

    private float getDP;

    [SerializeField] private int _numberTarget;
    [SerializeField] private float _timerAttack;

    protected override void OnEnable()
    {
        base.OnEnable();

        StartCoroutine(AutoDamage());

        _labelDPS = _root.Q<VisualElement>("InfCharacters").Q<VisualElement>("Character_2").Q<Label>("DP");
    }

    protected override void LevelUP(int multiplier)
    {
        base.LevelUP(multiplier);

        getDP = _DP;

        //_labelDPS.text = DPToText(newDP);
    }

    private void LateUpdate()
    {
        if (isDeath)
        {
            Dead();
        }
    }

    private void Dead()
    {
        getDP = 0;
        _labelDPS.text = getDP.ToString();
    }

    private IEnumerator AutoDamage()
    {
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

        while (true)
        {
            if (level > 1)
            {
                if(!CharacterPrefab)
                {
                    break;
                }

                if(_numberTarget > SpawnEnemy2.EnemyOnScene.Count)
                {
                    _numberTarget = (SpawnEnemy2.EnemyOnScene.Count);
                }

                for(int i = 0; i < _numberTarget; i++)
                {
                    if (SpawnEnemy2.EnemyOnScene[i] != null)
                    {
                        SpawnEnemy2.EnemyOnScene[i].GetComponent<MobsCollision>().HP -= (dp);
                        SpawnEnemy2.EnemyOnScene[i].GetComponent<MobsCollision>().SetHP(dp);
                    }
                }

                if (CharacterPrefab.TryGetComponent<AnimatorHumans>(out var animatorHumans))
                {
                    //animatorHumans.AnimatingShootHuman();
                }
                //BaffDamageCharacter.isShot = true;

                yield return new WaitForSeconds(_timerAttack);
            }
            else
            {
                yield return null;
            }
        }
    }

}
