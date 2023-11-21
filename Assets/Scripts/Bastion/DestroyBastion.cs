using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Destroy
{
    public class DestroyBastion : MonoBehaviour
    {
        [SerializeField] private StartNextLevel _startNextLevel;
        public void Destroy()
        {
            StartCoroutine(GameOver());
        }

        private IEnumerator GameOver()
        {
            for (int i = 0; i < Player.PlayerCharacters.Count; i++)
            {
                ListCharacters.CharactersObject.Remove(Player.PlayerCharacters[i].MobPrefab);
                ListCharacters.staticSnapController.RemovePlayersInMobsCollision(Player.PlayerCharacters[i].MobPrefab.GetComponent<DraggablePlayers>());

                Player.PlayerCharacters[i].isDeath = true;
            }

            yield return new WaitForSeconds(1);

            _startNextLevel.GameOver();
        }
    }




}
