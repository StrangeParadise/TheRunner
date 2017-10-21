using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

<<<<<<< HEAD
public class AR : MonoBehaviour
{
    // Variables
    // Gyro
    private Gyroscope gyro;
    private GameObject cameraContainer;
    private Quaternion gyroRotation;

    // Cam
    private WebCamTexture cam;
    public RawImage background;
    public AspectRatioFitter fit;

    private bool arReady = false;
    public TextMesh terminal;

    private void Start()
    {

        Input.location.Start();
        Input.compass.enabled = true;

        //		transform.rotation = Quaternion.Euler (
        //			transform.rotation.eulerAngles.x, 
        //			Input.compass.trueHeading,
        //			transform.rotation.eulerAngles.z
        //		);

        // Check if Gyro and Cam are supported in target device
        // Supp Gyro?
        if (!SystemInfo.supportsGyroscope)
        {
            print("Gyroscope is not supported!");
            return;
        }

        // Supp BackCam?
        for (int i = 0; i < WebCamTexture.devices.Length; i++)
        {
            if (!WebCamTexture.devices[i].isFrontFacing)
            {
                cam = new WebCamTexture(WebCamTexture.devices[i].name, Screen.width, Screen.height);
            }
        }

        // If no BackCam detected
        if (cam == null)
        {
            print("Camera is not supported!");
            return;
        }
        cameraContainer = new GameObject("CameraContainer");
        cameraContainer.transform.position = transform.position;

        transform.SetParent(cameraContainer.transform);


        // Case: Gyros and BackCam are supported
        gyro = Input.gyro;
        gyro.enabled = true;
        cameraContainer.transform.rotation = Quaternion.Euler(90f, 0, 0);
        gyroRotation = new Quaternion(0, 0, 1, 0);

        cam.Play();
        background.texture = cam;

        arReady = true;
    }

    // Update
    private void Update()
    {

        if (arReady) {
=======
public class AR : MonoBehaviour {
	// Variables
	// Gyro
	private Gyroscope gyro;
	private GameObject cameraContainer;
	private Quaternion gyroRotation;

	// Cam
	private WebCamTexture cam;
	public RawImage background;
	public AspectRatioFitter fit;

	private bool arReady = false;
	public TextMesh terminal;

	private void Start()
	{

		Input.compass.enabled = true;
		Input.location.Start ();

		// Check if Gyro and Cam are supported in target device
		// Supp Gyro?
		if (!SystemInfo.supportsGyroscope) {
			print("Gyroscope is not supported!");
			return;
		}

		// Supp BackCam?
		for (int i = 0; i < WebCamTexture.devices.Length; i++) {
			if (!WebCamTexture.devices[i].isFrontFacing)
			{
				cam = new WebCamTexture(WebCamTexture.devices[i].name, Screen.width, Screen.height);
			}
		}

		// If no BackCam detected
		if (cam == null) {
			print("Camera is not supported!");
			return;
		}
		cameraContainer = new GameObject("CameraContainer");
		cameraContainer.transform.position = transform.position;
		
		transform.SetParent(cameraContainer.transform);


		// Case: Gyros and BackCam are supported
		gyro = Input.gyro;
		gyro.enabled = true;
		cameraContainer.transform.rotation = Quaternion.Euler(90f, 0, 0);
		gyroRotation = new Quaternion(0, 0, 1, 0);

		cam.Play();
		background.texture = cam;

		arReady = true;
	}

	// Update
	private void Update()
	{

		if (arReady) {
>>>>>>> 7b948da39e48bd0cba1cb12eb0e93df26bce7497
			// Update Gyro
			transform.localRotation = gyro.attitude * gyroRotation;
//			transform.localRotation = gyro.attitude;

			transform.eulerAngles = new Vector3 (
				transform.rotation.eulerAngles.x,
				Input.compass.trueHeading,
				transform.rotation.eulerAngles.z
			);

			// Update BackCam
			// Mute the distortion
			float ratio = (float)cam.width / (float)cam.height;
			fit.aspectRatio = ratio;

			// Make the display not vetically reflected
			float scaleY = cam.videoVerticallyMirrored ? -1.0f : 1.0f;
			background.rectTransform.localScale = new Vector3(1.0f, scaleY, 1.0f);

			// Make the display always upright
			int orient = -cam.videoRotationAngle;
			background.rectTransform.localEulerAngles = new Vector3(0, 0, orient);
		}

    }

}