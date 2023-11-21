/*
using Extensions;
using Plugins.Ship.Sheets.StepSheet.Commands.Actions;
using Realization.TutorialRealization.Helpers;
using UnityEngine;

namespace Realization.TutorialRealization.Commands
{
    public class HandAction : IAction
    {
        private IObjectProvider<GameObject> _target;
        private TutorialHand _hand;

        public HandAction(TutorialHand hand, IObjectProvider<GameObject> target)
        {
            _hand = hand;
            _target = target;
        }

        public void Perform()
        {
            GameObject target = _target.Get();
            RenderSpace type = target.RenderSpace();
            _hand.Follow(type, _target.Get().transform);
        }
    }
}
*/