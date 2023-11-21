using AppodealStack.Monetization.Api;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UIElements;
using Firebase.Analytics;
using EndlessNumber;

public abstract class Player : MonoBehaviour
{
    [SerializeField] private ConstantConfig ConstantConfig;

    protected static ConstantConfig _constantConfig;
    public enum TypeBaff
    {
        Vertical,
        Horizontal,
        Back,
        Front,
        Sniper,
        non
    }

    public TypeBaff typeBaff;

    public List<TypeBaff> meBaff;

    private float _DPOut = 0;

    public bool isBaff = false;

    public bool isActiveBaff = false;
    public Vector3 modelPosition = Vector3.zero;
    public static bool isNoDamage = false;

    public static float allCharactersDP = 0;

    [SerializeField] protected SnapController _snapController;
    [SerializeField] protected Wallet _wallet;

    public GameObject MobPrefab;
    protected GameObject CharacterPrefab;

    public List<GameObject> PlayerPrefabs = new List<GameObject>();

    public List<int> _baseCost;
    public float Base_HeroDamage;
    //[SerializeField] protected float _baseHP;

    public float _costMultiplie;
    public float _DPMultiplie;

    public float Time_between_attacks;
    //[SerializeField] private float _HPNultiplie;

    public int _buttonNumber;

    [SerializeField] protected float _maxDiffDPForOpen;

    public float _DP;
    //public float _HP;

    public static List<float> _baffDP = new List<float>();

    public List<int> _cost;

    protected float DPMultiplier = 0;

    protected int level;

    private bool _isStartGame = false;
    private static bool IsLevelUp = false;

    [SerializeField] protected int _gems;

    protected VisualElement _root;

    protected VisualElement _characterContainer;
    protected Button _buttonSpawn, _buttonSpawnx10, _buttonSpawnx100;
    protected Label _labelGems;

    public static bool isCostUpdate = true;

    public static List<Player> SpawnListcharacters = new List<Player>();
    public static List<Player> PlayerCharacters = new List<Player>();

    private int saveCostMult = 0;

    [SerializeField] private SaveAndLoadGame _saveAndLoad;

    public bool isDeath = false, isLife = false, isSpawn = false;

    private static int saveButtonNamber = 0;

    private void Awake()
    {
        CharacterPrefab = MobPrefab;

        if(ConstantConfig != null)
        {
            _constantConfig = ConstantConfig;
        }
    }

    private bool isUp = false, isDown = true;

    private IEnumerator AutoAttackSpeed()
    {
        while (true)
        {
            if (isDown)
            {
                Time_between_attacks -= 1;
            }

            if (isUp)
            {
                Time_between_attacks += 1;
            }

            yield return new WaitForSeconds(1f);

            if (Time_between_attacks < 0)
            {
                Time_between_attacks = 0;

                isUp = true;
                isDown = false;
            }

            if (Time_between_attacks > 13)
            {
                Time_between_attacks = 15;

                isUp = false;
                isDown = true;
            }

            if (Time_between_attacks == 0)
            {
                isUp = true;
                isDown = false;
            }

            if (Time_between_attacks == 15)
            {
                isUp = false;
                isDown = true;
            }
        }
    }

    protected virtual void OnEnable()
    {
        //TimerAttack = 15;
        //StartCoroutine(AutoAttackSpeed());


        meBaff.Add(TypeBaff.non);

        //await System.Threading.Tasks.Task.Delay(1);

        _root = this.GetComponent<UIDocument>().rootVisualElement;

        _characterContainer = _root.Q<VisualElement>("Buttons").Q<VisualElement>("Character_" + (_buttonNumber + 1));
        //_characterContainer.style.display = DisplayStyle.None;

        _buttonSpawn = _characterContainer.Q<Button>("ButtonCharacter");

        _buttonSpawn.clicked += () => LevelUP(ListCharacters.CostMult - 1);

        _buttonSpawn.clicked += () => AudioButton();

        _buttonSpawnx10 = _characterContainer.Q<Button>("ButtonCharacterx10");

        //_buttonSpawnx10.clicked += () => LevelUP(10);

        _buttonSpawnx100 = _characterContainer.Q<Button>("ButtonCharacterx100");

        //_buttonSpawnx100.clicked += () => LevelUP(100);

        ListCharacters.AllertLevelUp.AddListener(AllertLevelUp);

        //Debug.Log("LevelUpYes!");
        // CharacterPrefab.GetComponent<AudioSource>().volume = 1;
        // CharacterPrefab.GetComponent<AudioManager>().Invoke(AudioEvent.NoWay);
        // CharacterPrefab.GetComponent<AudioSource>().volume = 0.3f;

        //_saveAndLoad = Wallet.StaticSaveAndLoad;

        level = 1;
        _cost = _baseCost;
        _DP = Base_HeroDamage;
        //_HP = _baseHP;

        AddCoinStatic((int)_DP);

        //_cost = Receipts(1);

        isCostUpdate = true;

        _buttonSpawn.text = EndlessText.ConvertPoins(_cost);

        StartCoroutine(DpTextUpdate());

        newDP = new List<int>();

        if (LoadScreen.isEnable == false)
        {
            StartCoroutine(LoadGame());
        }
    }

