using GridMap.Model;
using System;

namespace GridMap.Behaviours
{
    public interface IGridBehaviour
    {
        public event Action<Cell> CellClicked;

        bool TryLocate(IGridContentBehaviour gridContent);
        bool TryLocate(IGridContentBehaviour gridContent, Cell cell);
    }
}