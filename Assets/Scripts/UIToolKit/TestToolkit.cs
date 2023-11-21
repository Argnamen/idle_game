using System.Collections;
using UnityEngine;
using UnityEngine.UIElements;

public class TestToolkit : MonoBehaviour
{
    [SerializeField] private UIDocument _uiDocument;
    [SerializeField] private UIDocument _uiDocumentADS;

    private Button _closeButtonStart;
    private Button _closeButtonADS;

    private void Awake()
    {
        VisualElement _rootStart = _uiDocument.rootVisualElement;
        VisualElement _rootADS = _uiDocumentADS.rootVisualElement;

        _closeButtonADS = _rootADS.Q<Button>("CloseButton");
        _closeButtonStart = _rootStart.Q<Button>("CloseButton");

        _closeButtonADS.visible = false;
        _closeButtonStart.visible = false;
    }

    private void Update()
    {
        if (Input.GetKey(KeyCode.Space))
        {
            StartCoroutine(OpenGetButtonStart());
        }

        if (Input.GetKey(KeyCode.A))
        {
            StartCoroutine(OpenGetButtonADS());
        }
    }

    private IEnumerator OpenGetButtonStart()
    {
        yield return new WaitForSeconds(2);
        _closeButtonStart.visible = true;
    }

    private IEnumerator OpenGetButtonADS()
    {
        yield return new WaitForSeconds(2);
        _closeButtonADS.visible = true;
    }
}