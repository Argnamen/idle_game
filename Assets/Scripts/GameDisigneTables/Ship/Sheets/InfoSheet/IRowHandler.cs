using System.Collections.Generic;

namespace Plugins.Ship.Sheets.InfoSheet
{
    public interface IRowHandler<out T>
    {
        T RowToStep(IList<string> row);
    }
}