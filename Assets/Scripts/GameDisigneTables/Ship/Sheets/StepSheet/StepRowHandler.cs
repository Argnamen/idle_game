using System.Collections.Generic;
using Plugins.Ship.Sheets.InfoSheet;
using Plugins.Ship.Sheets.StepSheet.Steps;

namespace Plugins.Ship.Sheets.StepSheet
{
    public class StepRowHandler : IRowHandler<IStep>
    {
        private NodeBuilder _builder;
        private readonly char _separator;

        public StepRowHandler(NodeBuilder builder, char separator = '&')
        {
            _builder = builder;
            _separator = separator;
        }

        public IStep RowToStep(IList<string> row)
        {
            foreach (string cell in row)
            {
                string[] values = cell.Split(_separator);
                _builder.Perform(values);
            }
            
            return _builder.Get();
        }
    }
}