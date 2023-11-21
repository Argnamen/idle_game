
using System.Collections.Generic;

namespace Plugins.Ship.Sheets.InfoSheet
{
    public class InfoLoaderFactory<T> where T : class, new()
    {
        private readonly string _link;
        private IInfoBuilder<T> _builder;
        private readonly List<T> _players;
        private readonly bool _invert;
        private string _postfix;

        public InfoLoaderFactory(string link, string postfix, IInfoBuilder<T> builder, List<T> players, bool invert = false)
        {
            _postfix = postfix;
            _builder = builder;
            _players = players;
            _invert = invert;
            _link = link;
        }
        
        public ISheetLoader Get()
        {
            InfoRowHandler<T> rowHandler = new InfoRowHandler<T>(_builder);
            InfoSheetFactory<T> factory = new InfoSheetFactory<T>(_players);
            return new StepSheetLoader<IInfo<T>>(rowHandler, factory, _link, _postfix, _invert);
        }
    }
}
