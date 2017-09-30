using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class LoginGUI : MonoBehaviour {

	public string Username = "";
	public string Password = "";

	private string CreateUsername = "";
	private string CreatePassword = "";
	private string ConfirmPassword = "";
	private string PlayerEmail = "";

	public string CurrentGameMenu = "Login";

	public string MenuText = "";
	public string SecondMenuText = "";

	void OnGUI () {
		if(CurrentGameMenu == "Login"){
			Login();
		}else if (CurrentGameMenu == "CreateAccount") {
			CreateAccount ();
		}
	}
	void Login () {
		GUI.Label(new Rect(200, 250, 200, 25), "Enter your username:");
		Username = GUI.TextField(new Rect(200, 275, 200, 25), Username);

		GUI.Label(new Rect(200, 300, 200, 25), "Enter your password:");
		Password = GUI.TextField(new Rect(200, 325, 200, 25), Password);

		GUI.Label(new Rect(200, 350, 200, 25), MenuText);

		if(GUI.Button(new Rect(200, 375, 200, 25), "Login")){
			if(Username == "" || Password == ""){
				MenuText = "Please fill in all info";
			}else {
				WWWForm form = new WWWForm();
				form.AddField("username", Username);
				form.AddField("password", Password);
				WWW w = new WWW("http://www.wuxixiang.com/server/runnergame/login/login_test.php", form);
				StartCoroutine(Login(w));
			}
		}
		if(GUI.Button(new Rect(200, 400, 200, 25), "Create an account")){
			CurrentGameMenu = "CreateAccount";
		}
	}


	void CreateAccount () {
		GUI.Label(new Rect(200, 250, 200, 25), "Enter a username:");
		CreateUsername = GUI.TextField(new Rect(200, 275, 200, 25), CreateUsername);

		GUI.Label(new Rect(200, 300, 200, 25), "Enter a password:");
		CreatePassword = GUI.TextField(new Rect(200, 325, 200, 25), CreatePassword);

		GUI.Label(new Rect(200, 350, 200, 25), "Confirm password:");
		ConfirmPassword = GUI.TextField(new Rect(200, 375, 200, 25), ConfirmPassword);

		GUI.Label(new Rect(200, 400, 200, 25), "Enter your email:");
		PlayerEmail = GUI.TextField(new Rect(200, 425, 200, 25), PlayerEmail);

		GUI.Label(new Rect(200, 450, 200, 25), SecondMenuText);

		if(GUI.Button(new Rect(200, 475, 200, 25), "Create Account")){
			if(CreateUsername != "" || PlayerEmail != ""){
				if(CreatePassword == ConfirmPassword){
					WWWForm form = new WWWForm();
					form.AddField("CreateUsername", CreateUsername);
					form.AddField("ConfirmPassword", ConfirmPassword);
					WWW w = new WWW("http://???????????.dx.am/register.php", form);
					StartCoroutine(CreateAccount(w));
				}
			}  
		}
		if(GUI.Button(new Rect(200, 500, 200, 25), "Cancel Account Creation")){
			CurrentGameMenu = "Login";
		}
	}

	private IEnumerator Login(WWW _w) {
		yield return _w;
		if(_w.error == null){
			if(_w.text == "Login Successfully :D "){
				// Login sccessfully! 
				MenuText = "Login Successfully! Now Loading..";

				//Start to Load Game Scene
				loadGame ();

			}else {
				MenuText = _w.text;
			}
		}else {
			MenuText = "Error" + _w.error;
		}
	}

	private IEnumerator CreateAccount(WWW _w) {
		yield return _w;
		if(_w.error == null) {
			SecondMenuText = _w.text;
		}else {
			SecondMenuText = "Error" + _w.error;
		}
	}

	private void loadGame() {
		Debug.Log ("load game!");

		SceneManager.UnloadSceneAsync ("Scene/LoginScene");
		SceneManager.LoadScene("Scene/MainGameScene", LoadSceneMode.Single);
	}

	private IEnumerator loadGameAsync() {
		Debug.Log("about to load!");
		AsyncOperation a;
		a = SceneManager.LoadSceneAsync("Scene/MainGameScene");
		a.allowSceneActivation = false;
		while (!a.isDone)
		{
			Debug.Log("loading " +a.progress.ToString("n2"));
			yield return null;
		}
		Debug.Log("loaded!!");
		a.allowSceneActivation = true;
	
	}

}