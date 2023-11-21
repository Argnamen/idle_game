using UnityEngine;

namespace GridMap.Behaviours
{
    public class ExistingGridContentBehaviour : MonoBehaviour
    {
        [SerializeField] private GridContentBehaviour _gridContent;
        [SerializeField] private GridContentPool _gridContentPool;

        private void OnValidate()
        {
            _gridContentPool ??= FindObjectOfType<GridContentPool>();
        }

        private void Awake()
        {
            if (_gridContentPool.TryAdd(_gridContent) == false)
                Debug.LogError($"Cannot add {_gridContent.name} to pool");
        }
    }
}