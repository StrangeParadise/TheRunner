using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using TheRunner.Player;
using UnityEngine.Assertions;

public class GameController : NetworkBehaviour {


    // This is the time of this round of game. (Default: 10min/round).
    public const int COUNTDOWN_TIME = 600;
    private int elapsedTime = 0;
    private float arenaRadius = 1000;

    // Use a prefab to in charge with all the staff related to countdown
    [SerializeField] GameObject countDownPrefab;
    private CountDownController countdownController_I;

    // This class includes all the process that needs to be done both in server
    // and clients.
    // For Server: Generate random boxes.
    //             Generate Toxic Area.
    //             Generate random Supplies.
    // For Clients: Build Auto Tower to locate The Runner.
    //              Unlock the boxes.
    //
    private bool isGameStarted = false;
    private GameState gameState;

    // Game Objects for game
	public GameObject PlaneFlyingPrefab;
    public GameObject BoxPrefab;
    public GameObject HollowCirclePrefab;




    // All clients list. (NetworkPlayerController for scripts.)
    private GameObject[] onlinePlayerList;
   
    // ---------------------
    // Game Schedule:
    // 1 Min: Wait For all runners to hide.
    private int time_Runner_Runs = 0;
    private bool sch_Runner_Runs = false;
    //
    // 2 Min: Game Starts, the first supply fall from plane.
    private int time_Box_1_Fall = 5;
    private bool sch_Plane_Flyby_1 = false;
    private bool isBoxThrew_1 = false;
    private int boxThrowX_1;
    private GameObject planePrefab1;
    //
    // 3 Min: Second supply fall from plane.
    private int time_Box_2_Fall = 15;
    private bool sch_Plane_Flyby_2 = false;
    private bool isBoxThrew_2 = false;
    private int boxThrowX_2;
    private GameObject planePrefab2;
    //
    // 4 Min: Third supply fall from plane.
    private int time_Box_3_Fall = 240;
    private bool sch_Plane_Flyby_3 = false;
    private bool isBoxThrew_3 = false;
    private int boxThrowX_3;
    private GameObject planePrefab3;
    //
    // 5 Min: Toxic Atmosphere starts to spread.
    private int time_Toxic_Atm_Spread = 300;
    private bool sch_Toxic_Atm_Spread = false;
    // ---------------------

    private int time_Run = 0;
    private bool b_Run = false;
    private int time_PlaneFliesBy_1 = 12;
    private bool b_PFB_1 = false;
    private int time_BoxDrops_1 = 20;
    private bool b_BP_1 = false;
    private int time_PlaneFliesBy_2 = 30;
    private bool b_PFB_2 = false;
    private int time_BoxDrops_2 = 45;
    private bool b_BP_2 = false;
    private int time_PlaneFliesBy_3 = 60;
    private bool b_PFB_3 = false;
    private int time_BoxDrops_3 = 70;
    private bool b_BP_3 = false;
    private int time_Exit = 80;
    private bool b_Exit = false;


    enum GameState {
        Run,
        PlaneFliesBy_1,
        BoxDrops_1,
        PlaneFliesBy_2,
        BoxDrops_2,
        PlaneFliesBy_3,
        BoxDrops_3,
        Exit,
        GameOver
    }


    /// <summary>
    /// When server established successfully, server automatically starts the countdown.
    /// </summary>
    public override void OnStartServer()
    {

        Debug.Log("Countdown Starts, Now!");
        //instantiate prefab on server / host
        GameObject countDownTimer = Instantiate(countDownPrefab);
        countdownController_I = countDownTimer.GetComponent<CountDownController>();
        //this causes to instantiate the same object on the connected clients
        NetworkServer.Spawn(countDownTimer);

        StartCoroutine(CountdownRoutine());
    }

    /// <summary>
    /// This is called when game starts (This scripts only works on server side.) .
    /// </summary>
    void Start()
    {
        gameState = GameState.Run;

        // Load a fake plane on everyone's screen
        if (isServer)
        {
            isGameStarted = true;
        }


        // Init all the game functions.
        // Range 
        //      Range indicates the arena of the game play, players cannon go beyond this 
        //      bounded area or they will receive the health punishment.
        //          Default Size: radius = 1000f;
        arenaRadius = 1000f;
        initHollowCircle();

        //============================
        // Debug purpose:
        Debug.Assert(GPSData.s_Instance);

	}

