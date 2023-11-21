using System;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    [SerializeField] private AudioSource _audioSource;
    [SerializeField] private List<AudioPreset> _audioPresets;

    private bool _IsLoop;

    public AudioSource AudioSource
    {
        get => _audioSource;
        set => _audioSource = value;
    }

    public void Invoke(AudioEvent audioEvent)
    {
        foreach (AudioPreset preset in _audioPresets)
        {
            if (preset.AudioEvent == audioEvent)
            {
                _audioSource.clip = preset.AudioClip;
                _audioSource.Play();
            }
        }
    }

    public void Invoke(AudioEvent audioEvent, bool Isloop)
    {
        _IsLoop = Isloop;

        foreach (AudioPreset preset in _audioPresets)
        {
            if (preset.AudioEvent == audioEvent)
            {
                if (_IsLoop == true)
                {
                    _audioSource.clip = preset.AudioClip;
                    _audioSource.loop = true;
                    _audioSource.Play();
                }
                else
                {
                    _audioSource.clip = preset.AudioClip;
                    _audioSource.loop = false;
                    _audioSource.Play();
                }
            }
        }
    }
}

[Serializable]
public struct AudioPreset
{
    [SerializeField] public AudioEvent AudioEvent;
    [SerializeField] public AudioClip AudioClip;
}


public enum AudioEvent
{
    Start, Shoot, Death, Walk, AllWalk, NoWay, BossPreview, BossMusic, BackgroundMusic, ZombieAttack, ZombieWalk
}
