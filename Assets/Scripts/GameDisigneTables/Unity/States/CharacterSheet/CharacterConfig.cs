/*
using System.Collections.Generic;
using Parameters;
using Realization.Configs;
using UnityEngine;

namespace Realization.States.CharacterSheet
{
    [CreateAssetMenu(fileName = "New Characters Config", menuName = "Configs/Characters", order = 0)]
    public class CharacterConfig : ScriptableObject
    {
        [SerializeField] private List<Character> _characters;
        [SerializeField] private List<CharacterStore> _characterStore;

        public Character[] Characters
        {
            get => _characters.ToArray();
            set => _characters = new List<Character>(value);
        }

        public CharacterStore[] CharacterStore
        {
            get => _characterStore.ToArray();
            set => _characterStore = new List<CharacterStore>(value);
        }

        public Constants Constants;

        public void UpdateCharacters(Character[] characters)
        {
            _characters = new List<Character>(characters);
        }
        
        public void UpdateCharacterStore(CharacterStore[] characters)
        {
            _characterStore = new List<CharacterStore>(characters);
        }

        public void UpdateConstants(Constants constant)
        {
            Constants = constant;
        }
    }
}
*/