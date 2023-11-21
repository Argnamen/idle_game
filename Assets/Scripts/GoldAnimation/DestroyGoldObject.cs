using UnityEngine;

public class DestroyGoldObject : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.name == "TargetForGold")
        {
            Destroy(transform.parent.gameObject);
        }
    }
}
