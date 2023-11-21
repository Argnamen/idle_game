using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class Chelka : MonoBehaviour
{
    [SerializeField] private UIDocument MainInterface;

    private VisualElement visualElement;
    private void Start()
    {
        visualElement = MainInterface.rootVisualElement;
    }
    private void Update()
    {
        //Debug.Log(Screen.safeArea.xMax + " " + (Screen.width - Screen.safeArea.xMax));

        visualElement.Q<VisualElement>("PlayerCharacters").style.maxWidth = RuntimePanelUtils.ScreenToPanel(visualElement.Q<VisualElement>("Rotation").panel,
            new Vector2((Screen.safeArea.xMax), Screen.height)).x;

        visualElement.Q<VisualElement>("PlayerCharacters").style.minWidth = RuntimePanelUtils.ScreenToPanel(visualElement.Q<VisualElement>("Rotation").panel,
            new Vector2((Screen.safeArea.xMax), Screen.height)).x;

        
        if (Screen.orientation == ScreenOrientation.LandscapeRight)
        {
            Debug.Log("LandscapeRight");
            visualElement.Q<VisualElement>("Rotation").style.flexDirection = FlexDirection.Row;

            if (Screen.width - Screen.safeArea.xMax != 0)
            {
                visualElement.Q<VisualElement>("CharactersContainer").style.maxWidth = new StyleLength(Length.Percent(18));
                visualElement.Q<VisualElement>("CharactersContainer").style.minWidth = new StyleLength(Length.Percent(17));
            }
        }
        else if (Screen.orientation == ScreenOrientation.LandscapeLeft)
        {
            Debug.Log("LandscapeLeft");
            visualElement.Q<VisualElement>("Rotation").style.flexDirection = FlexDirection.RowReverse;

            if (Screen.width - Screen.safeArea.xMax != 0)
            {
                visualElement.Q<VisualElement>("CharactersContainer").style.maxWidth = new StyleLength(Length.Percent(14));
                visualElement.Q<VisualElement>("CharactersContainer").style.minWidth = new StyleLength(Length.Percent(13));
            }
        }
        
    }
}
