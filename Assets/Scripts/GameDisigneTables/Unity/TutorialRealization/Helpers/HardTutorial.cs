using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Realization.TutorialRealization.Helpers
{
    public class HardTutorial : MonoBehaviour
    {
        [SerializeField] private Transform _mask;
        [SerializeField] private Transform _excludesParent;
        [SerializeField] private RectTransform _worldCanvas;
        [SerializeField] private Transform _excludesParentAnother;

        private readonly List<HardTutorialObject> _excluded = new();

        public void Exclude(GameObject gameObject)
        {
            GameObject copy = CreateCopy(gameObject);

            HardTutorialObject excluded = new HardTutorialObject()
            {
                Parent = gameObject.transform.parent,
                GameObject = gameObject,
                Layer = gameObject.layer,
                Copy = copy,
            };

            gameObject.layer = LayerMask.NameToLayer("Clickable");
            Transform[] children = gameObject.GetComponentsInChildren<Transform>();
            foreach (Transform child in children)
            {
                child.gameObject.layer = LayerMask.NameToLayer("Clickable");
            }

            List<IPointerClickHandler> buttons = gameObject.GetComponentsInChildren<IPointerClickHandler>().ToList();
            buttons.Add(gameObject.GetComponent<IPointerClickHandler>());
            foreach (IPointerClickHandler button in buttons)
            {
                MonoBehaviour mono = (button as MonoBehaviour);
                if (mono != null)
                    mono.enabled = true;
            }

            _excluded.Add(excluded);
        }

        private GameObject CreateCopy(GameObject main)
        {
            GameObject copy;
            if (main.GetComponentInParent<Canvas>() != null &&
                main.GetComponentInParent<Canvas>().renderMode == RenderMode.ScreenSpaceOverlay)
                copy = Instantiate(main, _excludesParent);
            else
            {
                copy = Instantiate(main, _excludesParentAnother);
            }

            copy.name = $"Copy_{copy.name}_Copy";
            copy.SetActive(true);
            copy.AddComponent<Clone>().Init(main);

            List<Component> components = copy.GetComponents<Component>().ToList();
            components.AddRange(copy.GetComponentsInChildren<Component>());

            foreach (Component component in components)
            {
                if (component is not CanvasRenderer &&
                    component is not Image &&
                    component is not RectTransform &&
                    component is not Transform &&
                    component is not SpriteRenderer &&
                    component is not TMP_Text &&
                    component is not Button &&
                    component is not Clone)
                {
                    Destroy(component);
                }
            }

            return copy;
        }

        public void Include(GameObject gameObject)
        {
            foreach (HardTutorialObject tutorialObject in _excluded)
            {
                if (gameObject == tutorialObject.GameObject)
                {
                    _excluded.Remove(tutorialObject);
                    gameObject.transform.SetParent(tutorialObject.Parent);
                    gameObject.layer = tutorialObject.Layer;
                    Destroy(tutorialObject.Copy);
                    Transform[] children = gameObject.GetComponentsInChildren<Transform>();
                    foreach (Transform child in children)
                    {
                        child.gameObject.layer = tutorialObject.Layer;
                    }

                    List<IPointerClickHandler> buttons =
                        gameObject.GetComponentsInChildren<IPointerClickHandler>().ToList();
                    buttons.Add(gameObject.GetComponent<IPointerClickHandler>());
                    foreach (IPointerClickHandler button in buttons)
                    {
                        if (button == null)
                            continue;
                        (button as MonoBehaviour).enabled = false;
                    }

                    return;
                }
            }

            Debug.LogError(
                $"GameObject {gameObject.name} not found in excluded. " +
                $"If you know you haven't added it, then ignore");
        }

        public void Clear()
        {
            _excluded.Clear();
        }

        public void Activate()
        {
            _mask.gameObject.SetActive(true);
            Transform[] objs = FindObjectsOfType<Transform>(true);
            foreach (Transform obj in objs)
            {
                List<Button> buttons = obj.GetComponentsInChildren<Button>(true).ToList();
                buttons.Add(obj.GetComponent<Button>());
                foreach (Button button in buttons)
                {
                    if (button == null)
                        continue;

                    button.enabled = false;
                }
            }
        }

        public void Deactivate()
        {
            _mask.gameObject.SetActive(true);
            Transform[] objs = FindObjectsOfType<Transform>(true);
            foreach (Transform obj in objs)
            {
                List<Button> buttons = obj.GetComponentsInChildren<Button>(true).ToList();
                buttons.Add(obj.GetComponent<Button>());
                foreach (Button button in buttons)
                {
                    if (button == null)
                        continue;

                    button.enabled = true;
                }
            }
        }
    }

    public struct HardTutorialObject
    {
        public Transform Parent;
        public GameObject GameObject;
        public int Layer;
        public GameObject Copy;
    }
}