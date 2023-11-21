using UnityEngine;
using DG.Tweening;
using System.Collections;
using System.Collections.Generic;

public class Gold : MonoBehaviour
{
    [SerializeField] private Animator _animatorGold;
    [SerializeField] private float _speedGoldForTarget;
    [SerializeField] private float _speedMoveGoldLeft;
    [SerializeField] private float _timer;
    public Wallet _wallet;

    private GameObject _targetForGold;
    private GoldPicking _goldPicking;
    private bool _IsTranslate;
    private bool _IsTackedGold = true;

    public float price = 0;

    private void Start()
    {
        gameObject.transform.GetChild(0).GetComponent<Collider2D>().enabled = false;
        _goldPicking = FindObjectOfType<GoldPicking>();
        _targetForGold = GameObject.Find("TargetForGold");
        _animatorGold = GetComponent<Animator>();
    }

    private void OnEnable()
    {
        StartCoroutine(AutoPicked());
    }

    private IEnumerator AutoPicked()
    {
        yield return new WaitForSeconds(1f);

        if (_IsTackedGold)
        {
            _IsTackedGold = false;
            _IsTranslate = true;
        }
    }

    private void Update()
    {
        if (RepeatBackground.isMove)
        {
            MovedGoldLeft();
        }
    }

    private void FixedUpdate()
    {
        if (_IsTranslate)
        {
            _speedMoveGoldLeft = 0f;
            TranslatingForTarget();
        }

        //AutoPickedGold();
    }

    private void MovedGoldLeft()
    {
        transform.Translate(Vector3.left * _speedMoveGoldLeft * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.name is "CheckTackedGold" or "CheckTackedGoldAfterScreen")
        {
            _IsTackedGold = true;
        }
    }

    private void AutoPickedGold()
    {
        if (_IsTackedGold == true)
        {
            DisabledAnimator();
            gameObject.transform.GetChild(0).rotation = gameObject.transform.rotation;
            TranslatingForTarget();
        }
    }

    public void AnimatingGoldPicked()
    {
        _animatorGold.Play("GoldPicking");
    }

    private void TranslatingForTarget()
    {
        _IsTranslate = false;

        DOTween.Sequence()
           .Append(this.transform.DOMove(new Vector3(7.56f, 3.29f, 0), 0.2f).SetEase(Ease.Linear))
           //.AppendInterval(0.01f)
           .AppendCallback(AddCoins);

        //gameObject.transform.GetChild(0).GetComponent<Collider2D>().enabled = true;
        //gameObject.transform.GetChild(0).Translate((_targetForGold.transform.position - transform.GetChild(0).position).normalized
        //* _speedGoldForTarget * Time.deltaTime);
    }

    private async void AddCoins()
    {
        //Wallet._receipts = 20 * (UiTextLevel._staticLevelNumber * UiTextLevel._staticChapter);

        List<int> addCoins = new List<int>();

        addCoins.Add((int)price);

        if(addCoins[0] > 1000)
        {
            for (int i = 0; i < addCoins.Count; i++)
            {
                while (addCoins[i] > 1000)
                {
                    addCoins.Add(0);

                    addCoins[i + 1] += (addCoins[i]) / 1000;

                    addCoins[i] = (addCoins[i]) % 1000;
                }
            }
        }

        _wallet.Receipts(addCoins);

        //Wallet._receipts = (int)Player.allCharactersDP / 100 + 10;

        await System.Threading.Tasks.Task.Delay(100);

        Destroy(this.gameObject);
    }

    public void DisabledAnimator()
    {
        Debug.Log("Animator disabled");
        _animatorGold.enabled = false;
    }

    public void CheckTranslate()
    {
        //_IsTranslate = true;
    }

    private async void OnMouseEnter()
    {
        //AnimatingGoldPicked();

        //await System.Threading.Tasks.Task.Delay(1000);

        if (_IsTackedGold)
        {
            _IsTackedGold = false;
            _IsTranslate = true;
        }

        //DOTween.Sequence()
           //.Append(this.transform.DOMove(new Vector3(7.56f, 3.29f, 0), 0.2f).SetEase(Ease.Linear))
           //.AppendInterval(0.01f)
           //.AppendCallback(() => Destroy(this.gameObject));
        //_goldPicking.TackingGold();
    }
}
