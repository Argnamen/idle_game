using System;
using System.Collections.Generic;
using Plugins.Ship.Sheets.InfoSheet;
using Realization.Configs;

namespace Realization.States
{
    public class BastionPointsInfoBuilder : InfoBuilder<BastionPoints>
    {
        private string _mainPoint;
        private List<string> _points = new List<string>();

        protected override void SetQueue(Queue<Action<string>> queue)
        {
            queue.Enqueue((s => _mainPoint = s));

            for (int i = 0; i < 40; i++)
            {
                queue.Enqueue((s => _points.Add(s)));
            }
        }


        protected override IInfo<BastionPoints> GetInternal()
            => new BastionPoints()
            {
                MainPoint = _mainPoint,
                Points = _points.ToArray()
            };
    }
}