    /// <summary>
    /// Choose the GameState.
    /// </summary>
    private void stateDecider() {
        // Decide which state
        if (elapsedTime >= time_Run && gameState == GameState.Run)
        {
            gameState = GameState.PlaneFliesBy_1;
        }
        else if (elapsedTime >= time_PlaneFliesBy_1 && gameState == GameState.PlaneFliesBy_1)
        {
            gameState = GameState.BoxDrops_1;
        }
        else if (elapsedTime >= time_BoxDrops_1 && gameState == GameState.BoxDrops_1)
        {
            gameState = GameState.PlaneFliesBy_2;
        }
        else if (elapsedTime >= time_PlaneFliesBy_2 && gameState == GameState.PlaneFliesBy_2)
        {
            gameState = GameState.BoxDrops_2;
        }
        else if (elapsedTime >= time_BoxDrops_2 && gameState == GameState.BoxDrops_2)
        {
            gameState = GameState.PlaneFliesBy_3;
        }
        else if (elapsedTime >= time_PlaneFliesBy_3 && gameState == GameState.PlaneFliesBy_3)
        {
            gameState = GameState.BoxDrops_3;
        }
        else if (elapsedTime >= time_BoxDrops_3 && gameState == GameState.BoxDrops_3)
        {
            gameState = GameState.Exit;
        }
        else if (elapsedTime >= time_Exit && gameState == GameState.Exit)
        {
            gameState = GameState.GameOver;
        }
    }



	/// <summary>
    /// Update controls everything undergoing in the game. It use "gameState" to decide
    /// what should happens next. It does following things in sequence:
    ///     - Update all the online players.
    ///     - Choose the game state.
    ///     - Make events happen.
    ///     - TODO: Check the status of all the player.
    /// </summary>
	void Update () {

        // Update all the player information.
        updatePlayerList();

        // Decide which state is the game in.
        stateDecider();


        // TODO: HUD Notifies



        // TODO: Visibility



        // TODO: DEBUG
        // debug_RunHealthTest();  // Ready to be tested.

        switch (gameState)
        {

            case GameState.Run:
                // ================================================
                // - Runners, Let's move!
                b_Run = true;
                break;


            case GameState.PlaneFliesBy_1:
                // ================================================
                // - 1st Plane is passing by!
                if (!b_PFB_1)
                {
                    Debug.Log("[Game] First Plane fly by!");
                    plane1FlyBy();
                    b_PFB_1 = true;
                }

                break;


            case GameState.BoxDrops_1:
                if (!b_BP_1)
                {
                    Debug.Log("[Game] First Box drops!");
                    dropbox1();
                    b_BP_1 = true;
                }

                break;


            case GameState.PlaneFliesBy_2:
                // ================================================
                // - 2nd Plane is passing by!
                if (!b_PFB_2)
                {
                    plane2FlyBy();
                    b_PFB_2 = true;
                }
                break;


            case GameState.BoxDrops_2:
                if (!b_BP_2)
                {
                    dropbox2();
                    b_BP_2 = true;
                }
                break;


            case GameState.PlaneFliesBy_3:
                // ================================================
                // - 3rd Plane is passing by!
                if (!b_PFB_3)
                {
                    plane3FlyBy();
                    b_PFB_3 = true;
                }
                break;


            case GameState.BoxDrops_3:
                if (!b_BP_3)
                {
                    dropbox3();
                    b_BP_3 = true;
                }
                break;


            case GameState.Exit:
                b_Exit = true;
                break;


            case GameState.GameOver:
                GameOver();
                break;
        }

	}


    private Vector2 getPointOnBoundary(float angleDegrees) {

        // initialize calculation variables
        float _x = 0;
        float _y = 0;
        float angleRadians = 0;
        Vector2 _returnVector;
        // convert degrees to radians
        angleRadians = angleDegrees * Mathf.PI / 180.0f;
        // get the 2D dimensional coordinates
        _x = arenaRadius * Mathf.Cos(angleRadians);
        _y = arenaRadius * Mathf.Sin(angleRadians);
        // derive the 2D vector
        _returnVector = new Vector2(_x, _y);
        // return the vector info
        return _returnVector;
    }

