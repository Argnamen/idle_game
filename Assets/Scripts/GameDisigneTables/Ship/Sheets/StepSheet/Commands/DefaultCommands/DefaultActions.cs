using System;
using Plugins.Ship.Sheets.StepSheet.Commands.Actions;

namespace Plugins.Ship.Sheets.StepSheet.Commands.DefaultCommands
{
    public class DefaultActions : ActionDictionary
    {
        public override IAction Get(string name, string parameter, string argument)
        {
            bool activate;

            switch (name)
            {
                case "debug":
                    return new DebugAction(parameter);
                default:
                    throw new ArgumentOutOfRangeException(name);
            }
        }
    }
}