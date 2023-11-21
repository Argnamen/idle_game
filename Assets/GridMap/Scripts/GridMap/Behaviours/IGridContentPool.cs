using System;

namespace GridMap.Behaviours
{
    public interface IGridContentPool
    {
        public event Action<IGridContentBehaviour> DraggingFinished;
        public event Action<IGridContentBehaviour> DraggingBegun;
        public event Action<IGridContentBehaviour> ContentDestroyed;
        public event Action<IGridContentBehaviour> ContentPicked;
        public event Action<IGridContentBehaviour> ContentUnpicked;

        bool TryAdd(IGridContentBehaviour gridContent);
    }
}