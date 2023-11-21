using UnityEngine;
using System.Collections;
using DG.Tweening;

public class RepeatBackground : MonoBehaviour
{
    [SerializeField] private float _backgroundSize;

    private Transform _cameraTransform;
    private Transform[] _layers;
    private float _viewZoneCamera = 10;
    private int _leftIndex;
    private int _rightIndex;

    [SerializeField] private GameObject _moon;
    private SpriteRenderer[] _lights;

    public static byte AlphaColor = 10;

    public static bool isMove = true;

    private void Start()
    {
        if(_moon != null)
        {
            _lights = new SpriteRenderer[_moon.transform.GetChild(0).childCount];

            for(int i =0; i < _lights.Length; i++)
            {
                _lights[i] = _moon.transform.GetChild(0).GetChild(i).GetComponent<SpriteRenderer>();
            }

            AlphaColor = 10;
        }

        _viewZoneCamera = Camera.main.orthographicSize * 2;

        _cameraTransform = Camera.main.transform;
        _layers = new Transform[transform.childCount];
        for (int i = 0; i < transform.childCount; i++)
        {
            _layers[i] = transform.GetChild(i);
        }

        _leftIndex = 0;
        _rightIndex = _layers.Length - 1;
    }

    private void Update()
    {
        if (isMove)
        {
            if (_cameraTransform.position.x > (_layers[_rightIndex].transform.position.x - _viewZoneCamera))
            {
                ScrollingBackground();

                StartCoroutine(Animation());
            }
        }
    }

    private IEnumerator Animation()
    {
        yield return new WaitForSeconds(1f);

        isMove = false;
    }

    private void ScrollingBackground()
    {
        int _lastLeft = _leftIndex;
        _layers[_leftIndex].position = (Vector3.right) * (_layers[_rightIndex].position.x + _backgroundSize);
        _layers[_leftIndex].position += (Vector3.up * this.transform.parent.position.y);
        _rightIndex = _leftIndex;
        _leftIndex++;

        if (_leftIndex == _layers.Length)
        {
            _leftIndex = 0;
        }

        if(_moon != null)
        {
            //StartCoroutine(MoonLightAnimation());
        }
    }

    private IEnumerator MoonLightAnimation()
    {
        if (Levels.BossLevelNumber > 0)
        {
            AlphaColor = 17;
        }
        else
        {
            AlphaColor = 10;
        }


        for (int i = 0; i < _lights.Length; i++)
        {
            if (i == 0)
            {
                AlphaColor -= 2;
            }

            if (Levels.BossLevelNumber > 0)
            {
                _lights[i].DOColor(new Color32(166, 50, 50, AlphaColor), 0.3f);
            }
            else
            {
                _lights[i].DOColor(new Color32(255, 255, 255, AlphaColor), 0.3f);
            }
        }

        yield return new WaitForSeconds(0.3f);

        if (Levels.BossLevelNumber > 0)
        {
            AlphaColor = 17;
        }
        else
        {
            AlphaColor = 10;
        }

        for (int i = 0; i < _lights.Length; i++)
        {
            if (i == 0)
            {
                AlphaColor += 2;
            }

            if (Levels.BossLevelNumber > 0)
            {
                _lights[i].DOColor(new Color32(166, 50, 50, AlphaColor), 0.3f);
            }
            else
            {
                _lights[i].DOColor(new Color32(255, 255, 255, AlphaColor), 0.3f);
            }
        }
    }
}
