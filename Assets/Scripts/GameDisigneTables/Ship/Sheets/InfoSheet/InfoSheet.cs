
using System.Collections.Generic;
using UnityEngine;

namespace Plugins.Ship.Sheets.InfoSheet
{
    public class InfoSheet<T> : ISheet where T : class, new()
    {
        private List<IInfo<T>> _nodes;
        private readonly List<T> _players;

        public InfoSheet(string name, List<IInfo<T>> nodes, List<T> players)
        {
            Name = name;
            _nodes = nodes;
            _players = players;
        }

        public bool Working { get; private set;}
        public string Name { get; }

        public void Start()
        {
            foreach (IInfo<T> node in _nodes)
            {
                T item = new T();
                node.Perform(item);
                _players.Add(item);
            }
        }
        
        public void Update()
        {
            Working = false;
        }
    }
}
