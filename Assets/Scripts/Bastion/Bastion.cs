using System.Collections;
using UnityEngine;
using Damage;
using CriticalZone;
using Destroy;
using Baff;
using Realization.States;
using Regenaration;
using SliderSet;

public class Bastion : MonoBehaviour
{
    [SerializeField] private SliderSettings _sliderSettings;
    [SerializeField] private ConstantConfig _constantsConfig;
    
    public float HP_Max, HP_Regeneration;

    public float _HP_Current;
    public float HP_Current
    {
        get => _HP_Current;
        set
        {
            _HP_Current = value;

            if (!StartNextLevel.isBoss && _HP_Current <= HP_Max / 100 * CriticalHP_LowerBorder)
            {
                _HP_Current = HP_Max / 100 * CriticalHP_LowerBorder;
            }
        }
    }

    public int CriticalHP_UpperBorder, CriticalHP_LowerBorder;

    public int AttackSpeedReducing;
    public float ChangeTimer;

    public float Destroyed_Regeneration;

    private IEnumerator _damaging;

    private CriticalZoneBastion _criticalZone;
    [SerializeField]private DestroyBastion _destroy;
    private RegenerationBastion _regenerationBastion;

    public static BaffBastion _levelUp;
    [HideInInspector] public DamageBastion _damage;

    private bool isDead = false;

    private void Awake()
    {
        _sliderSettings.StartSetValueSlider(this);
        _criticalZone = new CriticalZoneBastion(ChangeTimer);
        _levelUp = new BaffBastion(this);
        _damage = new DamageBastion(this);

        HP_Current = HP_Max;

        HP_Max = _constantsConfig.Constants.BastionHPMax;
        HP_Regeneration = _constantsConfig.Constants.BastionRegenerationValue;
        Destroyed_Regeneration = _constantsConfig.Constants.BastionDestroyedRegeneration;
        CriticalHP_LowerBorder = _constantsConfig.Constants.BastionCriticalHpLowerBorder;
        CriticalHP_UpperBorder = _constantsConfig.Constants.BastionCriticalHpUpperBorder;
        AttackSpeedReducing = _constantsConfig.Constants.BastionCriticalHpAttackSpeedReducing;
        ChangeTimer = _constantsConfig.Constants.BastionCriticalHpChangeTimer;
        
        _regenerationBastion = new RegenerationBastion(this, _sliderSettings);
    }

 
    private void FixedUpdate()
    {
        if (HP_Current <= 0 && !isDead)
        {
            _destroy.Destroy();

            isDead = true;

            return;
        }

        if(HP_Current <= (HP_Max / 100 * CriticalHP_UpperBorder))
        {
            _criticalZone.OnCriticalStay(AttackSpeedReducing);

            _regenerationBastion.SetColorHPBarRed();
        }
        else
        {
            _criticalZone.OffCriticalStay(AttackSpeedReducing);

            _regenerationBastion.SetColorHPBarGreen();
        }

        if(HP_Current >= HP_Max)
        {
            if (isBarTimer == false)
            {
                isBarTimer = true;
                StartCoroutine(HPBarTimer());
            }
        }
        else
        {
            if (isBarTimer)
            {
                isBarTimer = false;
                StopCoroutine(HPBarTimer());

                _sliderSettings.HealthBarPrefab.transform.parent.gameObject.SetActive(true);
            }
        }

        if (HP_Current < HP_Max && !isDead)
        {
            _regenerationBastion.RegenerationHP(HP_Regeneration);
        }
        else if (HP_Current < HP_Max && isDead)
        {
            _regenerationBastion.RegenerationHP(Destroyed_Regeneration);
        }
        else if(isDead)
        {
            isDead = false;
        }
    }

    private bool isBarTimer = false;
    private IEnumerator HPBarTimer()
    {
        yield return new WaitForSeconds(1f);

        _sliderSettings.HealthBarPrefab.transform.parent.gameObject.SetActive(false);
    }
}