    private Vector3 generatePlaneStartPoint(float angleDegrees) {

        Vector2 boundaryPoint = getPointOnBoundary(angleDegrees);

        return new Vector3(
            boundaryPoint.x,
            300.0f + Random.Range(-20,20),
            boundaryPoint.y
        );
    }

    private Vector3 generatePlaneEndPoint(Vector3 startpoint) {
        return new Vector3(
            -startpoint.x,
            startpoint.y + Random.Range(-20,20),
            -startpoint.z            
        );
    }


    /// <summary>
    /// Plane Flies by
    /// </summary>
    private void plane1FlyBy() {

        float angleDegrees = Random.Range(0, 360);
        Vector3 startPoint = generatePlaneStartPoint(angleDegrees);

        Vector3 endPoint = generatePlaneEndPoint(startPoint);

        planePrefab1 = Instantiate(PlaneFlyingPrefab, 
                                   startPoint, 
                                   Quaternion.Euler(-90, 180-angleDegrees, -90)) as GameObject;
        NetworkServer.Spawn(planePrefab1);
        planePrefab1.GetComponent<PlaneMove>().Fly(endPoint, 40f);
    
    }

    private void plane2FlyBy()
    {
        float angleDegrees = Random.Range(0, 360);
        Vector3 startPoint = generatePlaneStartPoint(angleDegrees);
        Vector3 endPoint = generatePlaneEndPoint(startPoint);

        planePrefab2 = Instantiate(PlaneFlyingPrefab,
                                   startPoint,
                                   Quaternion.Euler(-90, 180-angleDegrees, -90)) as GameObject;
        NetworkServer.Spawn(planePrefab2);
        planePrefab2.GetComponent<PlaneMove>().Fly(endPoint, 40f);
    
    }

    private void plane3FlyBy()
    {

        float angleDegrees = Random.Range(0, 360);
        Vector3 startPoint = generatePlaneStartPoint(angleDegrees);
        Vector3 endPoint = generatePlaneEndPoint(startPoint);

        float towardAngle = Vector2.Angle(
            new Vector2(1, 0),
            new Vector2(endPoint.x, endPoint.z)
        );

        planePrefab3 = Instantiate(PlaneFlyingPrefab,
                                   startPoint,
                                   Quaternion.Euler(-90, 180-angleDegrees, -90)) as GameObject;
        NetworkServer.Spawn(planePrefab3);
        planePrefab3.GetComponent<PlaneMove>().Fly(endPoint, 40f);

    }


    private void dropbox1()
    {
        GameObject Box = Instantiate(BoxPrefab, planePrefab1.transform.position, Quaternion.Euler(90f, 0f, 0f));
        NetworkServer.Spawn(Box);
    }

    private void dropbox2()
    {
        Debug.Log(planePrefab1.transform.position);
        GameObject Box = Instantiate(BoxPrefab, planePrefab2.transform.position, Quaternion.Euler(90f, 0f, 0f));
        NetworkServer.Spawn(Box);

    }

    private void dropbox3()
    {
        GameObject Box = Instantiate(BoxPrefab, planePrefab3.transform.position, Quaternion.Euler(90f, 0f, 0f));
        NetworkServer.Spawn(Box);

    }


    public IEnumerator CountdownRoutine()
    {
        float remainingTime = COUNTDOWN_TIME;
        int currentCountDown = COUNTDOWN_TIME;

        while (currentCountDown > 0)
        {
            yield return null;

            //to avoid flooding the network, we only inform clients when change
            //the number of plain seconds 
            int newFloorTime = Mathf.FloorToInt(remainingTime);
            if (newFloorTime != currentCountDown)
            {
                currentCountDown = newFloorTime;
                //notify clients about the changed countdown value
                countdownController_I.RpcUpdateCountdown(currentCountDown);
                getElapsedTime(currentCountDown);
            }
            remainingTime -= Time.deltaTime;
        }


        //or call another Rpc which informs the clients about countdown finished
        // TODO: When Finishes!
        // 
    }

