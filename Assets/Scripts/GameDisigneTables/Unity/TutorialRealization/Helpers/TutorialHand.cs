/*
using System;
using Realization.TutorialRealization.Commands;
using UnityEngine;

namespace Realization.TutorialRealization.Helpers
{
    public class TutorialHand
    {
        private Transform _handWorld;
        private Transform _handCamera;
        private Transform _handOverlay;

        private Transform _currentHand;

        public TutorialHand(Transform handWorld, Transform handCamera, Transform handOverlay)
        {
            _handOverlay = handOverlay;
            _handCamera = handCamera;
            _handWorld = handWorld;
        }

        private Transform Get(RenderSpace renderSpace)
        {
            switch (renderSpace)
            {
                case RenderSpace.World:
                    DeactivateHandsExcept(_handWorld);
                    return _handWorld;
                case RenderSpace.CanvasCamera:
                    DeactivateHandsExcept(_handCamera);
                    return _handCamera;
                case RenderSpace.CanvasOverlay:
                    DeactivateHandsExcept(_handOverlay);
                    return _handOverlay;
                default:
                    throw new ArgumentOutOfRangeException(nameof(renderSpace), renderSpace, null);
            }
        }

        private void DeactivateHandsExcept(Transform excepted)
        {
            _handWorld.gameObject.SetActive(false);
            _handCamera.gameObject.SetActive(false);
            _handOverlay.gameObject.SetActive(false);

            excepted.gameObject.SetActive(true);
        }

        public void Follow(RenderSpace type, Transform target)
        {
            _currentHand = Get(type);

            if (_currentHand.gameObject.TryGetComponent(out Follower follower))
            {
                follower.Init(target);
                return;
            }

            _currentHand.gameObject.AddComponent<Follower>().Init(target);
        }
    }
}
*/