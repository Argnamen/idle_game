using Plugins.Ship.Sheets.StepSheet.Commands.Actions;

namespace Plugins.Ship.Sheets.StepSheet.Commands
{
    public interface IActionDictionary : ICommandDictionary
    {
        IAction Get(string name, string parameter, string argument);
    }
}