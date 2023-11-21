using UnityEngine;

namespace GridMap.Model
{
    public class Grid : IGrid
    {
        private readonly Cell[,] _cells;

        public int Height => _cells.GetLength(0);
        public int Width => _cells.GetLength(1);
        public Cell this[int x, int y] => _cells[x, y];

        public Grid(int length, int width)
        {
            _cells = new Cell[length, width];

            for (var i = 0; i < length; i++)
            {
                for (var j = 0; j < width; j++)
                {
                    _cells[i, j] = new Cell();
                }
            }
        }

        public bool IsInsideGrid(int x, int y)
        {
            return x < _cells.GetLength(0) && x >= 0 && y < _cells.GetLength(1) && y >= 0;
        }

        public bool TryLocate(int x, int y, IGridContent gridContent)
        {
            if (CanLocate(x, y, gridContent) == false)
                return false;

            Locate(x, y, gridContent);
            return true;
        }

        public bool TryRemove(IGridContent gridContent)
        {
            bool isRemoved = false;
            foreach (Cell cell in _cells)
            {
                if (cell.TryRemove(gridContent))
                    isRemoved = true;
            }

            return isRemoved;
        }

        public bool TryGetCoordinates(Cell cell, out Vector2Int gridCoordinates)
        {
            gridCoordinates = new Vector2Int();
            for (int y = 0; y < _cells.GetLength(0); y++)
            {
                for (int x = 0; x < _cells.GetLength(1); x++)
                {
                    if (_cells[x, y] == cell)
                    {
                        gridCoordinates = new Vector2Int(x, y);
                        return true;
                    }
                }
            }

            return false;
        }

        private void Locate(int x, int y, IGridContent gridContent)
        {
            TryRemove(gridContent);
            foreach (Vector2Int shapePoint in gridContent.Shape)
            {
                LocateInCell(x + shapePoint.x, y + shapePoint.y, gridContent);
            }
        }

        private void LocateInCell(int x, int y, IGridContent gridContent)
        {
            _cells[x, y].TryLocate(gridContent);
        }

        private bool CanLocateInCell(int x, int y, IGridContent gridContent)
        {
            if (IsInsideGrid(x, y) == false)
                return false;

            return _cells[x, y].CanLocate(gridContent);
        }

        private bool CanLocate(int x, int y, IGridContent gridContent)
        {
            foreach (Vector2Int shapePoint in gridContent.Shape)
            {
                if (CanLocateInCell(x + shapePoint.x, y + shapePoint.y, gridContent) == false)
                    return false;
            }

            return true;
        }
    }
}