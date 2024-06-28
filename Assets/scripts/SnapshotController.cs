using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnapshotController : MonoBehaviour
{
    //6-27-2024
    //https://stackoverflow.com/questions/63928572/how-do-i-stop-a-camera-from-rendering-to-a-rendertexture
    [Tooltip("If you want to capture a specific camera drag it here, otherwise the MainCamera will be used")]
    [SerializeField] private Camera _camera;

    [Tooltip("If you have a specific RenderTexture for the snapshot drag it here, otherwise one will be generated on runtime")]
    [SerializeField] private RenderTexture _renderTexture;



    private void Awake()
    {
        if (!_camera) _camera = Camera.main;
        
        
        if (!_renderTexture)
        {
            _renderTexture = new RenderTexture(Screen.width, Screen.height, 24, RenderTextureFormat.ARGB32);
            _renderTexture.useMipMap = false;
            _renderTexture.antiAliasing = 1;
        }
         
        if (_renderTexture.width!=Screen.width || _renderTexture.height!=Screen.height)
        {
            //  _renderTexture = new RenderTexture(Screen.width, Screen.height, 24, RenderTextureFormat.ARGB32);
            //      _renderTexture.useMipMap = false;
        //    _renderTexture = new RenderTexture(256, 256, 24);
          //  _renderTexture = new RenderTexture(Screen.width, Screen.height,24);
            _renderTexture.antiAliasing = 1;
        }
        

    }

    public void Snapshot(Action<Texture2D> onSnapshotDone)
    {
        if (_renderTexture.width != Screen.width || _renderTexture.height != Screen.height)
        {
            //  _renderTexture = new RenderTexture(Screen.width, Screen.height, 24, RenderTextureFormat.ARGB32);
            //      _renderTexture.useMipMap = false;
        //     _renderTexture = new RenderTexture(256, 256, 24);
      //      _renderTexture = new RenderTexture(Screen.width, Screen.height, 24);
      //      _renderTexture.antiAliasing = 1;
        }
     //   _renderTexture = new RenderTexture(256, 256, 24);
      _renderTexture = new RenderTexture(Screen.width, Screen.height, 24,UnityEngine.Experimental.Rendering.GraphicsFormat.R8G8B8A8_UNorm);
      //  _renderTexture.antiAliasing = 1;
        StartCoroutine(SnapshotRoutine(onSnapshotDone));
    }

    private IEnumerator SnapshotRoutine(Action<Texture2D> onSnapshotDone)
    {
    //    int defWidth = 256;
     //   int defHeight = 256;
        // this also captures gui, remove if you don't wanna capture gui
         yield return new WaitForEndOfFrame();

        // If RenderTexture.active is set any rendering goes into this RenderTexture
        // instead of the GameView
        RenderTexture.active = _renderTexture;
        _camera.targetTexture = _renderTexture;

        // renders into the renderTexture
        _camera.Render();

        // Create a new Texture2D        
        var result = new Texture2D(Screen.width, Screen.height, TextureFormat.ARGB32, false);
        // copies the pixels into the Texture2D          
        result.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0, false);
        result.Apply();

        // reset the RenderTexture.active so nothing else is rendered into our RenderTexture      
        RenderTexture.active = null;
        _camera.targetTexture = null;

        // Invoke the callback with the resulting snapshot Texture
        onSnapshotDone?.Invoke(result);
    }
}
