using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AppodealStack.Monetization.Api;
using AppodealStack.Monetization.Common;
using UnityEngine.UIElements;
using Firebase.Analytics;

public class SpawnerHelicopter : MonoBehaviour
{
    [SerializeField] private UIDocument _uIDocument;

    private VisualElement _root, ADSIcon;
    private Button ShowButton, CloseButton;
    private Label BonusGems;

    [SerializeField] private Wallet _wallet;

    [SerializeField] private GameObject _objectHelicopter;
    private GameObject _objectSpawnHelicopter;

    [SerializeField] private Transform _spawnPoint, _finishPoint, _destroyPoint;

    private bool isSpawn = false;
    public static bool isLife = false, isWatchAds = false;

    private List<int> AddCoins = new List<int>();

    public static bool isStartSpawnHelicopter = false;
    private void Start()
    {
        string appKey = "e214a98f085b2e1f2d943649cba435e06eff845f957bef27";

        Appodeal.Initialize(appKey, AppodealAdType.RewardedVideo);

        _root = _uIDocument.rootVisualElement;

        ADSIcon = _root.Q<VisualElement>("StartIcon");
        ShowButton = _root.Q<Button>("ADSButton");
        CloseButton = _root.Q<Button>("CloseButton");
        BonusGems = _root.Q<Label>("BonusGems");

        ShowButton.clicked += () => ShowADS();
        CloseButton.clicked += () => CloseADSIcon();

        _root.style.display = DisplayStyle.None;

        AppodealCallbacks.RewardedVideo.OnFinished += OnRewardedVideoFinished;
        AppodealCallbacks.RewardedVideo.OnClosed += DestroyHelicopter;
    }

    private void Update()
    {
        if (LoadScreen.isStartSpawn == true && isStartSpawnHelicopter)
        {
            if (!isSpawn)
                StartCoroutine(Spawn());

            if (isWatchAds)
            {
                isWatchAds = false;
                _root.style.display = DisplayStyle.Flex;
            }
        }
    }

    private void ShowADS()
    {
        Appodeal.Show(AppodealShowStyle.RewardedVideo);

        FirebaseAnalytics.LogEvent("ADS_Helicopter_Show");
    }

    private void CloseADSIcon()
    {
        _root.style.display = DisplayStyle.None;
    }

    private IEnumerator Spawn()
    {
        isSpawn = true;

        if (isLife)
        {
            yield return null;
        }

        if (Appodeal.IsLoaded(AppodealAdType.RewardedVideo) && (!isLife) && !StartNextLevel.isBoss)
        {
            yield return new WaitForSeconds(20);

            _objectSpawnHelicopter = Instantiate(_objectHelicopter);

            AddCoins = new List<int>();

            _objectSpawnHelicopter.GetComponent<HelicopterController>()._finishMoveForHeli = _destroyPoint;
            _objectSpawnHelicopter.GetComponent<HelicopterController>()._continueMoveForHeli = _finishPoint;

            _objectHelicopter.transform.position = _spawnPoint.position;

            isLife = true;

            StartCoroutine(CoinsUpdate());
        }

        isSpawn = false;
    }

    public static void DestroyOutBack()
    {
        isLife = false;
    }
    private void OnRewardedVideoFinished(object sender, RewardedVideoFinishedEventArgs e)
    {
        _wallet.QueReceipts(AddCoins);

        FirebaseAnalytics.LogEvent("ADS_Helicopter_Viewed");
    }

    private void DestroyHelicopter(object sender, RewardedVideoClosedEventArgs e)
    {
        StartCoroutine(StartNewSpawn());

        CloseADSIcon();

        FirebaseAnalytics.LogEvent("ADS_Helicopter_Closed");
    }

    private IEnumerator CoinsUpdate()
    {
        List<int> cost = new List<int>();

        int newCost = (int)(Player.allCharactersDP * 120);


        yield return new WaitForSeconds(1f);
        yield return new WaitForFixedUpdate();

        AddCoinStatic(newCost);

    }

    private void AddCoinStatic(int coins)
    {
        List<int> coinsConvert = new List<int>();

        while (coins != 0)
        {
            coinsConvert.Add(coins % 1000);
            coins /= 1000;
        }

        Receipts(coinsConvert);
    }

    private IEnumerator StartNewSpawn()
    {
        yield return new WaitForSeconds(20);

        isLife = false;
    }

