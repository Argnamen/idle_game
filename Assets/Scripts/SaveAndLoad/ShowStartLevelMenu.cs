using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using System;
using AppodealStack.Monetization.Api;
using AppodealStack.Monetization.Common;
using Firebase.Analytics;

public class ShowStartLevelMenu : MonoBehaviour
{
    [SerializeField] private UIDocument _uIDocument;
    [SerializeField] private SaveAndLoadGame _saveEndLoad;
    [SerializeField] private Wallet _wallet;

    private Label textGems;

    private SaveFileList _saveFile;

    private DateTime dateTimeNow, dateTimeLoad;

    public static bool isLoad = false;

    private List<int> AddCoins = new List<int>();

    private void Start()
    {
        //Appodeal.SetTesting(true);

        string appKey = "e214a98f085b2e1f2d943649cba435e06eff845f957bef27";

        Appodeal.Initialize(appKey, AppodealAdType.RewardedVideo);
    }

    private void OnEnable()
    {
        _saveFile = _saveEndLoad.LoadGame();

        if (_saveFile == null)
        {
            _uIDocument.enabled = false;
        }
        else
        {
            dateTimeLoad = _saveFile.oldTime;
            dateTimeNow = System.DateTime.Now;

            textGems = _uIDocument.rootVisualElement.Q<Label>("BonusGems");

            _uIDocument.rootVisualElement.Q<Button>("DoubleButton").clicked += () => WalletUpdate(2);
            _uIDocument.rootVisualElement.Q<Button>("CloseButton").clicked += () => WalletUpdate(1);

            _uIDocument.rootVisualElement.style.display = DisplayStyle.None;

            StartCoroutine(DoubleCoinsFromAds());

        }
    }

    bool ads = true;

    private IEnumerator DoubleCoinsFromAds()
    {
        bool available = Appodeal.IsLoaded(AppodealAdType.RewardedVideo);

        StartCoroutine(Coins());

        _uIDocument.rootVisualElement.Q<Button>("DoubleButton").style.display = DisplayStyle.Flex;

        while (!Appodeal.IsLoaded(AppodealAdType.RewardedVideo))
        {
            _uIDocument.rootVisualElement.Q<Button>("DoubleButton").SetEnabled(false);
            yield return new WaitForSeconds(0.5f);
        }
        if(Appodeal.IsLoaded(AppodealAdType.RewardedVideo))
        {
            _uIDocument.rootVisualElement.Q<Button>("DoubleButton").SetEnabled(true);

            AppodealCallbacks.RewardedVideo.OnClosed += StartLevel;

            AppodealCallbacks.RewardedVideo.OnFinished += OnRewardedVideoFinished;
        }
    }
    private IEnumerator TestAds()
    {
        if (Appodeal.IsLoaded(AppodealAdType.RewardedVideo))
        {
            Appodeal.Show(AppodealShowStyle.RewardedVideo);
        }

        yield return new WaitForSeconds(20);
        ads = true;
    }
    private void Update()
    {
        if (ads)
        {
            ads = false;
            //StartCoroutine(TestAds());
        }
    }

    private void StartLevel(object sender, RewardedVideoClosedEventArgs e)
    {
        WalletUpdate(1);

        LoadScreen.isStartSpawn = true;

        FirebaseAnalytics.LogEvent("ADS_StartLevel_Closed");
    }

    private IEnumerator DoubleCoins()
    {
        yield return new WaitForEndOfFrame();

        WalletUpdate(1);

        //_wallet.QueReceipts(AddCoins);
    }
    private void OnRewardedVideoFinished(object sender, RewardedVideoFinishedEventArgs e)
    {
        StartCoroutine(DoubleCoins());

        FirebaseAnalytics.LogEvent("ADS_StartLevel_Viewed");
    }

    private void WalletUpdate(int mult)
    {
        if(mult >= 2)
        {
            Appodeal.Show(AppodealShowStyle.RewardedVideo);
            FirebaseAnalytics.LogEvent("ADS_StartLevel_Show");
        }
        else
        {
            _wallet.QueReceipts(AddCoins);

            LoadScreen.isStartSpawn = true;
        }

        _uIDocument.enabled = false;
    }

    int minute;
    private IEnumerator Coins()
    {
        while (isLoad == false)
        {
            yield return null;
        }

        int timeNow = 0;
        int timeLoad = 0;

        if(dateTimeNow.Month - dateTimeLoad.Month != 0)
        {
            timeNow = dateTimeNow.Month * 30 * 24 * 60;
            timeLoad = dateTimeLoad.Month * 30 * 24 * 60;
        }
        else if(dateTimeNow.Day - dateTimeLoad.Day != 0)
        {
            timeNow = dateTimeNow.Day * 24 * 60;
            timeLoad = dateTimeLoad.Day * 24 * 60;
        }
        else if(dateTimeNow.Hour - dateTimeLoad.Hour != 0)
        {
            timeNow = dateTimeNow.Hour * 60;
            timeLoad = dateTimeLoad.Hour * 60;
        }
        else
        {
            timeNow = dateTimeNow.Minute;
            timeLoad = dateTimeLoad.Minute;
        }

        minute = timeNow - timeLoad;

        yield return new WaitForSeconds(0.5f);

        if (minute <= 0)
        {
            _uIDocument.enabled = false;
            LoadScreen.isStartSpawn = true;
        }
        else
        {
            _uIDocument.rootVisualElement.style.display = DisplayStyle.Flex;
        }

        StartCoroutine(CoinsMult());
    }

    private IEnumerator CoinsMult()
    {
        for (int i = 0; i < minute * 5; i++)
        {
            AddCoinStatic((int)(Player.allCharactersDP));
        }

        yield return new WaitForSeconds(0.1f);
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

    public void Receipts(List<int> cost)
    {
        string costText = "";
        string addcoins = "";

        for(int i = 0; i < cost.Count; i++)
        {
            costText += cost[cost.Count - 1 - i];
        }
        for(int g = 0; g < AddCoins.Count; g++)
        {
            addcoins += AddCoins[AddCoins.Count - 1 - g];
        }

        for (int k = 0; k < 2; k++)
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
            }

            cost = new List<int>();
        }



        textGems.text = GemsToText();
    }

    private bool isText = false;

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
