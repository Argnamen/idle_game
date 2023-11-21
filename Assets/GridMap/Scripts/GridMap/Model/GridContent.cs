using System;
using System.Collections.Generic;
using UnityEngine;

namespace GridMap.Model
{
    [Serializable]
    public class GridContent : IGridContent
    {
        [SerializeField] private List<Vector2Int> _shape;

        public IEnumerable<Vector2Int> Shape => _shape;
    }
}
