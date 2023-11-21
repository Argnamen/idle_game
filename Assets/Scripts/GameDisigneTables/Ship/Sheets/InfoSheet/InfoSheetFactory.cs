
using System.Collections.Generic;

namespace Plugins.Ship.Sheets.InfoSheet
{
    public class InfoSheetFactory<T> : ISheetFactory<IInfo<T>> where T : class, new()
    {
        private readonly List<T> _items;

        public InfoSheetFactory(List<T> items)
        {
            _items = items;
        }

        public ISheet Get(string name, List<IInfo<T>> nodes)
        {
            return new InfoSheet<T>(name, nodes, _items);
        }
    }
}