    private IEnumerator LoadGame()
    {
        yield return new WaitForSeconds(1f);

        SaveFileList saveFile = _saveAndLoad.LoadGame();

        if (saveFile != null)
        {
            if (saveFile.CharacterNumber.Count > 0)
            {
                for (int i = 0; i < saveFile.CharacterNumber.Count; i++)
                {
                    if (saveFile.CharacterNumber[i] == _buttonNumber)
                    {
                        SpawnListcharacters.Add(this);

                        if (_buttonNumber > saveButtonNamber)
                            saveButtonNamber = _buttonNumber;

                        for (int k = 0; k < _buttonNumber; k++)
                        {
                            yield return new WaitForSeconds(0.5f);
                        }

                        //Debug.Log("AAAAAAAAAAAAAAAAAAAA");
                        LevelUP(saveFile.CharacterLevelNumber[i]);

                        break;
                    }
                }
            }
        }
        else
        {
            LoadScreen.isStartSpawn = true;
            LoadScreen.isEnable = true;

            if (_buttonNumber == 0)
            {
                SpawnNullPlayer();
            }
        }

        //yield return new WaitForSeconds(1f);

        if (saveButtonNamber == _buttonNumber)
        {
            ShowStartLevelMenu.isLoad = true;
            LoadScreen.isEnable = true;
        }
    }

    private async void SpawnNullPlayer()
    {
        await System.Threading.Tasks.Task.Delay(100);

        LevelUP(ListCharacters.CostMult - 1);
    }

    private void FixedUpdate()
    {
        CostCheck();


        if (saveCostMult != ListCharacters.CostMult)
        {
            saveCostMult = ListCharacters.CostMult;
            Player.isCostUpdate = true;
        }
    }

    public void CostCheck()
    {
        _buttonSpawn.SetEnabled(false);

        //yield return new WaitForFixedUpdate();

        //_buttonSpawn.SetEnabled(false);
        //_buttonSpawnx10.SetEnabled(false);
        //_buttonSpawnx100.SetEnabled(false);

        //yield return new WaitForSeconds(1f);


        if (ListCharacters.CostMult == 1)
        {
            //for (int i = 0; i < 2; i++) 
            {
                if (_wallet.isPay(_cost, false))
                {
                    _buttonSpawn.SetEnabled(true);
                    //buttonSpawn.clickable
                }
                else
                {
                    _buttonSpawn.SetEnabled(false);
                }

                for (int i = 0; i < 2; i++)
                {
                    _buttonSpawn.text = EndlessText.ConvertPoins(_cost);
                }
            }
        }
        else
        {
            //for (int i = 0; i < 2; i++)
            {
                if (_wallet.isPay(Receipts(ListCharacters.CostMult - 1), false))
                {
                    _buttonSpawn.SetEnabled(true);
                    //buttonSpawn.clickable
                }
                else
                {
                    _buttonSpawn.SetEnabled(false);
                }
            }

            _buttonSpawn.text = EndlessText.ConvertPoins(Receipts(ListCharacters.CostMult - 1));
        }

        Player.isCostUpdate = false;
    }

