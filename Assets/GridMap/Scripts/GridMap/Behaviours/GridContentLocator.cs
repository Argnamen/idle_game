using GridMap.Model;
using UnityEngine;

namespace GridMap.Behaviours
{
    public class GridContentLocator : MonoBehaviour
    {
        [SerializeField] private GridContentPool _gridContentPool;
        [SerializeField] private GridBehaviour _gridBehaviour;
        [SerializeField] private GridContentPicker _gridContentPicker;
        
        private Vector2 _previousDraggablePosition;

        private void OnValidate()
        {
            _gridContentPool ??= FindObjectOfType<GridContentPool>();
            _gridBehaviour ??= FindObjectOfType<GridBehaviour>();
            _gridContentPicker ??= FindObjectOfType<GridContentPicker>();
        }

        private void OnEnable()
        {
            _gridContentPool.DraggingBegun += OnContentDraggingBegun;
            _gridContentPool.DraggingFinished += OnContentDraggingFinished;
            _gridBehaviour.CellClicked += OnCellClicked;
        }

        private void OnDisable()
        {
            _gridContentPool.DraggingBegun -= OnContentDraggingBegun;
            _gridContentPool.DraggingFinished -= OnContentDraggingFinished;
            _gridBehaviour.CellClicked -= OnCellClicked;
        }

        private void OnContentDraggingBegun(IGridContentBehaviour gridContent)
        {
            _previousDraggablePosition = gridContent.Position;
        }

        private void OnContentDraggingFinished(IGridContentBehaviour gridContent)
        {
            if (_gridBehaviour.TryLocate(gridContent) == false)
            {
                gridContent.Locate(_previousDraggablePosition);
            }
        }

        private void OnCellClicked(Cell cell)
        {
            if (_gridContentPicker.PickedContent != null)
            {
                _gridBehaviour.TryLocate(_gridContentPicker.PickedContent, cell);
            }
        }
    }
}