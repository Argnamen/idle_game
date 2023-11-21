using Plugins.Ship.Sheets.StepSheet.Commands.Actions;
using Realization.TutorialRealization.Helpers;

namespace Realization.TutorialRealization.Commands
{
    public class HardClearAction : IAction
    {
        private readonly HardTutorial _hardTutorial;

        public HardClearAction(HardTutorial hardTutorial)
        {
            _hardTutorial = hardTutorial;
        }

        public void Perform()
        {
            _hardTutorial.Clear();
        }
    }
}