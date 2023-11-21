using System.Collections;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;


public class HPBarFilled : MonoBehaviour
{
    [SerializeField] private float _maxHp;
    [SerializeField] private GameObject[] _circles;
    [SerializeField] private float _nowHp;
    [SerializeField] private float _hpOneCircle;


    private void Update()
    {
        Debug.Log($"NowHp: {_nowHp}, MaxHP: {_maxHp}");
        ControlledCircleHp();
    }

    public void ControlledCircleHp()
    {
        if (_circles[0] == null)
        {
            for (int i = 0; i < this.gameObject.transform.childCount; i++)
            {

                _circles[i] = this.gameObject.transform.GetChild(i).gameObject;
                _circles[i].gameObject.SetActive(false);
            }
        }

        #region ХП на один кружок



        //_hpOneCircle = _maxHp / _circles.Length; //Жизнь одного кружка.

        ////_circles.Last().gameObject.GetComponent<Image>().fillAmount = _hpOneCircle;
        //float fillAmount = _hpOneCircle / _maxHp;

        #endregion


        float fillAmount = _nowHp / _maxHp;

        //_circles.Last().gameObject.GetComponent<Image>().fillAmount = fillAmount;

        for (int i = 0; i < this.gameObject.transform.childCount; i++)
        {

            _circles[i] = this.gameObject.transform.GetChild(i).gameObject;

            if (fillAmount * (i + 1) > _nowHp)
            {
                _circles.Last().gameObject.SetActive(false);
                break;
            }

            _circles.Last().gameObject.GetComponent<Image>().fillAmount = fillAmount;
        }

    }

}
