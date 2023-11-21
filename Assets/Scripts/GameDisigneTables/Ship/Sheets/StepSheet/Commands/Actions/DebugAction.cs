using System;
using UnityEngine;

namespace Plugins.Ship.Sheets.StepSheet.Commands.Actions
{
    public class DebugAction : IAction
    {
        private string _debug;

        public DebugAction(string debug)
        {
            _debug = debug;
        }

        public void Perform()
        {
#if UNITY_EDITOR
            Debug.Log(_debug);
#endif
            Console.WriteLine(_debug);
        }
    }
}