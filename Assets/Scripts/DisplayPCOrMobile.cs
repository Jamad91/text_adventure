using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
#if !UNITY_EDITOR && UNITY_WEBGL
using System.Runtime.InteropServices;
#endif

namespace CheckIfMobileForUnityWebGL.Samples
{
    [RequireComponent(typeof(Text))]

    public class DisplayPCOrMobile : MonoBehaviour
    {
        [SerializeField]
        public Text warningMessage;
        public bool isMobile;
        public SceneLoader sceneLoader;

        private void Awake()
        {
            sceneLoader = GetComponent<SceneLoader>();
        }

        private void Start()
        {
            var isMobile = false;

#if !UNITY_EDITOR && UNITY_WEBGL
            isMobile = IsMobile();
#endif
            if (isMobile)
            {
                isMobile = true;
                sceneLoader.LoadMobileScreen();
            }
            else
            {
                isMobile = false;
                sceneLoader.LoadStart();
            }
        }

        public bool GetIsMobile()
        {
            return isMobile;
        }

#if !UNITY_EDITOR && UNITY_WEBGL
        [DllImport("__Internal")]
        private static extern bool IsMobile();
#endif
    }
}