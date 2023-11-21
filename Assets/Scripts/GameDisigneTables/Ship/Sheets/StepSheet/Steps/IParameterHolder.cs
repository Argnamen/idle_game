using System.Collections.Generic;

namespace Plugins.Ship.Sheets.StepSheet.Steps
{
    public interface IParameterHolder
    {
        public IEnumerable<INode> Nodes { get; }
    }
}