using System;
using System.Collections.Generic;
using UnityEngine;

namespace GridMap.Behaviours
{
    public class GridContentPool : MonoBehaviour, IGridContentPool
    {
        private readonly HashSet<IGridContentBehaviour> _gridContents = new HashSet<IGridContentBehaviour>();

        public event Action<IGridContentBehaviour> DraggingBegun;
        public event Action<IGridContentBehaviour> DraggingFinished;
        public event Action<IGridContentBehaviour> ContentDestroyed;
        public event Action<IGridContentBehaviour> ContentPicked;
        public event Action<IGridContentBehaviour> ContentUnpicked;

        private void OnEnable()
        {
            foreach (IGridContentBehaviour gridContent in _gridContents)
            {
                UnsubscribeFromContent(gridContent);
                SubscribeOnContent(gridContent);
            }
        }

        private void OnDisable()
        {
            foreach (IGridContentBehaviour gridContent in _gridContents)
            {
                UnsubscribeFromContent(gridContent);
            }
        }

        public bool TryAdd(IGridContentBehaviour gridContent)
        {
            bool isAdded = _gridContents.Add(gridContent);

            if (isAdded)
                SubscribeOnContent(gridContent);

            return isAdded;
        }

        private void OnContentDraggingFinished(IGridContentBehaviour gridContent)
        {
            DraggingFinished?.Invoke(gridContent);
        }

        private void OnContentDraggingBegun(IGridContentBehaviour gridContent)
        {
            DraggingBegun?.Invoke(gridContent);
        }

        private void OnContentDestroyed(IGridContentBehaviour gridContent)
        {
            ContentDestroyed?.Invoke(gridContent);
        }

        private void OnContentUnpicked(IGridContentBehaviour gridContent)
        {
            ContentUnpicked?.Invoke(gridContent);
        }

        private void OnContentPicked(IGridContentBehaviour gridContent)
        {
            ContentPicked?.Invoke(gridContent);
        }

        private void SubscribeOnContent(IGridContentBehaviour gridContent)
        {
            gridContent.DraggingBegun += OnContentDraggingBegun;
            gridContent.DraggingFinished += OnContentDraggingFinished;
            gridContent.Destroyed += OnContentDestroyed;
            gridContent.Picked += OnContentPicked;
            gridContent.Unpicked += OnContentUnpicked;
        }

        private void UnsubscribeFromContent(IGridContentBehaviour gridContent)
        {
            gridContent.DraggingBegun -= OnContentDraggingBegun;
            gridContent.DraggingFinished -= OnContentDraggingFinished;
            gridContent.Destroyed -= OnContentDestroyed;
            gridContent.Picked -= OnContentPicked;
            gridContent.Unpicked -= OnContentUnpicked;
        }
    }
}