using UnityEngine;

namespace dotmob.Scripts.Level
{
    /// <summary>
    /// Auto destructor for particles
    /// </summary>
    public class AutoDestroy : MonoBehaviour {
        public float sec;
        private void Start() {
            Destroy(gameObject,sec);
        }
    }
}