    public void Receipts(List<int> cost)
    {
        for (int k = 0; k < 8; k++)
        {
            while (AddCoins.Count < cost.Count)
            {
                AddCoins.Add(0);
            }

            for (int i = 0; i < cost.Count; i++)
            {
                if (AddCoins[i] + cost[i] >= 1_000)
                {
                    if (AddCoins.Count <= i + 1)
                    {
                        AddCoins.Add(0);
                    }

                    AddCoins[i + 1] += (AddCoins[i] + cost[i]) / 1000;

                    AddCoins[i] = (AddCoins[i] + cost[i]) % 1000;
                }
                else
                {
                    AddCoins[i] = (AddCoins[i] + cost[i]);
                }
            }

            for (int i = 0; i < AddCoins.Count; i++)
            {
                if (AddCoins[i] >= 1_000)
                {
                    if (AddCoins.Count <= i + 1)
                    {
                        AddCoins.Add(0);
                    }

                    AddCoins[i + 1] += (AddCoins[i]) / 1000;

                    AddCoins[i] = (AddCoins[i]) % 1000;
                }

                //_walletGems[i] = (_walletGems[i]);
            }

            cost = new List<int>();
        }

        BonusGems.text = GemsToText();
    }

    private string GemsToText()
    {
        string text = "";

        if (AddCoins.Count == 1)
        {
            {
                text = AddCoins[0].ToString();
            }
        }
        else if (AddCoins.Count == 2)
        {
            {
                string drob = "0";

                {
                    drob = AddCoins[0].ToString() + "";
                }

                if (drob.ToString().Length >= 3)
                {
                    text = AddCoins[1].ToString() + "," + drob + "k";
                }
                else if (drob.ToString().Length == 2)
                {
                    text = AddCoins[1].ToString() + ",0" + drob + "k";
                }
                else if (drob.ToString().Length == 1)
                {
                    text = AddCoins[1].ToString() + ",00" + drob + "k";
                }
                else if (drob.ToString().Length == 0)
                {
                    text = AddCoins[1].ToString() + ",000" + drob + "k";
                }
            }
        }
        else if (AddCoins.Count == 3)
        {
            {
                string drob = "0";

                {
                    drob = AddCoins[1].ToString() + "";
                }

                if (drob.ToString().Length >= 3)
                {
                    text = AddCoins[2].ToString() + "," + drob + "Ml";
                }
                else if (drob.ToString().Length == 2)
                {
                    text = AddCoins[2].ToString() + ",0" + drob + "Ml";
                }
                else if (drob.ToString().Length == 1)
                {
                    text = AddCoins[2].ToString() + ",00" + drob + "Ml";
                }
                else if (drob.ToString().Length == 0)
                {
                    text = AddCoins[2].ToString() + ",000" + drob + "Ml";
                }
            }
        }
        else if (AddCoins.Count == 4)
        {
            {
                string drob = "0";

                {
                    drob = AddCoins[2].ToString() + "";
                }

                if (drob.ToString().Length >= 3)
                {
                    text = AddCoins[3].ToString() + "," + drob + "Bl";
                }
                else if (drob.ToString().Length == 2)
                {
                    text = AddCoins[3].ToString() + ",0" + drob + "Bl";
                }
                else if (drob.ToString().Length == 1)
                {
                    text = AddCoins[3].ToString() + ",00" + drob + "Bl";
                }
                else if (drob.ToString().Length == 0)
                {
                    text = AddCoins[3].ToString() + ",000" + drob + "Bl";
                }
            }
        }
        else if (AddCoins.Count == 5)
        {
            {
                string drob = "0";

                {
                    drob = AddCoins[3].ToString() + "";
                }

                if (drob.ToString().Length >= 3)
                {
                    text = AddCoins[4].ToString() + "," + drob + "T";
                }
                else if (drob.ToString().Length == 2)
                {
                    text = AddCoins[4].ToString() + ",0" + drob + "T";
                }
                else if (drob.ToString().Length == 1)
                {
                    text = AddCoins[4].ToString() + ",00" + drob + "T";
                }
                else if (drob.ToString().Length == 0)
                {
                    text = AddCoins[4].ToString() + ",000" + drob + "T";
                }
            }
        }
        else if (AddCoins.Count >= 6)
        {
            //Debug.Log(_walletGems.Count);
            {
                string drob = "0";

                {
                    drob = AddCoins[AddCoins.Count - 2].ToString() + "";
                }

                if (drob.ToString().Length >= 3)
                {
                    text = AddCoins[AddCoins.Count - 1].ToString() + "," + drob + (char)('a' + AddCoins.Count - 6);
                }
                else if (drob.ToString().Length == 2)
                {
                    text = AddCoins[AddCoins.Count - 1].ToString() + ",0" + drob + (char)('a' + AddCoins.Count - 6);
                }
                else if (drob.ToString().Length == 1)
                {
                    text = AddCoins[AddCoins.Count - 1].ToString() + ",00" + drob + (char)('a' + AddCoins.Count - 6);
                }
                else if (drob.ToString().Length == 0)
                {
                    text = AddCoins[AddCoins.Count - 1].ToString() + ",000" + drob + (char)('a' + AddCoins.Count - 6);
                }
            }
        }

        if (text == "")
        {
            text = "0";
        }

        return "+" + text;

    }
}
