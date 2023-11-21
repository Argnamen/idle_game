using UnityEngine;

namespace Realization.States
{
    public class StateWorker : MonoBehaviour
    {
        [SerializeField] private StateInitializer _state;
        
        private void LateUpdate()
        {
            _state.UpdateState();
        }
    }
}