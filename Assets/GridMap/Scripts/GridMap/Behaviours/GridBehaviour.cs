using GridMap.Model;
using System;
using System.Collections.Generic;
using UnityEngine;
using Grid = GridMap.Model.Grid;

namespace GridMap.Behaviours
{
    public class GridBehaviour : MonoBehaviour, IGridBehaviour
    {
        private const float PivotCoordinateProportion = 0.5f;
        private const int SizeMeasuresFromZeroBonus = 1;

        [SerializeField] [Min(1)] private int _gridWidth = 4;
        [SerializeField] [Min(1)] private int _gridHeight = 4;
        [SerializeField] private CellBehaviour _cellPrefab;
        [SerializeField] private Transform _container;
        [SerializeField] private Transform _leftTopPoint;

        private IGrid _grid;
        private readonly HashSet<IGridContentBehaviour> _contents = new HashSet<IGridContentBehaviour>();
        private List<CellBehaviour> _cells = new List<CellBehaviour>();
        private IGridCellFactory _gridCellFactory;
        private IGridCoordinatesConverter _gridCoordinatesConverter;

        public event Action<Cell> CellClicked;

        private void Awake()
        {
            _grid = new Grid(_gridWidth, _gridHeight);
            InitLeftTopPoint(_grid.Width, _grid.Height);
            _gridCellFactory = new GridCellFactory(_grid, _leftTopPoint, _cellPrefab, _container);
            _gridCoordinatesConverter = new GridCoordinatesConverter(_leftTopPoint, _cellPrefab.SideSize);
            _cells = _gridCellFactory.Create();
            SubscribeOnCells();
        }

        private void OnEnable()
        {
            foreach (IGridContentBehaviour gridContent in _contents)
            {
                gridContent.Destroyed -= OnContentDestroyed;
                gridContent.Destroyed += OnContentDestroyed;
            }

            SubscribeOnCells();
        }

        private void OnDisable()
        {
            foreach (IGridContentBehaviour gridContent in _contents)
            {
                gridContent.Destroyed -= OnContentDestroyed;
            }

            foreach (CellBehaviour cell in _cells)
            {
                cell.Clicked -= OnCellClicked;
            }
        }

        public bool TryLocate(IGridContentBehaviour gridContent)
        {
            Vector2Int gridCoordinates = _gridCoordinatesConverter.ConvertToGridCoordinates(gridContent.Position);

            if (_grid.TryLocate(gridCoordinates.x, gridCoordinates.y, gridContent.Model) == false)
                return false;

            AddContent(gridContent, gridCoordinates);
            return true;
        }

        public bool TryLocate(IGridContentBehaviour gridContent, Cell cell)
        {
            if (_grid.TryGetCoordinates(cell, out Vector2Int gridCoordinates) == false)
                return false;

            if (_grid.TryLocate(gridCoordinates.x, gridCoordinates.y, gridContent.Model) == false)
                return false;

            AddContent(gridContent, gridCoordinates);
            return true;
        }

        private void AddContent(IGridContentBehaviour gridContent, Vector2Int gridCoordinates)
        {
            Vector2 newWorldPosition = _gridCoordinatesConverter.ConvertToWorldCoordinates(gridCoordinates);
            gridContent.Locate(newWorldPosition);

            if (_contents.Add(gridContent))
                gridContent.Destroyed += OnContentDestroyed;
        }

        private void OnContentDestroyed(IGridContentBehaviour gridContent)
        {
            if (_grid.TryRemove(gridContent.Model) == false)
                Debug.LogError($"Cannot remove content in {gridContent.Position} from grid");

            gridContent.Destroyed -= OnContentDestroyed;
        }

        private void OnCellClicked(Cell cell)
        {
            CellClicked?.Invoke(cell);
        }

        private void InitLeftTopPoint(int gridWidth, int gridHeight)
        {
            _leftTopPoint.SetParent(_container);
            _leftTopPoint.localPosition = new Vector2(-(gridWidth - SizeMeasuresFromZeroBonus) * _cellPrefab.SideSize * PivotCoordinateProportion, 
                (gridHeight - SizeMeasuresFromZeroBonus) * _cellPrefab.SideSize  * PivotCoordinateProportion);
        }

        private void SubscribeOnCells()
        {
            foreach (CellBehaviour cell in _cells)
            {
                cell.Clicked -= OnCellClicked;
                cell.Clicked += OnCellClicked;
            }
        }
    }
}
