using System;
using System.Collections.Generic;
using Plugins.Ship.Sheets.StepSheet.Commands.Actions;
using Plugins.Ship.Sheets.StepSheet.Commands.Conditions;

namespace Plugins.Ship.Sheets.StepSheet.Steps
{
    public class NodeBuilder : IParameterHolder
    {
        private string _uid = "none";
        private List<ICondition> _beginConditions = new();
        private List<ICondition> _endConditions = new();
        private List<IAction> _actions = new();
        private NameConverter _nameConverter;
        
        private  Queue<Func<string[], NodeBuilder>> _full = new();
        private  Queue<Func<string[], NodeBuilder>> _queue = new();

        private List<INode> _nodes;

        public IEnumerable<INode> Nodes => _nodes;

        public NodeBuilder(NameConverter nameConverter)
        {
            _nameConverter = nameConverter;
            _nodes = new List<INode>();
            
            _queue.Enqueue(AddName);
            _queue.Enqueue(AddBeginCondition);
            _queue.Enqueue(AddActions);
            _queue.Enqueue(AddEndCondition);
            
            _full.Enqueue(AddName);
            _full.Enqueue(AddBeginCondition);
            _full.Enqueue(AddActions);
            _full.Enqueue(AddEndCondition);
        }

        private NodeBuilder AddName(params string[] values)
        {
            _uid = values[0];
            return this;
        }

        private NodeBuilder AddBeginCondition(params string[] values)
        {
            AddConditions(_beginConditions, values);
            return this;
        }

        private NodeBuilder AddEndCondition(params string[] values)
        {
            AddConditions(_endConditions, values);
            return this;
        }

        private void AddConditions(List<ICondition> list, string[] values)
        {
            foreach (string condition in values)
            {
                if(condition != "")
                    list.Add(_nameConverter.Condition(condition, this));
            }
        }

        private NodeBuilder AddActions(params string[] values)
        {
            foreach (string action in values)
            {
                if(action != "")
                    _actions.Add(_nameConverter.Action(action));
            }
            return this;
        }

        private void Clear()
        {
            _uid = "none";
            _beginConditions = new();
            _endConditions = new();
            _actions = new();
            _queue = new Queue<Func<string[], NodeBuilder>>(_full.ToArray());
        }

        public void Perform(params string[] values)
        {
            _queue.Dequeue().Invoke(values);
        }

        public IStep Get()
        {
            IStep step = new TutorialStep(_uid, _beginConditions, _endConditions, _actions);
            _nodes.Add(step);
            Clear();
            return step;
        }
    }
}