    protected List<int> Receipts(int costMultiplier)
    {
        //costMultiplier = 1;

        int outLevel = 1;

        List<int> newCost = new List<int>(new int[_baseCost.Count]);

        int maxCount = newCost.Count;

        for (int i = 0; i < costMultiplier; i++)
        {
            for (int k = 0; k < _baseCost.Count; k++)
            {
                //Debug.Log(k + " " + _baseCost.Count + " " + newCost.Count);

                for (int g = 0; g < outLevel; g++)
                {
                    int maxLevel = 1;

                    if (g == (int)(outLevel / 2))
                    {
                        //maxLevel = 1;
                    }

                    if (_baseCost[k] * Mathf.Pow(_costMultiplie, level) >= 1000f)
                    {
                        if (k + 1 == newCost.Count)
                        {
                            newCost.Add(0);

                            //maxCount = newCost.Count;
                        }

                        if (g == 0)
                        {
                            newCost[k + 1] += (int)(_baseCost[k] * Mathf.Pow(_costMultiplie, level) / 1000f);
                            newCost[k] += (int)(_baseCost[k] * Mathf.Pow(_costMultiplie, level) % 1000f);
                        }
                    }

                    newCost[k] += (int)((_baseCost[k] * Mathf.Pow(_costMultiplie, level)) % 1000f);

                    if (newCost[k] > 1000)
                    {
                        if (k + 1 == newCost.Count)
                        {
                            newCost.Add(0);
                        }

                        newCost[k + 1] += newCost[k] / 1000;
                        newCost[k] = newCost[k] % 1000;
                    }
                }
            }

            outLevel++;
        }

        for (int i = newCost.Count - 1; i >= 0; i--)
        {
            if (newCost[i] == 0)
            {
                newCost.RemoveAt(i);
            }
            else
            {
                break;
            }
        }

        return newCost;
    }

    public void LifeBacklevel()
    {
        isNoUpdate = true;

        StartCoroutine(LifeBack());
    }

    private IEnumerator LifeBack()
    {
        yield return new WaitForSeconds(0.01f * _buttonNumber);

        LevelUP(0);
    }

    private bool isNoUpdate = false;

    public static bool isStopSpawn = false;

