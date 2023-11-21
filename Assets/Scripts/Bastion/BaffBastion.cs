using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Baff
{
    public class BaffBastion : MonoBehaviour
    {
        private Bastion _bastion;

        private List<PlayerBaffer> _players = new List<PlayerBaffer>();
        public BaffBastion(Bastion bastion)
        {
            _bastion = bastion;
        }
        public void Baff(Player player, float MaxHP, float HP_Regeneration, float Destroyed_Regeneration)
        {
            if (IsBaff(player, MaxHP, HP_Regeneration, Destroyed_Regeneration))
            {
                _bastion.HP_Max += MaxHP;
                _bastion.HP_Regeneration += HP_Regeneration;
                _bastion.Destroyed_Regeneration += Destroyed_Regeneration;
            }
        }

        private bool IsBaff(Player player, float MaxHP, float HP_Regeneration, float Destroyed_Regeneration)
        {
            for (int i = 0; i < _players.Count; i++)
            {
                if (_players[i].Player == player)
                {
                    if (_players[i].MaxHP != MaxHP || _players[i].HP_Regeneration != HP_Regeneration || _players[i].Destroyed_Regeneration != Destroyed_Regeneration)
                    {
                        _bastion.HP_Max -= _players[i].MaxHP;
                        _bastion.HP_Regeneration -= _players[i].HP_Regeneration;
                        _bastion.Destroyed_Regeneration -= _players[i].Destroyed_Regeneration;

                        _players[i] = new PlayerBaffer(player, MaxHP, HP_Regeneration, Destroyed_Regeneration);
                        break;
                    }
                    return true;
                }
            }

            if (MaxHP == 0 && HP_Regeneration == 0 && Destroyed_Regeneration == 0)
            {
                return false;
            }
            else
            {
                _players.Add(new PlayerBaffer(player, MaxHP, HP_Regeneration, Destroyed_Regeneration));

                return true;
            }

        }
    }

    public class PlayerBaffer
    {
        public Player Player;

        public float MaxHP, HP_Regeneration, Destroyed_Regeneration;

        public PlayerBaffer(Player player, float maxHP, float HP_Regeneration, float destroyed_Regeneration)
        {
            Player = player;

            this.MaxHP = maxHP;

            this.HP_Regeneration = HP_Regeneration;

            this.Destroyed_Regeneration = destroyed_Regeneration;
        }
    }
}
