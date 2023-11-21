using UnityEngine;

public class EnableDisablePointsSnap : MonoBehaviour
{
    [SerializeField] private GameObject _pointsSnapObject;

    public GameObject PointsSnapObject
    {
        get => _pointsSnapObject;
        set => _pointsSnapObject = value;
    }

    private void Start()
    {
        _pointsSnapObject.SetActive(false);
    }
}
