using System.Collections.Generic;

namespace GridMap.Behaviours
{
    public interface IGridCellFactory // TODO: mb use common factory interface
    {
        public List<CellBehaviour> Create();
    }
}