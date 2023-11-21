using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class Wallet : MonoBehaviour
{
    [SerializeField] private UIDocument _uIDocument;

    [SerializeField] private List<int> _startGems;

    private Label textGems;

    public static int _pay = 0;
    public static int _receipts = 0;

    [SerializeField]private List<int> _walletGems = new List<int>();

    [SerializeField] private SaveAndLoadGame _saveAndLoad;

    public static SaveAndLoadGame StaticSaveAndLoad;

    private void Start()
    {
        StaticSaveAndLoad = _saveAndLoad;
    }
    public static int Gems
    {
        get => 0;
        set
        {
            if(value < 0)
            {

            }
            else if(value >= 0)
            {

            }
        }
    }

    private void Awake()
    {
        textGems = _uIDocument.rootVisualElement.Q<Label>("Text_Gems");

        _walletGems = new List<int>(new int[_startGems.Count]);

        if (_saveAndLoad.LoadGame() != null)
        {
            Receipts(_saveAndLoad.LoadGame().Coins);
            //_walletGems = _saveAndLoad.LoadGame().Coins;
            //textGems.text = GemsToText();
        }
        else
        {
            Receipts(_startGems);
        }
    }

    private void OnEnable()
    {
        //Receipts(_startGems);
    }

    private void FixedUpdate()
    {
        if(_receipts != 0)
        {
            AddCoinStatic(_receipts);
            _receipts = 0;
        }
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

    public bool isPay(List<int> cost, bool isWriteOff)
    {
        if (LoadScreen.isLoad)
            isWriteOff = false;

        for (int i = 0; i < cost.Count; i++)
        {
            if (cost[i] == 0)
            {
                cost.RemoveAt(i);
            }
            else
            {
                break;
            }
        }

        for (int i = 0; i <_walletGems.Count; i++)
        {
            if (_walletGems[_walletGems.Count - i - 1] == 0)
            {
                _walletGems.RemoveAt(i);
            }
            else
            {
                break;
            }
        }

        if (cost.Count > _walletGems.Count)
        {
            return false;
        }
        else if (_walletGems.Count > cost.Count)
        {
            if(isWriteOff)
                Pay(cost);

            return true;
        }
        else
        {
            //Debug.Log(cost[0] + " " + _walletGems[0]);

            for (int i = cost.Count - 1; i >= 0; i--)
            {
                //Debug.Log(i + " " + cost.Count);
                if(_walletGems[i] > cost[i])
                {
                    if (isWriteOff)
                        Pay(cost);
                    return true;
                }
                else if(_walletGems[i] == cost[i])
                {

                }
                else if (_walletGems[i] < cost[i])
                {
                    return false;
                }
            }

            if (isWriteOff)
                Pay(cost);

            return true;
        }

        return false;
    }

    private void Pay(List<int> cost)
    {
        for (int i = (cost.Count - 1); i >= 0; i--)
        {
            if (_walletGems[i] >= cost[i])
            {
                _walletGems[i] -= cost[i];
            }
            else
            {
                _walletGems[i + 1] -= 1;

                if(_walletGems[i + 1] < 0)
                {
                    _walletGems[i + 1] += 999;
                    _walletGems[i + 2] -= 1;
                }

                _walletGems[i] -= cost[i];
                _walletGems[i] = -_walletGems[i];
            }
        }

        for (int i = 0; i < _walletGems.Count; i++)
        {
            if (_walletGems[_walletGems.Count - 1 - i] == 0)
            {
                _walletGems.RemoveAt(i);
            }
            else
            {
                break;
            }
        }

        Receipts(new List<int>(1));

        //textGems.text = GemsToText();
    }


    List<int> queWallet = new List<int>();
    public void QueReceipts(List<int> cost)
    {
        while (queWallet.Count < cost.Count)
        {
            queWallet.Add(0);
        }
        for (int i = 0; i < cost.Count; i++)
        {
            if (queWallet[i] + cost[i] >= 1_000)
            {
                if (queWallet.Count <= i + 1)
                {
                    queWallet.Add(0);
                }

                queWallet[i + 1] += (queWallet[i] + cost[i]) / 1000;

                queWallet[i] = (queWallet[i] + cost[i]) % 1000;
            }

            queWallet[i] = (queWallet[i] + cost[i]);
        }

        for (int i = 0; i < queWallet.Count; i++)
        {
            if (queWallet[i] >= 1_000)
            {
                if (queWallet.Count <= i + 1)
                {
                    queWallet.Add(0);
                }

                queWallet[i + 1] += (queWallet[i]) / 1000;

                queWallet[i] = (queWallet[i]) % 1000;
            }

            //_walletGems[i] = (_walletGems[i]);
        }

        Player.isCostUpdate = true;

        if (isWaitToText == false)
            StartCoroutine(WaitToText());
    }

    public void Receipts(List<int> cost)
    {
        while (_walletGems.Count < cost.Count)
        {
            _walletGems.Add(0);
        }

        for (int i = 0; i < cost.Count; i++)
        {
            if (_walletGems[i] + cost[i] >= 1_000)
            {
                if(_walletGems.Count <= i + 1)
                {
                    _walletGems.Add(0);
                }

                _walletGems[i + 1] += (_walletGems[i] + cost[i]) / 1000;

                _walletGems[i] = (_walletGems[i] + cost[i]) % 1000;
            }

            _walletGems[i] = (_walletGems[i] + cost[i]);
        }

        for (int i = 0; i < _walletGems.Count; i++)
        {
            if (_walletGems[i] >= 1_000)
            {
                if (_walletGems.Count <= i + 1)
                {
                    _walletGems.Add(0);
                }

                _walletGems[i + 1] += (_walletGems[i]) / 1000;

                _walletGems[i] = (_walletGems[i]) % 1000;
            }

            //_walletGems[i] = (_walletGems[i]);
        }

        Player.isCostUpdate = true;

        if(isWaitToText == false)
            StartCoroutine(WaitToText());
    }

    private bool isWaitToText = false;
    private IEnumerator WaitToText()
    {
        isWaitToText = true;

        if (queWallet.Count > 0)
        {
            for (int i = 0; i < queWallet.Count; i++)
            {
                Debug.Log(queWallet[i]);
            }

            yield return new WaitForSeconds(0.1f);
            yield return new WaitForFixedUpdate();

            Receipts(queWallet);
        }

        textGems.text = GemsToText();

        queWallet = new List<int>();

        isWaitToText = false;
    }

    private string GemsToText()
    {
        string text = "";

        if (_walletGems.Count == 1)
        {
            {
                text = _walletGems[0].ToString();
            }
        }
        else if (_walletGems.Count == 2)
        {
            {
                string drob = "0";

                {
                    drob = _walletGems[0].ToString() + "";
                }

                if (drob.ToString().Length >= 3)
                {
                    text = _walletGems[1].ToString() + "," + drob + "k";
                }
                else if (drob.ToString().Length == 2)
                {
                    text = _walletGems[1].ToString() + ",0" + drob + "k";
                }
                else if (drob.ToString().Length == 1)
                {
                    text = _walletGems[1].ToString() + ",00" + drob + "k";
                }
                else if (drob.ToString().Length == 0)
                {
                    text = _walletGems[1].ToString() + ",000" + drob + "k";
                }
            }
        }
        else if (_walletGems.Count == 3)
        {
            {
                string drob = "0";

                {
                    drob = _walletGems[1].ToString() + "";
                }

                if (drob.ToString().Length >= 3)
                {
                    text = _walletGems[2].ToString() + "," + drob + "Ml";
                }
                else if (drob.ToString().Length == 2)
                {
                    text = _walletGems[2].ToString() + ",0" + drob + "Ml";
                }
                else if (drob.ToString().Length == 1)
                {
                    text = _walletGems[2].ToString() + ",00" + drob + "Ml";
                }
                else if (drob.ToString().Length == 0)
                {
                    text = _walletGems[2].ToString() + ",000" + drob + "Ml";
                }
            }
        }
        else if (_walletGems.Count == 4)
        {
            {
                string drob = "0";

                {
                    drob = _walletGems[2].ToString() + "";
                }

                if (drob.ToString().Length >= 3)
                {
                    text = _walletGems[3].ToString() + "," + drob + "Bl";
                }
                else if (drob.ToString().Length == 2)
                {
                    text = _walletGems[3].ToString() + ",0" + drob + "Bl";
                }
                else if (drob.ToString().Length == 1)
                {
                    text = _walletGems[3].ToString() + ",00" + drob + "Bl";
                }
                else if (drob.ToString().Length == 0)
                {
                    text = _walletGems[3].ToString() + ",000" + drob + "Bl";
                }
            }
        }
        else if (_walletGems.Count == 5)
        {
            {
                string drob = "0";

                {
                    drob = _walletGems[3].ToString() + "";
                }

                if (drob.ToString().Length >= 3)
                {
                    text = _walletGems[4].ToString() + "," + drob + "T";
                }
                else if (drob.ToString().Length == 2)
                {
                    text = _walletGems[4].ToString() + ",0" + drob + "T";
                }
                else if (drob.ToString().Length == 1)
                {
                    text = _walletGems[4].ToString() + ",00" + drob + "T";
                }
                else if (drob.ToString().Length == 0)
                {
                    text = _walletGems[4].ToString() + ",000" + drob + "T";
                }
            }
        }
        else if (_walletGems.Count >= 6)
        {
            //Debug.Log(_walletGems.Count);
            {
                string drob = "0";

                {
                    drob = _walletGems[_walletGems.Count - 2].ToString() + "";
                }

                if (drob.ToString().Length >= 3)
                {
                    text = _walletGems[_walletGems.Count - 1].ToString() + "," + drob + (char)('a' + _walletGems.Count - 6);
                }
                else if (drob.ToString().Length == 2)
                {
                    text = _walletGems[_walletGems.Count - 1].ToString() + ",0" + drob + (char)('a' + _walletGems.Count - 6);
                }
                else if (drob.ToString().Length == 1)
                {
                    text = _walletGems[_walletGems.Count - 1].ToString() + ",00" + drob + (char)('a' + _walletGems.Count - 6);
                }
                else if (drob.ToString().Length == 0)
                {
                    text = _walletGems[_walletGems.Count - 1].ToString() + ",000" + drob + (char)('a' + _walletGems.Count - 6);
                }
            }
        }

        if(text == "")
        {
            text = "0";
        }

        return text;

    }

    public List<int> GetCoins()
    {
        return _walletGems;
    }

    public void LoadCoins(List<int> oldGems)
    {
        _walletGems = oldGems;
    }
}
