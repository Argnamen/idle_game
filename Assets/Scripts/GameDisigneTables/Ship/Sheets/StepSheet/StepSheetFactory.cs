using System.Collections.Generic;
using Plugins.Ship.Sheets.StepSheet.Steps;

namespace Plugins.Ship.Sheets.StepSheet
{
    public class StepSheetFactory : ISheetFactory<IStep>
    {
        public ISheet Get(string name, List<IStep> nodes)
        {
            return new StepSheet(name, nodes);
        }
    }
}