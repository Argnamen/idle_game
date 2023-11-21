using CustomInput;
using CustomInput.Picking;
using GridMap.Model;
using System;
using UnityEngine;

namespace GridMap.Behaviours
{
    public class GridContentBehaviour : MonoBehaviour, IGridContentBehaviour
    {
        [SerializeField] private Draggable _draggable;
        [SerializeField] private GridContent _gridContent;
        [SerializeField] private Pickable _pickable;

        public event Action<IGridContentBehaviour> DraggingFinished;
        public event Action<IGridContentBehaviour> DraggingBegun;
        public event Action<IGridContentBehaviour> Destroyed;
        public event Action<IGridContentBehaviour> Picked;
        public event Action<IGridContentBehaviour> Unpicked;

        public Vector2 Position => transform.position;
        public IGridContent Model => _gridContent;

        private void OnEnable()
        {
            _draggable.DraggingBegun += OnDraggingBegun;
            _draggable.DraggingFinished += OnDraggingFinished;
            _pickable.Picked += OnPicked;
            _pickable.Unpicked += OnUnpicked;
        }

        private void OnDisable()
        {
            _draggable.DraggingBegun -= OnDraggingBegun;
            _draggable.DraggingFinished -= OnDraggingFinished;
            _pickable.Picked -= OnPicked;
            _pickable.Unpicked -= OnUnpicked;
        }

        private void Start()
        {
            _pickable.Init(_gridContent.Shape);
        }

        private void OnDestroy()
        {
            Destroyed?.Invoke(this);
        }

        public void Locate(Vector2 worldPosition)
        {
            transform.position = worldPosition;
        }

        public void Unpick()
        {
            _pickable.Unpick();
        }

        private void OnDraggingFinished()
        {
            DraggingFinished?.Invoke(this);
        }

        private void OnDraggingBegun()
        {
            DraggingBegun?.Invoke(this);
        }

        private void OnPicked()
        {
            Picked?.Invoke(this);
        }

        private void OnUnpicked()
        {
            Unpicked?.Invoke(this);
        }
    }
}