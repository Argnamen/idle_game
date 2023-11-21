using Plugins.Ship.Sheets;

namespace Realization.States.EmptySheetHelper
{
    public class EmptySheet : ISheet
    {
        public bool Working => false;
        public string Name => "Empty sheet";

        public void Start()
        {
        }

        public void Update()
        {
        }
    }
}