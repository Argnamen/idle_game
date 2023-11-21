using System;
using System.Collections.Generic;
using Plugins.Ship.Sheets.InfoSheet;
using Realization.Configs;

namespace Realization.States
{
    public class StageInfoBuilder : InfoBuilder<Stage>
    {
        private List<string> _stage_UID = new List<string>();
        private List<string> _target_HP = new List<string>();
        private List<string> _reward = new List<string>();

        protected override void SetQueue(Queue<Action<string>> queue)
        {
            for (int i = 0; i < 20; i++)
            {
                queue.Enqueue((s => _stage_UID.Add(s)));
                queue.Enqueue((s => _target_HP.Add(s)));
                queue.Enqueue((s => _reward.Add(s)));
            }
        }


        protected override IInfo<Stage> GetInternal()
            => new Stage()
            {
                Stage_UID = _stage_UID.ToArray(),
                Target_HP = _target_HP.ToArray(),
                Reward = _reward.ToArray()
            };
    }
}

