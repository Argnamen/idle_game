using System.Collections.Generic;
using UnityEngine;
using URandom = UnityEngine.Random;

public class SpawnGoldPrefab : MonoBehaviour
{
    [SerializeField] private List<GameObject> _goldPrefabs;

    private Vector2 _offset;

    public Wallet _wallet;

    public bool isBoss = false;

    public void SpawningGold()
    {
        int numberGoldPrefab = 0;

        int cicle = URandom.Range(3, 4);

        if (isBoss)
        {
            cicle = 1;

            numberGoldPrefab = 4;
        }

        for (int i = 0; i < cicle; i++)
        {
            _offset = new Vector2(URandom.Range(-2, 2), gameObject.transform.position.y);

            if (!isBoss)
            {
                if (URandom.Range(1, 101) % 50 == 0)
                {
                    numberGoldPrefab = 3;
                }
                else if (URandom.Range(1, 101) % 20 == 0)
                {
                    numberGoldPrefab = 2;
                }
                else if (URandom.Range(1, 101) % 3 == 0)
                {
                    numberGoldPrefab = 1;
                }
                else if (URandom.Range(1, 101) % 2 == 0)
                {
                    numberGoldPrefab = 0;
                }
            }

            GameObject gold = Instantiate(_goldPrefabs[numberGoldPrefab], (Vector2)gameObject.transform.position + _offset, Quaternion.identity);

            int del = 1;

            float pricePlus = Player.allCharactersDP;

            if (TuchDamageCharacter.DPS != Player.allCharactersDP)
            {
                del = 2;
            }

            if(del == 1)
            {
                pricePlus *= 2;
            }

            if (numberGoldPrefab == 0)
            {
                gold.GetComponent<Gold>().price = (pricePlus / del);
                //Debug.Log("x1");
            }
            else if (numberGoldPrefab == 1)
            {
                gold.GetComponent<Gold>().price = (pricePlus / del) * 1.2f;
                //Debug.Log("x1.2");
            }
            else if (numberGoldPrefab == 2)
            {
                gold.GetComponent<Gold>().price = (pricePlus / del) * 1.6f;
                //Debug.Log("x1.6");
            }
            else if (numberGoldPrefab == 3)
            {
                gold.GetComponent<Gold>().price = (pricePlus / del) * 2f;

                //Debug.Log("x2");
            }
            else if (numberGoldPrefab == 4)
            {
                gold.GetComponent<Gold>().price = (pricePlus / del) * 10f;
                //Debug.Log("x10");

            }

            gold.GetComponent<Gold>()._wallet = _wallet;
        }
    }
}
