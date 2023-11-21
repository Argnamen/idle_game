using UnityEngine;

public class Backlight : MonoBehaviour
{
    [SerializeField] private GameObject _highlightCircle;
    [SerializeField] private GameObject _highlightCircleRed;
    [SerializeField] private GameObject _particleBuffEffect;


    public void EnabledParticleEffect()
    {
        _particleBuffEffect.SetActive(true);
    }

    public void DisabledParticleEffect()
    {
        _particleBuffEffect.SetActive(false);
    }

    public void EnabledHighlightCircle()
    {
        _highlightCircle.SetActive(true);
    }

    public bool IsEnableHighlightCircle()
    {
        return _highlightCircle.activeInHierarchy;
    }

    public void EnabledHighlightCircleRed()
    {
        _highlightCircleRed.SetActive(true);
    }

    public void DisabledHighlightCircleRed()
    {
        _highlightCircleRed.SetActive(false);
    }

    public void DisabledHighlightCircle()
    {
        _highlightCircle.SetActive(false);
    }
}