    protected virtual void LevelUP(int multiplier)
    {
        // CharacterPrefab.GetComponent<AudioSource>().volume = 1;
        // CharacterPrefab.GetComponent<AudioManager>().Invoke(AudioEvent.NoWay);
        // CharacterPrefab.GetComponent<AudioSource>().volume = 0.3f;

        if (PlayerCharacters.Count < 1)
        {
            isNoDamage = true;
        }
        else
        {
            isNoDamage = false;
        }

        if (isDeath && !isLife)
        {
            return;
        }

        if (multiplier <= 0)
        {
            multiplier = 1;
        }

        Player.isCostUpdate = true;

        if (IsLevelUp == false)
        {
            IsLevelUp = true;
        }
        else
        {
            return;
        }

        int costLevelxmultiplier = 0;
        for (int i = 0; i < multiplier; i++)
        {
            if (level > 99)
            {
                break;
            }

            if (level <= 1 && !isNoUpdate)
            {
                ListCharacters.CharacterNumber.Add(_buttonNumber);
                ListCharacters.CharacterLevelNumber.Add(1);
            }

            if ((level >= 1 || isLife) && !isStopSpawn && _snapController.isSpawn())
            {
                isLife = false;
                isDeath = false;

                if (LoadScreen.isStartSpawn)
                {
                    FirebaseAnalytics.LogEvent("Spawn_Character_" + (_buttonNumber + 1));
                    //Appodeal.LogEvent("Spawn_Character_" + (_buttonNumber + 1));
                }

                MobPrefab.GetComponent<MobsCollision>().hud = this.GetComponent<UIDocument>();

                CharacterPrefab = Instantiate(MobPrefab);
                CharacterPrefab.GetComponent<AudioManager>().Invoke(AudioEvent.NoWay);

                CharacterPrefab.GetComponent<MobsCollision>().thisPlayer = this;

                if (!isNoUpdate && level == 1)
                {
                    Player.PlayerCharacters.Add(this);
                }

                CharacterPrefab.GetComponent<DraggablePlayers>().ButtonNumber = _buttonNumber;

                //ListCharacters.staticSnapController.AddPlayersInMobsCollision(CharacterPrefab.GetComponent<DraggablePlayers>());
                //CharacterPrefab.GetComponent<MobsCollision>().draggablePlayers = CharacterPrefab.GetComponent<DraggablePlayers>();

                if (LoadScreen.isEnable == false && !isNoUpdate)
                {
                    List<int> spawnPoint = _saveAndLoad.LoadGame().CharacterNumberPointPosition;

                    if (spawnPoint != null && ListCharacters._saveFile.CharacterNumberPointPosition.Count != 0)
                    {
                        //Debug.Log(ListCharacters._saveFile.CharacterNumberPointPosition.Count + " " + _buttonNumber);
                        int numberPoint = ListCharacters._saveFile.CharacterNumberPointPosition[_buttonNumber];
                        CharacterPrefab.transform.position =
                            ListCharacters.staticSnapController._snapPoints[numberPoint].position;
                    }
                    else
                    {
                        CharacterPrefab.transform.position =
                            ListCharacters.staticSnapController._snapPoints[_buttonNumber].position;
                    }
                }

                //MobPrefab.transform.position = this.GetComponent<ListCharacters>().snapController._snapPoints[_buttonNumber].position;

                SpawnEnemy2.isStartSpawn = true;

                //CharacterPrefab.GetComponent<MobsCollision>().HP = _baseHP;
                CharacterPrefab.GetComponent<MobsCollision>().numberButton = _buttonNumber;
                //float posY = 0;
                //float posX = 0;

                //MobPrefab.transform.position = this.GetComponent<ListCharacters>().snapController._snapPoints[_buttonNumber].position;

                /*
                switch (_buttonNumber)
                {
                    case 0:
                        posY = -2.2f / 2;
                        posX = this.transform.position.x + 3f;
                        break;
                    case 1:
                        posY = -3.2f;
                        posX = this.transform.position.x + 1f;
                        break;
                    case 2:
                        posY = -2.2f / 2;
                        posX = this.transform.position.x + 1f;
                        break;
                    case 3:
                        posY = 1f;
                        posX = this.transform.position.x + 1f;
                        break;
                    case 4:
                        posY = -3.2f;
                        posX = this.transform.position.x + -1f;
                        break;
                    case 5:
                        posY = -2.2f / 2;
                        posX = this.transform.position.x + -1f;
                        break;
                    case 6:
                        posY = 1f;
                        posX = this.transform.position.x + -1f;
                        break;
                    case 7:
                        posY = -3.2f;
                        posX = this.transform.position.x + -3f;
                        break;
                    case 8:
                        posY = -2.2f / 2;
                        posX = this.transform.position.x + -3f;
                        break;
                    case 9:
                        posY = 1f;
                        posX = this.transform.position.x + -3f;
                        break;

                }
                */
                /*
                if ((float)_buttonNumber / 2 == (int)_buttonNumber / 2)
                {
                    posY = _buttonNumber / 2 * 2f;
                }
                else
                {
                    posY = -((_buttonNumber + 1) / 2 * 2f);
                }
                */

                //MobPrefab.transform.position = new Vector3(posX, posY, 0);

                CharacterPrefab.GetComponent<SpriteRenderer>().sortingOrder = 12 - _buttonNumber;

                //Player.PlayerCharacters.Add(this);

                if (level == 1)
                {
                    ListCharacters.CharactersObject.Add(CharacterPrefab);
                }

                PlayerPrefabs.Add(CharacterPrefab);
            }

            float oldDP = _DP;

            if ((ListCharacters.CharactersObject.Count - 1) < _buttonNumber)
            {
                isNoUpdate = true;
            }

            if (!isNoUpdate)
            {
                _wallet.isPay(_cost, true);

                _cost = Receipts(1);
            }

            if (level > 1 && !isNoUpdate)
            {
                allCharactersDP -= _DP;
            }

            if (!isNoUpdate)
            {
                if (level > 49)
                {
                    if (level == 50)
                    {
                        _DP *= 2;
                    }

                    _DP += (_DPMultiplie * 4);
                }
                else if (level > 19)
                {
                    if (level == 20)
                    {
                        _DP *= 2;
                    }

                    _DP += (_DPMultiplie * 2);
                }
                else if (level > 1)
                {
                    _DP += _DPMultiplie;
                }
            }

            if (!isNoUpdate)
                allCharactersDP += _DP;


            UpdateAllDP(false);
            UpdateAllDP(true);

            //_DP = _baseDP * Mathf.Pow(_DPMultiplie, level) + DPMultiplier;
            //_HP = _baseHP * Mathf.Pow(_HPNultiplie, level);

            //Debug.Log(_DP - oldDP + " Level:" + level);

            if (!isNoUpdate)
                ListCharacters.AllertLevelUp.Invoke(_buttonNumber, oldDP, _DP);

            if (!isNoUpdate)
            {
                ListCharacters.CharacterLevelNumber[_buttonNumber] = level;
            }
            else
            {
                ListCharacters.CharacterLevelNumber[_buttonNumber] = level - 1;
            }


            if (!isNoUpdate)
            {
                ++level;

                AddCoinStatic((int)_DP);
            }
            else
            {
                isNoUpdate = false;
            }

            //costLevelxmultiplier += (int)(_baseCost * Mathf.Pow(_costMultiplie, level));
        }

        //Debug.Log(level);

        _buttonSpawn.text = EndlessText.ConvertPoins(_cost);

        StartCoroutine(DpTextUpdate());

        isCostUpdate = true;

        //CharacterPrefab.GetComponent<AudioSource>().volume = 1;
        //CharacterPrefab.GetComponent<AudioManager>().Invoke(AudioEvent.NoWay);
        // CharacterPrefab.GetComponent<AudioSource>().volume = 0.2f;

        //await System.Threading.Tasks.Task.Delay(150);
        IsLevelUp = false;
    }

