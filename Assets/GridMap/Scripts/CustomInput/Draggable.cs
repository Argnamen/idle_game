using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace CustomInput
{
    public class Draggable : MonoBehaviour, IDragHandler, IEndDragHandler, IBeginDragHandler
    {
        private Camera _camera;

        public event Action DraggingBegun;
        public event Action DraggingFinished;

        private void Awake()
        {
            _camera = Camera.main;
        }

        public void OnBeginDrag(PointerEventData eventData)
        {
            DraggingBegun?.Invoke();
        }

        public void OnDrag(PointerEventData eventData)
        {
            Vector3 onScreenPosition = _camera.ScreenToWorldPoint(Input.mousePosition);
            transform.position = new Vector3(onScreenPosition.x, onScreenPosition.y, transform.position.z);
        }

        public void OnEndDrag(PointerEventData eventData)
        {
            DraggingFinished?.Invoke();
        }
    }
}
