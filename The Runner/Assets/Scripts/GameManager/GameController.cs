using UnityEngine;
using System.Collections;
using UnityEngine.Networking;


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


    // Game Objects for game
	public GameObject PlaneFlyingPrefab;

    // ---------------------
    // Game Schedule:
    // 1 Min: Wait For all runners to hide.
    private int time_Runner_Runs = 0;
    private bool sch_Runner_Runs = false;
    //
    // 2 Min: Game Starts, the first supply fall from plane.
    private int time_Box_1_Fall = 5;
    private bool sch_Box_1_Fall = false;
    //
    // 3 Min: Second supply fall from plane.
    private int time_Box_2_Fall = 15;
    private bool sch_Box_2_Fall = false;
    //
    // 4 Min: Third supply fall from plane.
    private int time_Box_3_Fall = 240;
    private bool sch_Box_3_Fall = false;
    //
    // 5 Min: Toxic Atmosphere starts to spread.
    private int time_Toxic_Atm_Spread = 300;
    private bool sch_Toxic_Atm_Spread = false;
    // ---------------------


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

    // Use this for initialization
    void Start()
    {

        // Load a fake plane on everyone's screen
        if (isServer)
        {
            isGameStarted = true;
        }

	}

	// Update is called once per frame
	void Update () {
		
        // =========================================
        // State 1: Runner runs!
        // =========================================
        if (elapsedTime >= time_Runner_Runs && !sch_Runner_Runs)
        {
            Debug.Log("[Game] State 1: Runners, Let's move! ");
            sch_Runner_Runs = true;
            // TODO: Catcher is grounded.
        }

        // =========================================
        // State 2: Find Boxes.
        // =========================================
        if (elapsedTime >= time_Box_1_Fall && !sch_Box_1_Fall)
        {
            Debug.Log("[Game] State 2: Find Boxes! ");
            sch_Box_1_Fall = true;
            planeFlyBy();
        }

        if (elapsedTime >= time_Box_2_Fall && !sch_Box_2_Fall)
        {
            Debug.Log("[Game] State 2: Find Boxes! ");
            sch_Box_2_Fall = true;
            planeFlyBy();
        }

        if (elapsedTime >= time_Box_3_Fall && !sch_Box_3_Fall)
        {
            Debug.Log("[Game] State 2: Find Boxes! ");
            sch_Box_3_Fall = true;
            planeFlyBy();
        }
        // =========================================
        // State 2: Find Boxes.
        // =========================================
        if (elapsedTime >= time_Toxic_Atm_Spread && !sch_Toxic_Atm_Spread)
        {
            Debug.Log("[Game] State 3: Toxic Atmosphere starts to spread!");
            sch_Toxic_Atm_Spread = true;
            planeFlyBy();
        }
	}

    private void planeFlyBy() {

        GameObject plane = (GameObject)Instantiate(PlaneFlyingPrefab, new Vector3(-500, 200, 0), Quaternion.Euler(-90,0,-90));
        NetworkServer.Spawn(plane);

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

    private void getElapsedTime(int currentCountDown) {
        elapsedTime = COUNTDOWN_TIME - currentCountDown;
    }
}