    private void initHollowCircle() 
    {
        GameObject hc = Instantiate(HollowCirclePrefab, Vector3.zero, Quaternion.Euler(90.0f, 0f, 0f));
        hc.GetComponent<HollowCircle>().xradius = arenaRadius;
        hc.GetComponent<HollowCircle>().yradius = arenaRadius;
        NetworkServer.Spawn(hc);
    }


    /// <summary>
    /// Update the game time.
    /// </summary>
    /// <param name="currentCountDown">Countdown clock synced from Prefab Countdown</param>
    private void getElapsedTime(int currentCountDown) 
    {
        elapsedTime = COUNTDOWN_TIME - currentCountDown;
    }

    /// <summary>
    /// Pop up when Game Over.
    /// </summary>
    private void GameOver() {
        Debug.Log("GameOver!");
    }

    private void updatePlayerList()
    {
        onlinePlayerList = GameObject.FindGameObjectsWithTag("Player");
    }


    ///=========================================================================
    // DEBUG: Validation
    ///=========================================================================
   


    /// <summary>
    /// This needs to be run in "Update()"
    /// </summary>
    private void debug_RunHealthTest() {
    /// This part of the code is used for testing the validation of the health control
    /// system.

        testPlayerGetDamaged("UNITY_EDITOR", 99.0f);
        checkPlayerHealth("UNITY_EDITOR", 1.0f);

        testPlayerGetHealed("UNITY_EDITOR", 99.0f);
        checkPlayerHealth("UNITY_EDITOR", 100.0f);

        testPlayerGetDamaged("UNITY_EDITOR", 100.0f);
        testPlayerDied("UNITY_EDITOR");

        Debug.Log(" debug_RunHealthTest | Successful! ");

    }

    private void checkPlayerHealth(string playerName_, float healthChecked) {

        foreach (GameObject player in onlinePlayerList)
        {

            NetworkPlayerController tempNPC = player.GetComponent<NetworkPlayerController>();

            if (tempNPC.playerName == playerName_)
            {
                Debug.Assert(tempNPC.health.Equals(healthChecked));
                break;
            }
            
            break;
        }
    }

    private void testPlayerDied(string playerName_) {

        foreach (GameObject player in onlinePlayerList) {

            NetworkPlayerController tempNPC = player.GetComponent<NetworkPlayerController>();

            if (tempNPC.playerName == playerName_ && tempNPC.isDead) {
                Debug.Log(tempNPC.playerName + " is dead!");
            }
            Debug.Assert(tempNPC.isDead);
            break;
        }


    }

    private void testPlayerGetHealed(string playerName_, float recovery)
    {
        foreach (GameObject player in onlinePlayerList)
        {
            NetworkPlayerController tempNPC = player.GetComponent<NetworkPlayerController>();

            // Debug record
            float cHealth = tempNPC.health;

            if (tempNPC.playerName == playerName_)
            {
                tempNPC.getHealed(recovery);
                Debug.Log(tempNPC.playerName + " is healed! Recovery: " + recovery);
            }

            if (recovery + cHealth > 100.0f) {
                Debug.Assert(tempNPC.health.Equals(100.0f));
            } else {
                Debug.Assert(tempNPC.health.Equals(cHealth + recovery));
            }
                
            break;
        }
    }

    private void testPlayerGetDamaged(string playerName_, float damage)
    {
        foreach (GameObject player in onlinePlayerList)
        {
            NetworkPlayerController tempNPC = player.GetComponent<NetworkPlayerController>();

            // Debug record
            float cHealth = tempNPC.health;

            if (tempNPC.playerName == playerName_)
            {
                tempNPC.getDamage(damage);
                Debug.Log(tempNPC.playerName + " is hit! Damage: " + damage);
            }

            if (cHealth - damage < 0.0f)
            {
                Debug.Assert(tempNPC.health.Equals(0.0f));
            }
            else
            {
                Debug.Assert(tempNPC.health.Equals(cHealth - damage));
            }

            break;
        }
    }
}
