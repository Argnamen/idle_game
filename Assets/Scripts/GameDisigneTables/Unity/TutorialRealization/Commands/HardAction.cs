using Plugins.Ship.Sheets.StepSheet.Commands.Actions;
using Realization.TutorialRealization.Helpers;

namespace Realization.TutorialRealization.Commands
{
    public class HardAction : IAction
    {
        private readonly HardTutorial _hardTutorial;
        private readonly bool _activate;

        public HardAction(HardTutorial hardTutorial, bool activate)
        {
            _activate = activate;
            _hardTutorial = hardTutorial;
        }

        public void Perform()
        {
            if (_activate)
                _hardTutorial.Activate();
            else
                _hardTutorial.Deactivate();
        }
    }
}