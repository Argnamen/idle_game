using UnityEngine;

public class DestroyHelicopter : MonoBehaviour
{
    [SerializeField] private AudioClip _clipDestroy;
    [SerializeField] private GameObject _helicopterDestroyedPrefab;
    [SerializeField] private GameObject _posSpawnDestroyedHelicopter;


    public void SpawnDestroyedHelicopter()
    {
        Debug.Log("Spawn_Heli");
        Instantiate(_helicopterDestroyedPrefab, _posSpawnDestroyedHelicopter.transform.position,
            Quaternion.identity);
    }

    public void PlayedAudioClip()
    {
        gameObject.GetComponent<AudioSource>().PlayOneShot(_clipDestroy);
    }

    public void DestroyHeli()
    {
        Destroy(transform.parent.gameObject);
    }
}