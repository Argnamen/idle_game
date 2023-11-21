using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Realization.TutorialRealization.Helpers
{
    public class Follower : MonoBehaviour
    {
        private List<Image> _images;
        private List<TMP_Text> _texts;
        private List<SpriteRenderer> _renderers;

        private Transform _target;

        public void Init(Transform target)
        {
            _target = target;

            _images = new(gameObject.GetComponentsInChildren<Image>());
            _texts = new(gameObject.GetComponentsInChildren<TMP_Text>());
            _renderers = new(gameObject.GetComponentsInChildren<SpriteRenderer>());
        }

        private void Update()
        {
            if (_target == null)
            {
                Destroy(gameObject);
                return;
            }

            SyncRenderer();
            transform.position = _target.position;
        }

        private void SyncRenderer()
        {
            bool enabled = _target.gameObject.activeInHierarchy;

            foreach (Image image in _images)
            {
                image.enabled = enabled;
            }

            foreach (TMP_Text text in _texts)
            {
                text.enabled = enabled;
            }

            foreach (SpriteRenderer renderer in _renderers)
            {
                renderer.enabled = enabled;
            }
        }
    }
}