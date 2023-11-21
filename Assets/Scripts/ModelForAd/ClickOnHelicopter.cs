using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections;

public class ClickOnHelicopter : MonoBehaviour
{
    [SerializeField] private LayerMask _layerMask;

    private void Update()
    {
        //if (Input.GetButtonDown("Fire1"))
        {
            //ClickedOnHelicopter();
        }
    }

    private void OnMouseDown()
    {
        ClickedOnHelicopterVerDenis();
    }

    private void GetPosMouse()
    {
        Vector2 pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
    }

    private void ClickedOnHelicopterVerDenis()
    {
        SpawnerHelicopter.isWatchAds = true;

        Destroy(this.gameObject);

        Debug.Log("Watch_ADS");
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.tag == "Destroy")
        {
            StartCoroutine(DestroyOut());
        }
    }

    private IEnumerator DestroyOut()
    {
        yield return new WaitForSeconds(20);

        SpawnerHelicopter.isLife = false;

        Destroy(this.gameObject);
    }

    private void ClickedOnHelicopter()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        if (Physics2D.GetRayIntersection(ray, float.MaxValue, _layerMask))
        {
            GetPosMouse();
            Debug.Log("Click_Heli");


            //Destroy(gameObject);
        }
    }
}