using System;
using System.Collections.Generic;
using Plugins.Ship.Sheets.StepSheet.Steps;
using UnityEngine;

namespace Plugins.Ship.Sheets.StepSheet
{
    public class StepSheet : ISheet
    {
        private IList<IStep> _nodes;

        private IStep _current;

        public string Name { get; }

        public bool Working
        {
            get
            {
                foreach (IStep node in _nodes)
                {
                    if (node.Acted == false) return true;
                }

                return false;
            }
        }

        public StepSheet(string name, IList<IStep> nodes)
        {
            Name = name;
            _nodes = nodes; 
        }

        public void Start()
        {
            
        }

        public void Update()
        {
            if(_current == null)
                SetCurrent();
            
            if (_current == null)
                return;

            if (_current.ReadyToContinue)
            {
                _current = null;
            }
        }

        private void SetCurrent()
        {
            IStep first = null;
            foreach (IStep node in _nodes)
            {
                if (!node.ReadyToStart || node.Acted) 
                    continue;
                first = node;
                break;
            }

            _current = first;
            if (_current != null)
            {
#if UNITY_EDITOR
                Debug.Log("Change node to " + _current.Uid);
#endif
                Console.WriteLine("Change node to " + _current.Uid);
                _current.Act();
            }
        }
    }
}