    public void MinusAllDP()
    {
        _DPOut = 0;

        Player thisPlayer = this;

        foreach (Player player in Player.PlayerCharacters)
        {
            if (player == thisPlayer || player.isDeath)
            {
                continue;
            }

            if (player.isActiveBaff)
            {
                for (int i = 0; i < player.meBaff.Count; i++)
                {
                    _DPOut += _baffDP[(int)player.meBaff[i]];
                }

                _DPOut += player._DP;
            }
            else
            {
                _DPOut += player._DP;
            }
        }

        AddAllDPS((int)(_DPOut));

        _root.Q<Label>("Text_DPS").text = EndlessText.DPToText(newAllDP);
        newAllDP = new List<int>();
    }

    public void UpdateAllDP(bool isTimer)
    {
        _DPOut = 0;

        foreach (Player player in Player.PlayerCharacters)
        {
            if (player.isActiveBaff)
            {
                for (int i = 0; i < player.meBaff.Count; i++)
                {
                    _DPOut += _baffDP[(int)player.meBaff[i]];
                }

                if (!isTimer)
                    _DPOut += player._DP;
                else
                    _DPOut += player._DP / player.Time_between_attacks;
            }
            else
            {
                if (!isTimer)
                    _DPOut += player._DP;
                else
                    _DPOut += player._DP / player.Time_between_attacks;
            }
        }

        AddAllDPS((int)(_DPOut));

        if (!isTimer)
        {
            this.GetComponent<UIDocument>().rootVisualElement.Q<VisualElement>("DPS_Contain").Q<VisualElement>()
                .Q<Label>("Text_DPS").text = EndlessText.DPToText(newAllDP);
        }
        else
        {
            //this.GetComponent<UIDocument>().rootVisualElement.Q<VisualElement>("DPS_Contain_Time").Q<VisualElement>().Q<Label>("Text_DP").text = EndlessText.DPToText(newAllDP);
        }

        newAllDP = new List<int>();
    }

    protected string textDP = "";

    private IEnumerator DpTextUpdate()
    {
        _characterContainer.Q<Label>("TextDP").text = textDP;

        yield return new WaitForSeconds(0.1f);
    }

    protected void AudioButton()
    {
        if (CharacterPrefab)
            CharacterPrefab.GetComponent<AudioManager>().Invoke(AudioEvent.NoWay);
    }

    protected virtual void AllertLevelUp(int number, float oldDP, float newDP)
    {
        //_DP = _DP +_DPMultiplie + DPMultiplier;
        if (_buttonNumber == (number + 1))
        {
            //if (_maxDiffDPForOpen <= (newDP - oldDP))
            {
                ListCharacters._characters[_buttonNumber].style.display = DisplayStyle.Flex;
                CostCheck();
                //_root.Q<ScrollView>("ScrollPlayerCharacters").horizontalScroller.visible = true;
            }
        }
    }

    public void SwitchDPtoTimeAttack()
    {
        UpdateAllDP(true);
    }

    public void SwitchTimeAttacktoDP()
    {
        UpdateAllDP(false);
    }


    protected List<int> newDP = new List<int>();

