using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class ChatManager : MonoBehaviour
{
<<<<<<< HEAD
    public InputField textFieldUI;
    public GameObject outputFieldUI;
    private Text outputField;

    public string output = "";
    public string textLine = "";

    private float UPDATE_INTERVAL = 1.0f;
    private float updateCount = 0.0f;
    private bool needsUpdate = true;

    // The static Player Data
    public GameObject IPlayerData;

    private void Start()
    {
        IPlayerData = GameObject.FindGameObjectWithTag("PlayerData");
    }

    void OnGUI()
    {
        textLine = textFieldUI.GetComponent<InputField>().text;
        outputField = outputFieldUI.GetComponent<Text>();
	}

    void Update() {
        
        if (needsUpdate) {
            updateCount = UPDATE_INTERVAL;
            needsUpdate = false;
            Download();
            return;
        }

        updateCount -= Time.deltaTime;
        if (updateCount <= 0.0f) {
            needsUpdate = true;
			
		}
    }

    public void Download() 
    {
        WWWForm form = new WWWForm();
        form.AddField("username", "fake_download_client");
        WWW w = new WWW("http://www.wuxixiang.com/server/runnergame/login/chat_download.php", form);

        StartCoroutine(ServerSend(w));
    }

    public void Send()
    {        
        if (textLine != "") {
            WWWForm form = new WWWForm();
            form.AddField("username", IPlayerData.GetComponent<PlayerData>().m_PlayerName);
            form.AddField("line", textLine);
            form.AddField("f_included", 1);
            WWW w = new WWW("http://www.wuxixiang.com/server/runnergame/login/chat_db_communication.php", form);

			textFieldUI.Select();
			textFieldUI.text = "";

            StartCoroutine(ServerSend(w));
        }
    }


    private IEnumerator ServerSend(WWW _w)
    {
        yield return _w;
        if (_w.error == null)
        {
            if (_w.text != "")
            {
                
                OutputToScreen(_w.text);
            }
            else
            {
                outputField.text = _w.error;
            }
        } else {
            Debug.Log(_w.error);
        }

	}

    private void OutputToScreen(string line) {

        string[] textList = line.Split('/');


        // formatting
        string finalOutput = "";

        for (int i = 0; i < textList.Length; i++)
        {
            if (i % 4 == 1)
            {
                finalOutput += "[" + textList[i] + "]: ";
            }
            else if (i % 4 == 2)
            {
                finalOutput += textList[i] + '\n';
            }
=======
	public InputField textFieldUI;
	public GameObject outputFieldUI;


	private string text;
	private Text outputField;

	public string output = "";
	public string textLine = "";

	private float UPDATE_INTERVAL = 1.0f;
	private float updateCount = 0.0f;
	private bool needsUpdate = true;

	// The static Player Data
	public GameObject IPlayerData;

	private void Start()
	{
		IPlayerData = GameObject.FindGameObjectWithTag("PlayerData");
	}

	void OnGUI()
	{
		textLine = textFieldUI.GetComponent<InputField>().text;
		outputField = outputFieldUI.GetComponent<Text>();
	}

	void Update() {

		if (needsUpdate) {
			updateCount = UPDATE_INTERVAL;
			needsUpdate = false;
			Download();
			return;
		}

		updateCount -= Time.deltaTime;
		if (updateCount <= 0.0f) {
			needsUpdate = true;
>>>>>>> 796633ddad4cfa1811d921b932dced905f3448d1

		}
	}

	public void Download() 
	{
		WWWForm form = new WWWForm();
		form.AddField("username", "fake_download_client");
		WWW w = new WWW("http://www.wuxixiang.com/server/runnergame/login/chat_download.php", form);

		StartCoroutine(ServerSend(w));
	}

<<<<<<< HEAD
        outputField.text = finalOutput;
=======
	public void Send()
	{        
		if (textLine != "") {
			WWWForm form = new WWWForm();
			form.AddField("username","test");
			form.AddField("line", textLine);
			form.AddField("f_included", 1);
			WWW w = new WWW("http://www.wuxixiang.com/server/runnergame/login/chat_db_communication.php", form);

			textFieldUI.Select();
			textFieldUI.text = "";

			StartCoroutine(ServerSend(w));
		}
	}


	private IEnumerator ServerSend(WWW _w)
	{
		yield return _w;
		if (_w.error == null)
		{
			if (_w.text != "")
			{

				OutputToScreen(_w.text);
			}
			else
			{
				outputField.text = _w.error;
			}
		} else {
			Debug.Log(_w.error);
		}

	}

	private void OutputToScreen(string line) {

		string[] textList = line.Split('/');


		// formatting
		string finalOutput = "";

		for (int i = 0; i < textList.Length; i++)
		{
			if (i % 4 == 1)
			{
				finalOutput += "[" + textList[i] + "]: ";
			}
			else if (i % 4 == 2)
			{
				finalOutput += textList[i] + '\n';
			}

		}

		outputField.text = finalOutput;
>>>>>>> 796633ddad4cfa1811d921b932dced905f3448d1
	}

}