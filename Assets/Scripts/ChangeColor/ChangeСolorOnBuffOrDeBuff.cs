using System.Collections;
using UnityEngine;
using UnityEngine.UIElements;

public class ChangeÑolorOnBuffOrDeBuff : MonoBehaviour
{
    private VisualElement _root;

    private Label _textElement;

    private Color _defaultColor;
    private Color _buffColor;
    private Color _deBuffColor;

    private int _waitSecondsCoroutine = 2;

    private void Awake()
    {
        _defaultColor = new Color(204f / 255f, 68f / 255f, 68f / 255f);
        _deBuffColor = Color.red;
        _buffColor = Color.green;


        VisualElement root = GetComponent<UIDocument>().rootVisualElement;
        _textElement = root.Q<Label>("Text_DPS");
    }


    public void StartBuffColor()
    {
        StartCoroutine(BuffColor());         //Âûçîâ ïðè áàôôå.
    }

    public void StartDeBuffColor()
    {
        StartCoroutine(DeBuffColor());      //Âûçîâ ïðè ñíÿòèè áàôôà.
    }

    private IEnumerator BuffColor()
    {
        _textElement.style.color = _deBuffColor;
        yield return new WaitForSeconds(_waitSecondsCoroutine);
        _textElement.style.color = _defaultColor;
    }

    private IEnumerator DeBuffColor()
    {
        _textElement.style.color = _buffColor;
        yield return new WaitForSeconds(_waitSecondsCoroutine);
        _textElement.style.color = _defaultColor;
    }

    private void Update()
    {
        if (Input.GetKey(KeyCode.Space))
        {
            StartBuffColor();
        }

        if (Input.GetKey(KeyCode.D))
        {
            StartDeBuffColor();
        }
    }
}