    protected void AddCoinStatic(int coins)
    {
        List<int> coinsConvert = new List<int>();

        while (coins != 0)
        {
            coinsConvert.Add(coins % 1000);
            coins /= 1000;
        }

        DPReceipts(coinsConvert);
    }

    protected void AddAllDPS(int coins)
    {
        List<int> coinsConvert = new List<int>();

        while (coins != 0)
        {
            coinsConvert.Add(coins % 1000);
            coins /= 1000;
        }

        AllDPReceipts(coinsConvert);
    }

    protected List<int> newAllDP = new List<int>();

    protected virtual void AllDPReceipts(List<int> cost)
    {
        string costText = "";
        string addcoins = "";

        for (int i = 0; i < cost.Count; i++)
        {
            costText += cost[cost.Count - 1 - i];
        }

        for (int g = 0; g < newAllDP.Count; g++)
        {
            addcoins += newAllDP[newAllDP.Count - 1 - g];
        }

        for (int k = 0; k < 2; k++)
        {
            while (newAllDP.Count < cost.Count)
            {
                newAllDP.Add(0);
            }

            for (int i = 0; i < cost.Count; i++)
            {
                if (newAllDP[i] + cost[i] >= 1_000)
                {
                    if (newAllDP.Count <= i + 1)
                    {
                        newAllDP.Add(0);
                    }

                    newAllDP[i + 1] += (newAllDP[i] + cost[i]) / 1000;

                    newAllDP[i] = (newAllDP[i] + cost[i]) % 1000;
                }
                else
                {
                    newAllDP[i] = (newAllDP[i] + cost[i]);
                }
            }

            for (int i = 0; i < newAllDP.Count; i++)
            {
                if (newAllDP[i] >= 1_000)
                {
                    if (newAllDP.Count <= i + 1)
                    {
                        newAllDP.Add(0);
                    }

                    newAllDP[i + 1] += (newAllDP[i]) / 1000;

                    newAllDP[i] = (newAllDP[i]) % 1000;
                }
            }

            cost = new List<int>();
        }
    }

    protected virtual void DPReceipts(List<int> cost)
    {
        string costText = "";
        string addcoins = "";

        for (int i = 0; i < cost.Count; i++)
        {
            costText += cost[cost.Count - 1 - i];
        }

        for (int g = 0; g < newDP.Count; g++)
        {
            addcoins += newDP[newDP.Count - 1 - g];
        }

        for (int k = 0; k < 2; k++)
        {
            while (newDP.Count < cost.Count)
            {
                newDP.Add(0);
            }

            for (int i = 0; i < cost.Count; i++)
            {
                if (newDP[i] + cost[i] >= 1_000)
                {
                    if (newDP.Count <= i + 1)
                    {
                        newDP.Add(0);
                    }

                    newDP[i + 1] += (newDP[i] + cost[i]) / 1000;

                    newDP[i] = (newDP[i] + cost[i]) % 1000;
                }
                else
                {
                    newDP[i] = (newDP[i] + cost[i]);
                }
            }

            for (int i = 0; i < newDP.Count; i++)
            {
                if (newDP[i] >= 1_000)
                {
                    if (newDP.Count <= i + 1)
                    {
                        newDP.Add(0);
                    }

                    newDP[i + 1] += (newDP[i]) / 1000;

                    newDP[i] = (newDP[i]) % 1000;
                }
            }

            cost = new List<int>();
        }

        textDP = EndlessText.DPToText(newDP);

        newDP = new List<int>();
    }

    protected virtual float Damage()
    {
        return _DP;
    }

    [SerializeField] private GameObject DebaffEffectObject;

    private List<GameObject> EffectObject = new List<GameObject>();

    public void DebaffEffect(bool isActive)
    {
        if (EffectObject.Count == 0 && !isActive || EffectObject.Count != 0 && isActive)
        {
            return;
        }

        if (isActive)
        {
            for (int i = 0; i < PlayerPrefabs.Count; i++)
            {
                GameObject gameObject = Instantiate(DebaffEffectObject, PlayerPrefabs[i].transform);
                EffectObject.Add(gameObject);

                gameObject.GetComponent<ParticleSystem>().Play();
            }
        }
        else
        {
            for (int i = 0; i < EffectObject.Count; i++)
            {
                Destroy(EffectObject[i]);
            }

            EffectObject = new List<GameObject>();
        }
    }
}