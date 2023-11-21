/*
using System;
using Plugins.Ship;
using Plugins.Ship.Sheets.StepSheet.Commands.Actions;
using Plugins.Ship.Sheets.StepSheet.Commands.DefaultCommands;
using Realization.TutorialRealization.Helpers;
using UnityEngine;

namespace Realization.TutorialRealization.Commands
{
    public class UnityActions : ActionDictionary
    {
        private readonly ObjectFinder _objectFinder;
        private readonly HardTutorial _hardTutorial;

        public UnityActions(ObjectFinder objectFinder, HardTutorial hardTutorial)
        {
            _hardTutorial = hardTutorial;
            _objectFinder = objectFinder;
        }

        public override IAction Get(string name, string parameter, string argument)
        {
            bool activate;

            switch (name)
            {
                case "fade":
                    GameObject fade = _objectFinder.Fade;
                    activate = parameter.ConvertToBool();
                    return new FadeAction(fade, activate);
                case "hard":
                    activate = parameter.ConvertToBool();
                    return new HardAction(_hardTutorial, activate);
                case "hard_exclude":
                    DelayedObject excluded = new DelayedObject(parameter);
                    return new HardExcludeAction(_hardTutorial, excluded);
                case "hard_include":
                    DelayedObject included = new DelayedObject(parameter);
                    return new HardIncludeAction(_hardTutorial, included);
                case "hard_clear":
                    return new HardClearAction(_hardTutorial);
                case "hand":
                    DelayedObject target = new DelayedObject(parameter);
                    TutorialHand hand = _objectFinder.Hand;
                    return new HandAction(hand, target);
                default:
                    throw new ArgumentOutOfRangeException(name);
            }
        }
    }

    public enum RenderSpace
    {
        World,
        CanvasCamera,
        CanvasOverlay,
    }
}
*/