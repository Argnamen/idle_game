using Plugins.Ship.Sheets.StepSheet.Commands.Actions;
using UnityEngine;

namespace Realization.TutorialRealization.Commands
{
    public class FadeAction : IAction
    {
        private GameObject _fade;
        private bool _activate;

        public FadeAction(GameObject fade, bool activate)
        {
            _activate = activate;
            _fade = fade;
        }

        public void Perform()
        {
            _fade.SetActive(_activate);
        }
    }
}