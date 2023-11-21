using System;
using Plugins.Ship.Sheets.StepSheet.Commands.Conditions;
using Plugins.Ship.Sheets.StepSheet.Steps;
using UnityEngine;

namespace Plugins.Ship.Sheets.StepSheet.Commands.DefaultCommands
{
    public abstract class ConditionDictionary : IConditionDictionary
    {
        public bool Has(string name)
        {
            try
            {
                Get(name, "null", "null", null);
                return true;
            }
            catch (ArgumentOutOfRangeException e)
            {
                return false;
            }
            catch (Exception e)
            {
#if UNITY_EDITOR
                Debug.Log(e);
#endif
                Console.WriteLine(e);

                return true;
            }
        }

        public abstract ICondition Get(string name, string parameter, string argument,
            IParameterHolder parameterHolder);
    }
}