using System.Collections.Generic;
using Plugins.Ship.Sheets;

namespace Plugins.Ship
{
    public class Setup : ISetup
    {
        private Dictionary<string, ISheetLoader> _sheets;

        public Dictionary<string, ISheetLoader> Sheets => _sheets;
        public string StateLink { get; }

        public Setup(string stateLink, ISheetLoader constant, ISheetLoader bastionPoints, ISheetLoader stages)
        {
            StateLink = stateLink;
            _sheets = new Dictionary<string, ISheetLoader>()
            {
                {"constant", constant},
                {"bastionPoints", bastionPoints},
                {"stages", stages}
            };
        }
    }
    
    public class SetupTutorialOnly : ISetup
    {
        private Dictionary<string, ISheetLoader> _sheets;

        public Dictionary<string, ISheetLoader> Sheets => _sheets;
        public string StateLink { get; }

        public SetupTutorialOnly(string stateLink, ISheetLoader tutorial)
        {
            StateLink = stateLink;
            _sheets = new Dictionary<string, ISheetLoader>()
            {
                {"tutorial", tutorial}
            };
        }
    }

    public interface ISetup
    {
        string StateLink { get; }
        
        Dictionary<string, ISheetLoader> Sheets { get; }
    }
}