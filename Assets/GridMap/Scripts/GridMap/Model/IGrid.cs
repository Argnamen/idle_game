using UnityEngine;

namespace GridMap.Model
{
    public interface IGrid
    {
        public int Width { get; }
        public int Height { get; }
        public Cell this[int x, int y] { get; }

        public bool TryLocate(int x, int y, IGridContent gridContent);
        public bool TryRemove(IGridContent model);
        public bool TryGetCoordinates(Cell cell, out Vector2Int gridCoordinates);
    }
}