using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using TMPro;
using DG.Tweening;
using EndlessNumber;

public class BaffDamageCharacter : Player
{
    [SerializeField] private SpawnEnemy spawnEnemy;

    private Label _labelDPS;

    private float getDP;

    private bool isDamage = true;

     private int _numberTarget = 1;

    [SerializeField] private GameObject _damageAnimation;

    [SerializeField] private bool isRocketMan = false;

    public static float damageRocket = 0;

    protected override void OnEnable()
    {
        base.OnEnable();

        //StartCoroutine(AutoDamage());

        _labelDPS = _root.Q<VisualElement>("InfCharacters").Q<VisualElement>("Character_" + (_buttonNumber + 1)).Q<Label>("DP");
    }

    protected override void LevelUP(int multiplier)
    {
        if (isRocketMan)
            damageRocket = _DP / 2;

        base.LevelUP(multiplier);

        getDP = _DP;

        //_labelDPS.text = DPToText(newDP);

        if (isRocketMan)
            damageRocket = _DP / 2;

        SpawnerHelicopter.isStartSpawnHelicopter = true;
    }

    private void LateUpdate()
    {
        if (StartNextLevel.isBoss)
        {
            //_DP = 0;
            //TimerAttack = 200;

            //StopCoroutine(AutoDamage());
        }

        if (isDeath)
        {
            Dead();
        }

        if (isDamage)// && _HP > 0)
        {
            StartCoroutine(AutoDamage());
            isDamage = false;
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
        if (level > 1 && CharacterPrefab)
        {
            //Debug.Log(_numberTarget + " " + SpawnEnemy2.EnemyOnScene.Count);

            for (int i = 0; i < SpawnEnemy2.EnemyOnScene.Count; i++)
            {
                if (SpawnEnemy2.EnemyOnScene[i] != null)
                {
                    for (int k = 0; k < _numberTarget; k++)
                    {
                        if (i + k >= SpawnEnemy2.EnemyOnScene.Count)
                        {
                            break;
                        }

                        if (SpawnEnemy2.EnemyOnScene[i + k] != null)
                        {
                            List<ClickOnEnemy2> clickOnEnemy2 = new List<ClickOnEnemy2>();
                            MobsCollision mobsCollision = SpawnEnemy2.EnemyOnScene[i + k].GetComponent<MobsCollision>();
                            ClickOnEnemy2 clickOnEnemy2Mob = SpawnEnemy2.EnemyOnScene[i + k];

                            for (int cof = 0; cof <= SpawnEnemy2.EnemyOnScene.Count; cof++)
                            {
                                if (cof == SpawnEnemy2.EnemyOnScene.Count)
                                {
                                    List<ClickOnEnemy2> mobsCollisionsZone = new List<ClickOnEnemy2>();
                                    for (int g = 0; g < SpawnEnemy2.EnemyOnScene.Count; g++)
                                    {
                                        switch (clickOnEnemy2[g].GetComponent<MobsCollision>().ZoneNumber)
                                        {
                                            case 1:
                                                mobsCollisionsZone.Add(clickOnEnemy2[g]);
                                                mobsCollisionsZone.Add(clickOnEnemy2[g]);
                                                mobsCollisionsZone.Add(clickOnEnemy2[g]);
                                                mobsCollisionsZone.Add(clickOnEnemy2[g]);
                                                mobsCollisionsZone.Add(clickOnEnemy2[g]);
                                                mobsCollisionsZone.Add(clickOnEnemy2[g]);
                                                break;
                                            case 2:
                                                mobsCollisionsZone.Add(clickOnEnemy2[g]);
                                                mobsCollisionsZone.Add(clickOnEnemy2[g]);
                                                mobsCollisionsZone.Add(clickOnEnemy2[g]);
                                                break;
                                            case 3:
                                                mobsCollisionsZone.Add(clickOnEnemy2[g]);
                                                break;
                                        }

                                    }

                                    clickOnEnemy2Mob = mobsCollisionsZone[Random.Range(0, mobsCollisionsZone.Count)];
                                    mobsCollision = clickOnEnemy2Mob.GetComponent<MobsCollision>();

                                    mobsCollisionsZone.Clear();
                                    clickOnEnemy2.Clear();
                                    break;
                                }

                                clickOnEnemy2.Add(SpawnEnemy2.EnemyOnScene[cof]);
                            }


                            if (mobsCollision.isNoDamage == false)
                            {
                                mobsCollision.HP -= (dp);
                                mobsCollision.SetHP((dp));
                            }
                            else
                            {
                                mobsCollision.HP -= (dp) / 3;
                                mobsCollision.SetHP((dp) / 3);
                            }

                            if (_damageAnimation != null)
                            {
                                Vector3 pos =
                                    new Vector3(clickOnEnemy2Mob.transform.position.x + Random.Range(-0.4f, 0.4f),
                                    clickOnEnemy2Mob.transform.position.y + Random.Range(-1.0f, 0.8f),
                                    clickOnEnemy2Mob.transform.position.z);
                                _damageAnimation.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = EndlessText.DPToText(newDP);

                                GameObject Damage = Instantiate(_damageAnimation);
                                Damage.transform.position = pos;
                                StartCoroutine(AnimationDamage(Damage));
                            }

                            if (CharacterPrefab.TryGetComponent<AnimatorHumans>(out var animatorHumans))
                            {
                                animatorHumans.AnimatingShootHuman();
                            }

                            //BaffDamageCharacter.isShot = true;

                        }
                    }

                    yield return new WaitForSeconds(Time_between_attacks);

                    break;
                }
            }

            yield return null;
        }
        else
        {
            yield return null;
        }

        isDamage = true;

    }

    public IEnumerator AnimationDamage(GameObject gameObject)
    {
        gameObject.transform.GetChild(0).GetChild(0).GetComponent<TextMeshProUGUI>().text = _DP.ToString();
        gameObject.transform.localScale = Vector3.zero;
        //gameObject.GetComponent<SpriteRenderer>().enabled = true;
        gameObject.transform.DOMoveY(gameObject.transform.position.y + 1, 0.5f);
        gameObject.transform.DOScale(0.4f, 0.3f);

        yield return new WaitForSeconds(0.7f);

        Destroy(gameObject);
    }

}
