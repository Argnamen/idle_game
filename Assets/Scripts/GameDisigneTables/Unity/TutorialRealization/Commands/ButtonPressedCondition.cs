using Plugins.Ship.Sheets.StepSheet.Commands.Conditions;
using UnityEngine.UI;

namespace Realization.TutorialRealization.Commands
{
    public class ButtonPressedCondition : ICondition
    {
        private readonly IObjectProvider<Button> _button;
        private bool _inited;
        private bool _met;

        public ButtonPressedCondition(IObjectProvider<Button> button)
        {
            _button = button;
        }

        private void Meet()
        {
            _met = true;
            _button.Get().onClick.RemoveListener(Meet);
        }

        public bool Met
        {
            get
            {
                if (_inited == false)
                {
                    _button.Get().onClick.AddListener(Meet);
                    _inited = true;
                }

                return _met;
            }
            private set => _met = value;
        }
    }
}