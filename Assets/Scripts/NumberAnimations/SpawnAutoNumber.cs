using UnityEngine;

public class SpawnAutoNumber : MonoBehaviour
{
    [SerializeField] private GameObject _numberAnimation;
    [SerializeField] private Transform _startAnim;

    public int _damageTest = 3;

    private void Update()
    {
        if (Input.GetMouseButtonUp(2))
        {
            SpawningNumbers();
        }
    }

    public void SpawningNumbers()
    {
        Instantiate(_numberAnimation, _startAnim.position, Quaternion.identity);
        _numberAnimation.gameObject.SetActive(true);
    }
}
