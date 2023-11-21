using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEngine.Events;
using UnityEngine.EventSystems;

public class ListCharacters : MonoBehaviour
{
    public SnapController snapController;
    public static SnapController staticSnapController;

    public static List<GameObject> CharactersObject = new List<GameObject>();
    public static List<GameObject> SwipeCharactersObject = new List<GameObject>();
    public static List<VisualElement> _characters;

    public static List<Player> SwipePlayerCharacters = new List<Player>();

    public static List<int> CharacterNumber = new List<int>();
    public static List<int> CharacterLevelNumber = new List<int>();
    public static List<int> CharacterNumberPointPosition = new List<int>(12);

    public static UnityEvent<int, float, float> AllertLevelUp = new UnityEvent<int, float, float>();

    private VisualElement _root;

    private Length y = 0;

    public static int CostMult = 1;
    private int clickNumber = 1;


    private bool _isEndAnimation = true;

    [SerializeField] private SaveAndLoadGame _saveAndLoad;
    [SerializeField] private Wallet _wallet;

    public static SaveFileList _saveFile = new SaveFileList();
    private void Awake()
    {
        staticSnapController = snapController;
        CostMult = 1;

        if (_saveAndLoad.LoadGame() != null)
        {
            _saveFile = _saveAndLoad.LoadGame();
        }

        _root = this.GetComponent<UIDocument>().rootVisualElement;
        _root = _root.Q<VisualElement>("Buttons");
        _characters = (List<VisualElement>)_root.Children();
    }

    private void Save()
    {
        _saveFile.oldTime = System.DateTime.Now;

        _saveFile.CharacterNumber = CharacterNumber;
        _saveFile.CharacterLevelNumber = CharacterLevelNumber;
        _saveFile.CharacterNumberPointPosition = CharacterNumberPointPosition;

        _saveFile.Coins = _wallet.GetCoins();

        _saveFile.ChapterNumber = UiTextLevel._staticChapter;

        _saveFile.LevelNumber = UiTextLevel._staticLevelNumber;

        _saveAndLoad.SaveGame(_saveFile);
    }

    private bool isFocus = false, isPause = false;
    private void OnApplicationFocus(bool focus)
    {
        if(focus == false && isPause == false)
        {
            isFocus = true;

            Save();
        }
        else if(focus == true)
        {
            isFocus = false;
        }
    }

    private void OnApplicationPause(bool pause)
    {
        if (pause && isFocus == false)
        {
            isPause = true;

            Save();
        }
        else if(pause == false)
        {
            isPause = false;
        }
    }

    private void OnApplicationQuit()
    {
        Save();
    }

    private void Start()
    {
        for (int i = 1; i < _characters.Count; i++)
        {
            //Debug.Log(this.GetComponent<UIDocument>().rootVisualElement.Q<ScrollView>("ScrollPlayerCharacters")[0].childCount);
            //this.GetComponent<UIDocument>().rootVisualElement.Q<ScrollView>("ScrollPlayerCharacters")[0].Remove(_characters[i]);
            _characters[i].style.display = DisplayStyle.None;
        }

        _root = this.GetComponent<UIDocument>().rootVisualElement.Q<VisualElement>("CharactersContainer");
        _root.Q<Button>("Button_EnablrCharacters").clicked += delegate { EnableCharacterContainer(); };

        StartCoroutine(CharacterContainerAnimation());
    }

    private void FixedUpdate()
    {
        if (Player.isCostUpdate)
        {
            for (int i = 0; i < Player.PlayerCharacters.Count; i++)
            {
                Player.PlayerCharacters[i].CostCheck();
            }

            //isUpdateCost = false;

            //string _gemsString = ConvertPoins((int)PlayerPrefs.GetInt("Gems"));

            //_labelGems.text = _gemsString;
        }
    }

    private void EnableCharacterContainer()
    {
        switch (clickNumber)
        {
            case 1:
                CostMult = 1;
                break;
            case 2:
                CostMult = 5;
                    break;
            case 3:
                CostMult = 10;
                clickNumber = 0;
                break;
        }

        clickNumber++;

        _root.Q<Button>("Button_EnablrCharacters").text = "X" + CostMult;

        //StartCoroutine(CharacterContainerAnimation());
    }

    private IEnumerator CharacterContainerAnimation()
    {
        _root.style.transitionDuration = new List<TimeValue>() { new TimeValue(1, TimeUnit.Second) };

        if (y == 0)
        {
            y = 0;
            //y = 47f;
            if (_root.Q<VisualElement>("Character_11").style.display == DisplayStyle.Flex)
            {
                //y = 87f;
            }
            else if (_root.Q<VisualElement>("Character_6").style.display == DisplayStyle.Flex)
            {
                //y = 89f;
            }
            else
            {
                //y = 47f;
            }
        }
        else
        {
            y = 0;
        }

        _root.style.translate = new Translate(0, y, 0);

        yield return null;
    }
}
