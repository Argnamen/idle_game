using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class VFXTest : MonoBehaviour
{
    [SerializeField] private UIDocument uIDocument;
    private VisualElement _root;

    private void Start()
    {
        //_root = uIDocument.rootVisualElement;
    }

    private void OnEnable()
    {
        //_root.Q<VisualElement>("BackgraundImage").style.transitionDuration = new List<TimeValue> { new TimeValue { 10f, 10f } };
    }
}
