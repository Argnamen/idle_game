using UnityEngine;

public class ExplosionOnZombie : MonoBehaviour
{
    [SerializeField] private GameObject _explosionObject;
    [SerializeField] private LayerMask _layerMask;
    
    private void Update()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            //SpawningExplosionOnZombie();
        }
    }

    private void SpawningExplosion()
    {
        /*new Vector3(Input.mousePosition.x + Random.Range(-1.0f, 1.1f), Input.mousePosition.y + Random.Range(-2.0f, 2.1f), Input.mousePosition.z)*/
        ;

        Vector2 pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        pos.x *= Random.Range(0.9f, 1.1f);
        pos.y *= Random.Range(0.9f, 2.1f);

        GameObject game = Instantiate(_explosionObject, pos,
            Quaternion.identity);
        Debug.Log(game.name);
    }

    private void SpawningExplosionOnZombie()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        if (Physics2D.GetRayIntersection(ray, float.MaxValue, _layerMask))
        {
            SpawningExplosion();
            Debug.Log("Exp");
        }

    }
}

