using UnityEngine;

namespace GridMap.Behaviours
{
    public interface IGridCoordinatesConverter
    {
        public Vector2Int ConvertToGridCoordinates(Vector2 worldPointPosition);
        public Vector2 ConvertToWorldCoordinates(Vector2Int gridCoordinates);
    }
}