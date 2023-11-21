using Extentions;
using UnityEngine;

namespace GridMap.Behaviours
{
    internal class GridCoordinatesConverter : IGridCoordinatesConverter
    {
        private readonly Vector2Int _gridAxisDirection = new Vector2Int(1, -1);

        private Transform _leftTopPoint;
        private float _cellSize;

        public GridCoordinatesConverter(Transform leftTopPoint, float cellSize)
        {
            _leftTopPoint = leftTopPoint;
            _cellSize = cellSize;
        }

        public Vector2Int ConvertToGridCoordinates(Vector2 worldPointPosition)
        {
            Vector2 localPosition = (worldPointPosition - _leftTopPoint.GetPosition2D()) * _gridAxisDirection;
            int xGridPosition = Mathf.RoundToInt(localPosition.x / _cellSize);
            int yGridPosition = Mathf.RoundToInt(localPosition.y / _cellSize);
            return new Vector2Int(xGridPosition, yGridPosition);
        }

        public Vector2 ConvertToWorldCoordinates(Vector2Int gridCoordinates)
        {
            return _leftTopPoint.GetPosition2D()
                + (new Vector2(gridCoordinates.x, -gridCoordinates.y) * _cellSize);
        }
    }
}