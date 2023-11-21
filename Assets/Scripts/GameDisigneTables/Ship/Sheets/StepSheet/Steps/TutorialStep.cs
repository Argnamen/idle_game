using System;
using System.Collections.Generic;
using Plugins.Ship.Sheets.StepSheet.Commands.Actions;
using Plugins.Ship.Sheets.StepSheet.Commands.Conditions;
using UnityEngine;

namespace Plugins.Ship.Sheets.StepSheet.Steps
{
    public class TutorialStep : IStep
    {
        private IEnumerable<ICondition> _beginConditions;
        private IEnumerable<ICondition> _endConditions;
        private IEnumerable<IAction> _actions;

        public string Uid { get; }

        public bool ReadyToStart
        {
            get
            {
                foreach (ICondition condition in _beginConditions)
                {
                    if (!condition.Met) return false;
                }

                return true;
            }
        }

        public bool ReadyToContinue
        {
            get
            {
                foreach (ICondition condition in _endConditions)
                {
                    if (!condition.Met) return false;
                }

                return true;
            }
        }

        public bool Acted { get; private set; } = false;

        public TutorialStep(string uid, 
            IEnumerable<ICondition> beginConditions, 
            IEnumerable<ICondition> endConditions,
            IEnumerable<IAction> actions)
        {
            _actions = actions;
            Uid = uid;
            _beginConditions = beginConditions;
            _endConditions = endConditions;
        }

        public void Act()
        {
#if UNITY_EDITOR
            Debug.Log($"Acting {Uid}..");
#endif
            Console.WriteLine($"Acting {Uid}..");
            foreach (IAction action in _actions)
            {
                action.Perform();
            }
            Acted = true;
        }
    }
}