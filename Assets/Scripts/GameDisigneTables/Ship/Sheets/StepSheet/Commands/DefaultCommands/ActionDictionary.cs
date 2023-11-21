using System;
using Plugins.Ship.Sheets.StepSheet.Commands.Actions;
using UnityEngine;

namespace Plugins.Ship.Sheets.StepSheet.Commands.DefaultCommands
{
    public abstract class ActionDictionary : IActionDictionary
    {
        public bool Has(string name)
        {
            try
            {
                Get(name, "null", "null");
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
                
                return false;
            }
        }

        public abstract IAction Get(string name, string parameter, string argument);
    }
}