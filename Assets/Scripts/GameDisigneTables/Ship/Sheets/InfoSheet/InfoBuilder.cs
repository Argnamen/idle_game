using System;
using System.Collections.Generic;

namespace Plugins.Ship.Sheets.InfoSheet
{
    public abstract class InfoBuilder<T> : IInfoBuilder<T>
    {
        private readonly Queue<Action<string>> _full = new();
        private Queue<Action<string>> _queue = new();

        protected InfoBuilder()
        {
            //todo remove abstract method from constructor
            SetQueue(_full);
            Clear();
        }

        public void Perform(string value)
        {
            if(_queue.Count != 0)
                _queue.Dequeue().Invoke(value);
        }

        protected abstract void SetQueue(Queue<Action<string>> queue);

        public IInfo<T> Get()
        {
            IInfo<T> info = GetInternal();
            Clear();
            return info;
        }

        protected abstract IInfo<T> GetInternal();

        private void Clear()
        {
            _queue = new Queue<Action<string>>(_full.ToArray());
        }
    }
}