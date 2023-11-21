/*
using System;
using System.Collections.Generic;
using Plugins.Ship.Sheets.StepSheet.Commands.Conditions;
using Plugins.Ship.Sheets.StepSheet.Commands.DefaultCommands;
using Plugins.Ship.Sheets.StepSheet.Steps;
using UnityEngine.UI;

namespace Realization.TutorialRealization.Commands
{
    public class UnityConditions : ConditionDictionary, IDisposable
    {
        private List<IDisposable> _disposables = new();

        public override ICondition Get(string name, string parameter, string argument, IParameterHolder parameterHolder)
        {
            switch (name)
            {
                case "button_pressed":
                    DelayedObject<Button> button = new DelayedObject<Button>(parameter);
                    _disposables.Add(button);
                    return new ButtonPressedCondition(button);
                case "destroyed":
                    DelayedObject destroyed = new DelayedObject(parameter);
                    _disposables.Add(destroyed);
                    return new DestroyedCondition(destroyed);
                default:
                    throw new ArgumentOutOfRangeException(name);
            }
        }

        public void Dispose()
        {
            foreach (IDisposable disposable in _disposables)
            {
                disposable.Dispose();
            }
        }
    }
}
*/