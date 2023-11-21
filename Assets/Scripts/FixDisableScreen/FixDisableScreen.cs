using UnityEngine;

public class FixDisableScreen : MonoBehaviour
{
    private void Awake()
    {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }
}