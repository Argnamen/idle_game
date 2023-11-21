using System.Collections.Generic;
using System.Linq;
using Plugins.Ship.Sheets.StepSheet.Commands.Conditions;

namespace Plugins.Ship.Sheets.StepSheet.Steps
{
    public class NodeEndedDecorator : ICondition
    {
        private NodeEnded _nodeEnded;
        private IEnumerable<INode> _nodes;
        private string _nodeUid;
        private bool _acted;

        public NodeEndedDecorator(IEnumerable<INode> nodes, string nodeUid, bool acted)
        {
            _acted = acted;
            _nodes = nodes;
            _nodeUid = nodeUid;
        }

        public bool Met
        {
            get
            {
                if (_nodeEnded == null)
                {
                    INode node = _nodes.First(node => node.Uid == _nodeUid);
                    _nodeEnded = new NodeEnded(node, _acted);
                }
                return _nodeEnded.Met;
            }
        }
    }
}