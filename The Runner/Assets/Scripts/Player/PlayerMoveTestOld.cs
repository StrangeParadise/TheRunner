using UnityEngine;
using UnityEngine.Networking;
public class PlayerMoveTestOld : NetworkBehaviour
{
    private Camera mainCamera;

    [SyncVar]
    public bool isSeeker;
    [SyncVar]
    public float latitudeO;
    [SyncVar]
    public float longitudeO;
    [SyncVar]
    public float latitude;
    [SyncVar]
    public float longitude;


    public Color color;

    void Start() {

        // Camera should always bound with the player cube.
        mainCamera = Camera.main;

    }

    // Player move is based on the movement in real world. So we basically transform
    // the gps coordinate to a local coordiante and share with other players.
    void Update()
    {
        
      
        if (!isLocalPlayer)
            return;
        
        if (latitudeO.Equals(0))
        {
            MapTools.setLatO(latitudeO);
            MapTools.setLonO(longitudeO);
        }

        //CmdSet (MapTools.getLat(), MapTools.getLon());

        latitude = MapTools.getLat();
        longitude = MapTools.getLon();


        var x = mainCamera.transform.position.x;
        var y = mainCamera.transform.position.y - 10.0f;
        var z = mainCamera.transform.position.z;
        //      var x = Input.GetAxis("Horizontal")*0.1f;
        //      var z = Input.GetAxis("Vertical")*0.1f;

        transform.position = new Vector3(x,y,z);
        transform.rotation = mainCamera.transform.rotation;

    }

    [Command]  
    public void CmdSet(float lat, float lon)  
    {  
        longitude = lon;
        latitude = lat;
    }  

}