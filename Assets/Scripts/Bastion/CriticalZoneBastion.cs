using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace CriticalZone
{
    public class CriticalZoneBastion : MonoBehaviour
    {
        private List<float> _playersTimerAttack = new List<float>();

        private int _attackSpeedReducing = 10;
        private float _minimumStayTimer = 2;

        private static bool _isStay = false, _isMinimumStay = false;

        public CriticalZoneBastion(float ChangeTimer)
        {
            _minimumStayTimer = ChangeTimer;
        }

        public void OnCriticalStay(int AttackSpeedReducing)
        {
            _attackSpeedReducing = AttackSpeedReducing;

            if (!_isStay)
            {
                _isStay = true;
                MinimumStay();
            }
            
            for (int i = 0; i < Player.PlayerCharacters.Count; i++)
            {

                if (_playersTimerAttack.Count > Player.PlayerCharacters.Count)
                {
                    _playersTimerAttack = new List<float>();
                }

                if (_playersTimerAttack.Count < Player.PlayerCharacters.Count)
                {
                    _playersTimerAttack.Add(Player.PlayerCharacters[i].Time_between_attacks);
                }
                
                if (_playersTimerAttack.Count == Player.PlayerCharacters.Count)
                {
                    if (_playersTimerAttack[i] <= Player.PlayerCharacters[i].Time_between_attacks)
                    {
                        continue;
                    }
                    else
                    {
                        _playersTimerAttack[i] = Player.PlayerCharacters[i].Time_between_attacks;
                    }
                }
            }

            for (int i = 0; i < Player.PlayerCharacters.Count; i++)
            {
                float timer = _playersTimerAttack[i];

                if(Player.PlayerCharacters[i].Time_between_attacks != timer + (timer / 100 * _attackSpeedReducing))
                {
                    if (Player.PlayerCharacters[i].Time_between_attacks == timer + (timer / 100 * _attackSpeedReducing))
                    {
                        continue;
                    }

                    if (Player.PlayerCharacters[i].Time_between_attacks == timer)
                    {
                        Player.PlayerCharacters[i].Time_between_attacks = timer + (timer / 100 * _attackSpeedReducing);
                        Player.PlayerCharacters[i].DebaffEffect(true);
                        Player.PlayerCharacters[i].SwitchDPtoTimeAttack();
                    }
                    else
                    {
                        _playersTimerAttack[i] = Player.PlayerCharacters[i].Time_between_attacks - (timer / 100 * _attackSpeedReducing);

                        if(_playersTimerAttack[i] < 0)
                        {
                            _playersTimerAttack[i] = 0;
                        }

                        timer = _playersTimerAttack[i];

                        Player.PlayerCharacters[i].Time_between_attacks = timer + (timer / 100 * _attackSpeedReducing);

                        Player.PlayerCharacters[i].DebaffEffect(true);
                        Player.PlayerCharacters[i].SwitchDPtoTimeAttack();
                    }
                }
            }
        }

        public void OffCriticalStay(int AttackSpeedReducing)
        {
            if (_isMinimumStay && _isStay)
            {
                for (int i = 0; i < Player.PlayerCharacters.Count; i++)
                {
                    Player.PlayerCharacters[i].Time_between_attacks = _playersTimerAttack[i];
                    Player.PlayerCharacters[i].DebaffEffect(false);
                    Player.PlayerCharacters[i].SwitchTimeAttacktoDP();
                }

                _playersTimerAttack = new List<float>();

                _isStay = false;
                _isMinimumStay = false;
            }
            else if(!_isMinimumStay && _isStay)
            {
                OnCriticalStay(AttackSpeedReducing);
            }
        }

        private async void MinimumStay()
        {
            await System.Threading.Tasks.Task.Delay((int)(1000 * _minimumStayTimer));

            _isMinimumStay = true;
        }

        private void OnDestroy()
        {
            for (int i = 0; i < Player.PlayerCharacters.Count; i++)
            {
                Player.PlayerCharacters[i].Time_between_attacks = _playersTimerAttack[i];
            }

            _playersTimerAttack = new List<float>();

            _isStay = false;
            _isMinimumStay = false;
        }
    }
}
