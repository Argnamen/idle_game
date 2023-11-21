using System;
using System.Collections;
using UnityEngine;
using DG.Tweening;

public class HelicopterController : MonoBehaviour
{
    [SerializeField] private float _speedHeli = 5;
    [SerializeField] private float _speedHeliForContinue;


    private bool _IsMoveLeft;
    private bool _IsMoveRight;
    private bool _IsContinueMove;
    private bool _IsFinishMove;

    public Transform _continueMoveForHeli;
    public Transform _finishMoveForHeli;
    [SerializeField] private GameObject _heliDestroyed;

    private void OnEnable()
    {
        if (_continueMoveForHeli == null)
            _continueMoveForHeli = GameObject.Find("ContinueMovementForHelicopter").transform;

        if (_finishMoveForHeli == null)
            _finishMoveForHeli = GameObject.Find("FinishMovementForHelicopter").transform;

        if(_heliDestroyed == null)
            _heliDestroyed = GameObject.Find("Helicopter_Destroyed");

        StartCoroutine(CoroutineMoveHelicopter());
    }

    private void Update()
    {
    }

    private IEnumerator CoroutineMoveHelicopter()
    {
        float timer = 0;
        float moveTime = 0;

        while (timer < 10)
        {
            _speedHeli = 4;

            moveTime = UnityEngine.Random.Range(3, 7);

            MovementLeftHelicopter(moveTime);

            yield return new WaitForSeconds(moveTime);

            timer += moveTime;

            moveTime = UnityEngine.Random.Range(3, 7);

            MovementRightHelicopter(moveTime);

            yield return new WaitForSeconds(moveTime);

            timer += moveTime;
        }

        DestroyModel();

        // yield return new WaitForSeconds(2);
        // SetLeftMove();
        // yield return new WaitForSeconds(2);
        // SetRightMove();


        _IsFinishMove = true;
    }

    private void SetLeftMove()
    {
        _IsMoveRight = false;
        _IsMoveLeft = true;
    }

    private void SetRightMove()
    {
        _IsMoveLeft = false;
        _IsMoveRight = true;
    }


    private void MovementLeftHelicopter(float time)
    {
        gameObject.GetComponent<SpriteRenderer>().flipX = true;

        Vector3 startPoint = _continueMoveForHeli.transform.position;

        float x = UnityEngine.Random.Range(-1, 1);
        float y = UnityEngine.Random.Range(-1, 2);

        Vector3 point = new Vector3(startPoint.x + x, startPoint.y + y, startPoint.z);

        transform.DOMove(point, time);
        //transform.Translate(Vector3.left * _speedHeli * Time.deltaTime);
    }

    private void MovementRightHelicopter(float time)
    {
        gameObject.GetComponent<SpriteRenderer>().flipX = false;

        Vector3 startPoint = _continueMoveForHeli.transform.position;

        float x = UnityEngine.Random.Range(-1, 1);
        float y = UnityEngine.Random.Range(-1, 2);

        Vector3 point = new Vector3(-startPoint.x + x, startPoint.y + y, startPoint.z);

        transform.DOMove(point, time);
        //transform.Translate(Vector3.right * _speedHeli * Time.deltaTime);
    }

    private void MovementForContinueTarget()
    {
        gameObject.transform.Translate(
            (_continueMoveForHeli.transform.position - gameObject.transform.position).normalized
            * _speedHeliForContinue * Time.deltaTime);
    }

    private void MovementForFinishTarget()
    {
        gameObject.transform.Translate(
            (_finishMoveForHeli.transform.position - gameObject.transform.position).normalized
            * _speedHeli * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.name is "TriggerContinueForHelicopter")
        {
            //_IsContinueMove = true;
            //_speedHeliForContinue = 0;
            //_continueMoveForHeli.gameObject.SetActive(false);

            //StartCoroutine(CoroutineMoveHelicopter());
        }

        if (col.gameObject.name is "TriggerFinishForHelicopter")
        {
            
        }
    }

    private void DestroyModel()
    {
        _speedHeli = 0;
        gameObject.GetComponent<AudioSource>().Stop();
        gameObject.transform.GetChild(0).gameObject.SetActive(true);
    }
}