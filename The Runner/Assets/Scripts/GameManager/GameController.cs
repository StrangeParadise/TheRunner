using UnityEngine;
using System.Collections;
using UnityEngine.Networking;
using TheRunner.Player;

public class GameController : NetworkBehaviour {


    // This is the time of this round of game. (Default: 10min/round).
    public const int COUNTDOWN_TIME = 600;
    private int elapsedTime = 0;

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
    private int time_PlaneFliesBy_1 = 5;
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
        initHollowCircle(1000f);

         

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

        // Debug: 
        foreach (GameObject player in onlinePlayerList) {
            Debug.Log(player.GetComponent<NetworkPlayerController>().playerName);
        }

        // =========================================
        // State 2: Find Boxes.
        // =========================================
        // First plane fly pass.
        switch (gameState)
        {

            case GameState.Run:
                // ================================================
                // - Runners, Let's move!
                Debug.Log("[Game] State 1: Runners, Let's move! ");
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

    private void plane1FlyBy() {

        planePrefab1 = Instantiate(PlaneFlyingPrefab, new Vector3(-500, 200, 0), Quaternion.Euler(-90,0,-90)) as GameObject;
        NetworkServer.Spawn(planePrefab1);
    
    }

    private void plane2FlyBy()
    {

        planePrefab2 = Instantiate(PlaneFlyingPrefab, new Vector3(-500, 200, 0), Quaternion.Euler(-90, 0, -90)) as GameObject;
        NetworkServer.Spawn(planePrefab2);

        Debug.Log(planePrefab2.transform.position);
    }

    private void plane3FlyBy()
    {

        planePrefab3 = Instantiate(PlaneFlyingPrefab, new Vector3(-500, 200, 0), Quaternion.Euler(-90, 0, -90)) as GameObject;
        NetworkServer.Spawn(planePrefab3);

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

    private void initHollowCircle(float radius) 
    {
        GameObject hc = Instantiate(HollowCirclePrefab, Vector3.zero, Quaternion.Euler(90.0f, 0f, 0f));
        hc.GetComponent<HollowCircle>().xradius = radius;
        hc.GetComponent<HollowCircle>().yradius = radius;
        NetworkServer.Spawn(hc);
    }


    private void getElapsedTime(int currentCountDown) {
        elapsedTime = COUNTDOWN_TIME - currentCountDown;
    }

    private void GameOver() {
        Debug.Log("GameOver!");
    }

    private void updatePlayerList()
    {
        onlinePlayerList = GameObject.FindGameObjectsWithTag("Player");
    }

}
