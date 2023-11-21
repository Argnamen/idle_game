using System.Collections.Generic;
using UnityEngine;

namespace GridMap.Model
{
    public interface IGridContent
    {
        IEnumerable<Vector2Int> Shape { get; }
    }
}