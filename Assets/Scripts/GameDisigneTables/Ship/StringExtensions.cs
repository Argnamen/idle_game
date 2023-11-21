using System;
using Plugins.Ship.Sheets.StepSheet.Commands;

namespace Plugins.Ship
{
    public static class StringExtensions
    {
        public static Command ToCommand(this string line)
        {
            int separatorIndex = line.IndexOf(':');
            int argumentIndex = line.IndexOf('[');
            int endArgIndex = line.IndexOf(']');
            
            string name = line;
            if(separatorIndex != -1) 
                name = line.Substring(0, separatorIndex);
            
            string argument = "";
            
            string parameter = "";
            if (argumentIndex != -1)
            {
                parameter = line.Substring(separatorIndex+1, argumentIndex - separatorIndex-1);
                argument = line.Substring(argumentIndex+1, endArgIndex - argumentIndex-1);
            }
            else if(separatorIndex != -1)
            {
                parameter = line.Substring(separatorIndex+1);
            }

            return new Command()
            {
                Name = name,
                Parameter = parameter,
                Argument = argument
            };
        }
        
        public static bool ConvertToBool(this string value)
        {
            switch (value)
            {
                case "yes":
                case "true":
                case "on":
                    return true;
                case "no":
                case "false":
                case "off":
                    return false;
                default:
                    throw new ArgumentOutOfRangeException(value);
            }
        }
    }
}