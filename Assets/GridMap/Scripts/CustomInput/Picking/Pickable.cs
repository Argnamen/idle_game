using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

namespace CustomInput.Picking
{

    public class Pickable : MonoBehaviour, IPointerClickHandler, IBeginDragHandler, IEndDragHandler
    {
        [SerializeField] private PickMarker _marker;

        private bool _isPicked;
        private bool _isDragged;

        public event Action Picked;
        public event Action Unpicked;

        private void Awake()
        {
            _marker.SwitchOff();
        }

        public void Init(IEnumerable<Vector2Int> shape)
        {
            _marker.Init(shape);
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            if (_isDragged == false)
            {
                if (_isPicked)
                    Unpick();
                else
                    Pick();
            }
        }

        public void OnBeginDrag(PointerEventData eventData)
        {
            _isDragged = true;
        }

        public void OnEndDrag(PointerEventData eventData)
        {
            _isDragged = false;
        }

        public void Unpick()
        {
            _isPicked = false;
            _marker.SwitchOff();
            Unpicked?.Invoke();
        }

        private void Pick()
        {
            _isPicked = true;
            _marker.SwitchOn();
            Picked?.Invoke();
        }
    }
}