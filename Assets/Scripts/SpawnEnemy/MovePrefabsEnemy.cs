using UnityEngine;
using DG.Tweening;
using System.Collections.Generic;
using System.Collections;

public class MovePrefabsEnemy : MonoBehaviour
{
    [SerializeField] private float speed;

    private bool isMove = false;

    private void Update()
    {
        MovedPrefabs();
    }

    private void MovedPrefabs()
    {
        if (ListCharacters.CharactersObject.Count < 1)
        {
            this.transform.DOKill();

            transform.Translate(Vector3.left * Time.deltaTime * speed);

            //Debug.Log("Lose");

            return;
        }
        if (ListCharacters.CharactersObject[0] != null)
        {
            if (isMove == false)
            {
                StartCoroutine(Move());
            }
        }
    }

    private IEnumerator Move()
    {
        isMove = true;

        float time = (this.transform.position.x - ListCharacters.CharactersObject[0].transform.position.x) / 2;

        this.transform.DOMove(ListCharacters.CharactersObject[0].transform.position, time).SetEase(Ease.Linear);

        yield return new WaitForSeconds(10f);

        isMove = false;
    }
}
