using GridMap.Model;
using System;
using UnityEngine;

namespace GridMap.Behaviours
{
    public interface IGridContentBehaviour
    {
        public event Action<IGridContentBehaviour> DraggingBegun;
        public event Action<IGridContentBehaviour> DraggingFinished;
        public event Action<IGridContentBehaviour> Destroyed;
        public event Action<IGridContentBehaviour> Picked;
        public event Action<IGridContentBehaviour> Unpicked;

        public Vector2 Position { get; }
        public IGridContent Model { get; }

        public void Locate(Vector2 newWorldPosition);
        public void Unpick();
    }
}