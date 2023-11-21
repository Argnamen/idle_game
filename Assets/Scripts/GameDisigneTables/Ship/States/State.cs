using System.Collections.Generic;
using Plugins.Ship.Sheets;

namespace Plugins.Ship.States
{
    public class State : IState
    {
        private readonly IList<ISheet> _sheets;

        public string Name { get; }

        public State(string name, params ISheet[] sheets)
        {
            Name = name;
            _sheets = new List<ISheet>(sheets);
        }

        public State(string name, IEnumerable<ISheet> sheets)
        {
            Name = name;
            _sheets = new List<ISheet>(sheets);
        }

        public bool Working
        {
            get
            {
                foreach (ISheet sheet in _sheets)
                {
                    if (sheet.Working)
                        return true;
                }

                return false;
            }
        }
        
        public void Start()
        {
            foreach (ISheet sheet in _sheets)
            {
                sheet.Start();
            }
        }

        public void Update()
        {
            foreach (ISheet sheet in _sheets)
            {
                sheet.Update();
            }
        }
    }
}