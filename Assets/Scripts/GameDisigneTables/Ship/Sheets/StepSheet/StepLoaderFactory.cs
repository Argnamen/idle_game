using System.Collections.Generic;
using Plugins.Ship.Sheets.StepSheet.Commands;
using Plugins.Ship.Sheets.StepSheet.Commands.DefaultCommands;
using Plugins.Ship.Sheets.StepSheet.Steps;

namespace Plugins.Ship.Sheets.StepSheet
{
    public class StepLoaderFactory
    {
        private NodeBuilder _nodeBuilder;
        private string _link;
        private string _postfix;
        private bool _invert;

        public StepLoaderFactory(string link, string postfix, NodeBuilder builder,
            IConditionDictionary[] additionalConditions = null, IActionDictionary[] additionalActions = null, bool invert = false)
        {
            _invert = invert;
            _postfix = postfix;
            _link = link;
            List<IConditionDictionary> conditions = new List<IConditionDictionary>
            {
                new DefaultConditions(), 
            };
            if(additionalConditions != null)
                conditions.AddRange(additionalConditions);
            
            List<IActionDictionary> actions = new List<IActionDictionary>
            {
                new DefaultActions(),
            };
            if(additionalActions != null)
                actions.AddRange(additionalActions);

            _nodeBuilder = builder;
        }

        public ISheetLoader Get()
        {
            StepRowHandler stepRowHandler = new StepRowHandler(_nodeBuilder);
            StepSheetFactory factory = new StepSheetFactory();
            return new StepSheetLoader<IStep>(stepRowHandler, factory, _link, _postfix, _invert);
        }
    }
}