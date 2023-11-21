/*
using System;
using UnityEngine;

namespace Realization.TutorialRealization.Helpers
{
    public class ObjectFinder : MonoBehaviour
    {
        [SerializeField] private GameObject _fade;
        [SerializeField] private GameObject _hardTutorial;
        [SerializeField] private Transform _handWorld;
        [SerializeField] private Transform _handCamera;
        [SerializeField] private Transform _handOverlay;

        public T Find<T>(string name) where T : Component
        {
            T found = GameObject.Find(name)?.GetComponent<T>();
            if (found != null)
                return found;

            throw new Exception($"Object with name {name} not found!");
        }

        public GameObject Fade => _fade;
        public GameObject HardTutorial => _hardTutorial;
        public TutorialHand Hand => new TutorialHand(_handWorld, _handCamera, _handOverlay);
    }
}
*/