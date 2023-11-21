using System.Collections.Generic;

namespace Plugins.Ship.Sheets
{
    public interface ISheetFactory<T>
    {
        ISheet Get(string name, List<T> nodes);
    }
}