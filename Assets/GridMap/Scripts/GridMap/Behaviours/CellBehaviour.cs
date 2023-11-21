using GridMap.Model;
using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace GridMap.Behaviours
{
    public class CellBehaviour : MonoBehaviour, IPointerClickHandler 
    {
        [SerializeField] private SpriteRenderer _spriteRenderer;

        private Cell _cell; // TODO: use this to highlight cells or remove

        public event Action<Cell> Clicked;

        public float SideSize => _spriteRenderer.size.x;

        private void OnValidate()
        {
            if (_spriteRenderer.size.x != _spriteRenderer.size.y)
                Debug.LogWarning("Cell should be square");
        }

        public void Init(Cell cell, Vector2 position)
        {
            _cell = cell;
            transform.position = position;
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            Clicked?.Invoke(_cell);
        }
    }
}