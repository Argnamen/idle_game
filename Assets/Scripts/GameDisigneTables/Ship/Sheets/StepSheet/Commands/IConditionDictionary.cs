using Plugins.Ship.Sheets.StepSheet.Commands.Conditions;
using Plugins.Ship.Sheets.StepSheet.Steps;

namespace Plugins.Ship.Sheets.StepSheet.Commands
{
    public interface IConditionDictionary : ICommandDictionary
    {
        ICondition Get(string name, string parameter, string argument, IParameterHolder parameterHolder);
    }
}