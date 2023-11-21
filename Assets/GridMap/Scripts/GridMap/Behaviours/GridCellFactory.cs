using Extentions;
using GridMap.Model;
using System.Collections.Generic;
using UnityEngine;
using Object = UnityEngine.Object;

namespace GridMap.Behaviours
{
    public class GridCellFactory : IGridCellFactory
    {
        private readonly IGrid _grid;
        private readonly Transform _leftTopPoint;
        private readonly CellBehaviour _cellPrefab;
        private readonly Transform _container;

        public GridCellFactory(IGrid grid, Transform leftTopPoint, CellBehaviour cellPrefab, Transform container)
        {
            _grid = grid;
            _leftTopPoint = leftTopPoint;
            _cellPrefab = cellPrefab;
            _container = container;
        }

        public List<CellBehaviour> Create()
        {
            List<CellBehaviour> cells = InstantiateCells();
            InitCells(cells);
            return cells;
        }

        private List<CellBehaviour> InstantiateCells()
        {
            int cellsAmount = _grid.Width * _grid.Width;
            List<CellBehaviour> cells = new List<CellBehaviour>(cellsAmount);
            for (int i = 0; i < cellsAmount; i++)
            {
                cells.Add(Object.Instantiate(_cellPrefab, _container));
            }

            return cells;
        }

        private void InitCells(List<CellBehaviour> cells)
        {
            for (int i = 0; i < _grid.Width && i < cells.Count; i++)
            {
                for (int j = 0; j < _grid.Height && i * _grid.Height + j < cells.Count; j++)
                {
                    Vector2 position = _leftTopPoint.GetPosition2D()
                        + new Vector2(_cellPrefab.SideSize * i, -_cellPrefab.SideSize * j);
                    cells[i * _grid.Height + j].Init(_grid[i, j], position);
                }
            }
        }
    }
}