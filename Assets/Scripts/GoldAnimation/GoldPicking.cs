using UnityEngine;

public class GoldPicking : MonoBehaviour
{
    public void TackingGold()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        RaycastHit2D _raycastHit2D = Physics2D.GetRayIntersection(ray);

        if (_raycastHit2D.collider != null)
        {
            if (_raycastHit2D.transform.TryGetComponent(out Gold gold))
            {
                gold.AnimatingGoldPicked();
            }
        }
    }
}
