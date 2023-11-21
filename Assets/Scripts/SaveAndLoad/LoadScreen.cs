using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class LoadScreen : MonoBehaviour
{
    [SerializeField] private UIDocument _uIDocument;

    [SerializeField] private Camera LoadCamera, MainCamera;

    public static bool isLoad = true;

    public static bool isStartSpawn = false;

    public static bool isEnable = false;

    private void OnEnable()
    {
        MainCamera.gameObject.SetActive(false);
        LoadCamera.gameObject.SetActive(true);

        _uIDocument.rootVisualElement.Q<VisualElement>().style.display = DisplayStyle.None;
        //if(isStartSpawn == true)
        StartCoroutine(Load());
    }

    private IEnumerator Load()
    {
        while (!isEnable)
        {
            yield return null;
        }

        yield return new WaitForSeconds(0.5f);

        isLoad = false;

        MainCamera.gameObject.SetActive(true);
        LoadCamera.gameObject.SetActive(false);

        _uIDocument.rootVisualElement.Q<VisualElement>().style.display = DisplayStyle.Flex;

        yield return null;

        //isStartSpawn = true;
    }
}
