using System.Collections.Generic;

namespace Plugins.Ship.Sheets.InfoSheet
{
    public class InfoRowHandler<T> : IRowHandler<IInfo<T>>
    {
        private IInfoBuilder<T> _builder;

        public InfoRowHandler(IInfoBuilder<T> builder)
        {
            _builder = builder;
        }

        public IInfo<T> RowToStep(IList<string> row)
        {
            foreach (string cell in row)
            {
                _builder.Perform(cell);
            }
            
            return _builder.Get();
        }
    }
}