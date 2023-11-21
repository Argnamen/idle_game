/*
using System;
using System.Collections.Generic;
using Plugins.Ship.Sheets.InfoSheet.Infos;

namespace Plugins.Ship.Sheets.InfoSheet
{
    public class PlayerInfoBuilder : InfoBuilder<Player>
    {
        private string _uid = "none";
        private int _health;
        private int _damage;
        private float _speed;

        private void AddName(string value)
        {
            _uid = value;
        }

        private void AddHealth(string value)
        {
            _health = int.Parse(value);
        }

        private void AddDamage(string value)
        {
            _damage = int.Parse(value);
        }

        private void AddSpeed(string value)
        {
            value = value.Replace(',', '.');
            _speed = float.Parse(value);
        }

        protected override void SetQueue(Queue<Action<string>> queue)
        {
            queue.Enqueue(AddName);
            queue.Enqueue(AddHealth);
            queue.Enqueue(AddDamage);
            queue.Enqueue(AddSpeed);
        }

        protected override IInfo<Player> GetInternal()
            => new Player()
            {
                Uid = _uid,
                Health = _health,
                Damage = _damage,
                Speed =  _speed
            };
    }
    
    public class VectorInfoBuilder : InfoBuilder<Vector>
    {
        private float _x;
        private float _y;
        private float _z;
        
        private void AddNothing(string value)
        {
            
        }

        private void AddX(string value)
        {
            _x = float.Parse(value);
        }

        private void AddY(string value)
        {
            _y = float.Parse(value);
        }

        private void AddZ(string value)
        {
            _z = float.Parse(value);
        }
        
        protected override void SetQueue(Queue<Action<string>> queue)
        {
            queue.Enqueue(AddNothing);
            queue.Enqueue(AddX);
            queue.Enqueue(AddY);
            queue.Enqueue(AddZ);
        }

        protected override IInfo<Vector> GetInternal()
            => new Vector()
            {
                X = _x,
                Y = _y,
                Z = _z,
            };
    }
}
*/