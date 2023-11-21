using Plugins.Ship.Sheets.StepSheet.Commands.Actions;
using Realization.TutorialRealization.Helpers;
using UnityEngine;

namespace Realization.TutorialRealization.Commands
{
    public class HardIncludeAction : IAction
    {
        private readonly HardTutorial _hardTutorial;
        private readonly IObjectProvider<GameObject> _included;

        public HardIncludeAction(HardTutorial hardTutorial, IObjectProvider<GameObject> included)
        {
            _included = included;
            _hardTutorial = hardTutorial;
        }

        public void Perform()
        {
            Debug.Log($"Including {_included.Get()?.name}");
            _hardTutorial.Include(_included.Get());
        }
    }
}