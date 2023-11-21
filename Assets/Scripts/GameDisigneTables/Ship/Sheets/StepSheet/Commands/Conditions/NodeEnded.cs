using Plugins.Ship.Sheets.StepSheet.Steps;

namespace Plugins.Ship.Sheets.StepSheet.Commands.Conditions
{
    public class NodeEnded : ICondition
    {
        private INode _step;
        private bool _acted;

        public NodeEnded(INode step, bool acted)
        {
            _acted = acted;
            _step = step;
        }

        public bool Met => _step.Acted == _acted;
    }
}