using UnityEngine;

public class Test : MonoBehaviour
{
    [SerializeField] private AudioManager _audioManager;

    private void Update()
    {
        if (Input.GetKey(KeyCode.A))
        {
            Debug.Log("∆мЄм пробел");
            _audioManager.Invoke(AudioEvent.Shoot);
        }

        if (Input.GetKey(KeyCode.S))
        {
            _audioManager.Invoke(AudioEvent.Walk);
        }
    }

}
