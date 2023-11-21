using UnityEngine;

public class MoverBackground : MonoBehaviour
{
    [SerializeField] private float _speedBackground;
    [SerializeField] private bool _IsStop;

    private float _speed;

    public bool IsStop => _IsStop;
    public float SpeedBackground => _speedBackground;

    private void Start()
    {
        _speed = _speedBackground;
    }

    private void Update()
    {
        if (_IsStop)
        {
            _speed = 0;
        }
        else
        {
            _speed = _speedBackground;
        }

        _IsStop = Input.GetKey(KeyCode.Space);

        if (RepeatBackground.isMove)
        {
            MovedBackground();
        }
    }

    private void MovedBackground()
    {
        transform.Translate(Vector3.left * _speed * Time.deltaTime);
    }
}