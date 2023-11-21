using System;
using System.Collections.Generic;
using Plugins.Ship.Sheets.StepSheet.Commands;
using Plugins.Ship.Sheets.StepSheet.Commands.Actions;
using Plugins.Ship.Sheets.StepSheet.Commands.Conditions;
using UnityEngine;

namespace Plugins.Ship.Sheets.StepSheet.Steps
{
    public class NameConverter
    {
        private IEnumerable<IConditionDictionary> _conditions;
        private IEnumerable<IActionDictionary> _actions;

        public NameConverter(IEnumerable<IConditionDictionary> conditions,
            IEnumerable<IActionDictionary> actions)
        {
            _conditions = conditions;
            _actions = actions;
        }
        
        public ICondition Condition(string condition, IParameterHolder parameters)
        {
            Command command = condition.ToCommand();

            foreach (IConditionDictionary conditionDictionary in _conditions)
            {
                if (TryFindCondition(parameters, conditionDictionary, command, out ICondition found)) 
                    return found;
            }
            
            throw new ArgumentOutOfRangeException(command.Name);
        }

        public IAction Action(string action)
        {
            Command command = action.ToCommand();
            
            foreach (IActionDictionary actionDictionary in _actions)
            {
                if (TryFindAction(actionDictionary, command, out IAction found)) 
                    return found;
            }
            
            throw new ArgumentOutOfRangeException(command.Name);
        }
        
        private static bool TryFindCondition(IParameterHolder parameters, IConditionDictionary conditionDictionary,
            Command command, out ICondition found)
        {
            found = null;

            try
            {
                ICondition foundCondition = conditionDictionary.Get
                    (command.Name, command.Parameter, command.Argument, parameters);
                {
                    found = foundCondition;
                    return true;
                }
            }
            catch (ArgumentOutOfRangeException e)
            {
                return false;
            }
            catch (Exception e)
            {
#if UNITY_EDITOR
                Debug.LogError(e);
#endif
                Console.WriteLine(e);
                return false;
            }
        }
        
        private static bool TryFindAction(IActionDictionary actionDictionary,
            Command command, out IAction found)
        {
            found = null;

            try
            {
                IAction foundCondition = actionDictionary.Get
                    (command.Name, command.Parameter, command.Argument);
                {
                    found = foundCondition;
                    return true;
                }
            }
            catch (ArgumentOutOfRangeException e)
            {
                return false;
            }
            catch (Exception e)
            {
#if UNITY_EDITOR
                Debug.LogError(e);
#endif
                Console.WriteLine(e);
                return false;
            }
        }
    }
}