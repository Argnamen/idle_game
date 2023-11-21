using System;
using Plugins.Ship.Sheets.StepSheet.Commands.Conditions;
using Plugins.Ship.Sheets.StepSheet.Steps;

namespace Plugins.Ship.Sheets.StepSheet.Commands.DefaultCommands
{
    public class DefaultConditions : ConditionDictionary
    {
        public override ICondition Get(string name, string parameter, string argument, IParameterHolder parameterHolder)
        {
            switch (name)
            {
                case "begin_app":
                    return new BeginApp();
                case "node_acted":
                    bool acted = argument is "true" or "";
                    return new NodeEndedDecorator(parameterHolder.Nodes, parameter, acted);
                default:
                    throw new ArgumentOutOfRangeException(name);
            }
        }
    }
}