using UnityEngine;

namespace GridMap.Behaviours
{
    public class GridContentPicker : MonoBehaviour, IGridContentPicker
    {
        [SerializeField] private GridContentPool _gridContentPool;

        private IGridContentBehaviour _pickedContent;

        public IGridContentBehaviour PickedContent => _pickedContent;

        private void OnValidate()
        {
            _gridContentPool ??= FindObjectOfType<GridContentPool>();
        }

        private void OnEnable()
        {
            _gridContentPool.ContentPicked += OnContentPicked;
            _gridContentPool.ContentUnpicked += OnContentUnpicked;
        }

        private void OnDisable()
        {
            _gridContentPool.ContentPicked -= OnContentPicked;
            _gridContentPool.ContentUnpicked -= OnContentUnpicked;
        }

        private void OnContentPicked(IGridContentBehaviour newPickedContent)
        {
            if (_pickedContent == newPickedContent)
                return;

            if (_pickedContent != null)
                _pickedContent.Unpick();

            _pickedContent = newPickedContent;
        }

        private void OnContentUnpicked(IGridContentBehaviour unpickedContent)
        {
            if (_pickedContent != unpickedContent)
                return;

            _pickedContent = null;
        }
    }
}