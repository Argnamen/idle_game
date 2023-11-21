using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class HPBarCircleAnimations : MonoBehaviour
{
    [SerializeField] private float _maxHp;

    private float _nowHp;

    private GameObject[] circles = new GameObject[6];

    private bool isAnimation = false, isDamage = false;

    private void OnEnable()
    {

        circles = new GameObject[this.gameObject.transform.childCount];

        for(int i = 0; i < circles.Length; i++)
        {
            circles[circles.Length - i - 1] = this.gameObject.transform.GetChild(i).gameObject;
            circles[circles.Length - i - 1].GetComponent<SpriteRenderer>().enabled = false;
        }
    }

    private void Update()
    {
        _nowHp = _maxHp;
        Debug.Log($"NowHp: {_nowHp}, MaxHP: {_maxHp}");
        HPBarAnimation(_maxHp, _nowHp);
    }

    public void HPBarAnimation(float maxHP, float HPNow)
    {
        StartCoroutine(HPBarCor(maxHP, HPNow));
    }

    private IEnumerator HPBarCor(float maxHP, float HPNow)
    {
        Debug.Log("HP " + maxHP + " " + HPNow);

        isDamage = true;

        float HPOneShare = maxHP / circles.Length;

        if (circles[0] == null)
        {
            for (int i = 0; i < this.gameObject.transform.childCount; i++)
            {
                circles[circles.Length - i - 1] = this.gameObject.transform.GetChild(i).gameObject;
                circles[circles.Length - i - 1].GetComponent<SpriteRenderer>().enabled = false;
            }
        }

        for (int i = 0; i < circles.Length; i++)
        {
            circles[i].GetComponent<SpriteRenderer>().enabled = true;

            if (HPOneShare * (i + 1) > HPNow)
            {
                for (int k = (i + 1); k < circles.Length; k++)
                {
                    circles[k].GetComponent<SpriteRenderer>().enabled = false;
                }

                if (isAnimation == false)
                {
                    isAnimation = true;

                    circles[i].transform.DOScaleX(circles[i].transform.localScale.x + 2f, 0.4f);
                    yield return new WaitForSeconds(0.5f);
                    circles[i].transform.DOScaleX(circles[i].transform.localScale.x - 2f, 0.4f);
                    yield return new WaitForSeconds(0.4f);

                    isAnimation = false;
                }

                break;
            }
        }

        isDamage = false;
    }
}
