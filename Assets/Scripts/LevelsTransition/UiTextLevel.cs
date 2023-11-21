using TMPro;
using UnityEngine;
using UnityEngine.UIElements;

public class UiTextLevel : MonoBehaviour
{
    [SerializeField] private UIDocument _uIDocument;
    [SerializeField] private UIDocument _uiDocumentChapter;
    [SerializeField] private TextMeshProUGUI _textChapter;

    private VisualElement _rootChapter;

    private VisualElement _root;
    private Label _textLevel;

    private int _chapter = 1;
    private int _levelNumber = 1;
    private int _oldLevelNumber = -1;

    public static int _staticLevelNumber = 1;
    public static int _staticChapter = 1;
    public static int _staticLevel = 1;


    private void Awake()
    {
        _root = _uIDocument.rootVisualElement;
        _rootChapter = _uiDocumentChapter.rootVisualElement;
    }

    public int Chapter
    {
        get => _chapter;
        set {_chapter = value; }
    }

    public int LevelNumber
    {
        get => _levelNumber;
        set { _levelNumber = value; }
    }

    private void Update()
    {

        if (_oldLevelNumber != _levelNumber && false)
        {
            _textLevel = _root.Q<Label>("Text_Level_" + (_levelNumber));
            Color32 yellow = new Color32(130, 128, 70, 255);

            /*
            _textLevel.style.width = new StyleLength(new Length(20, LengthUnit.Pixel));
            _textLevel.style.height = new StyleLength(new Length(20, LengthUnit.Pixel));

            _textLevel.style.borderRightColor = new StyleColor(yellow);
            _textLevel.style.borderBottomColor = new StyleColor(yellow);
            _textLevel.style.borderLeftColor = new StyleColor(yellow);
            */

            _staticLevelNumber = _levelNumber;

            /*
            if (_oldLevelNumber != -1)
            {
                _textLevel = _root.Q<Label>("Text_Level_" + (_oldLevelNumber));
                Color32 red = new Color32(130, 72, 70, 255);

                _textLevel.style.width = new StyleLength(new Length(15, LengthUnit.Pixel));
                _textLevel.style.height = new StyleLength(new Length(15, LengthUnit.Pixel));

                _textLevel.style.borderRightColor = new StyleColor(red);
                _textLevel.style.borderBottomColor = new StyleColor(red);
                _textLevel.style.borderLeftColor = new StyleColor(red);
            }
            */

            _oldLevelNumber = _levelNumber;
        }

        _staticChapter = _chapter;

        //_rootChapter.Q<Label>("TextChapter").text = $"Chapter: {_chapter} / Level: {_levelNumber}";


        //_rootChapter.Q<Label>("Label_Stage").text = $"Stage {_chapter}";
        

        //_textChapter.text = $"Chapter: {_chapter} / Level: {_levelNumber}";

        //Debug.Log($"Chapter: {_chapter} - Level: {_levelNumber}");
    }
}