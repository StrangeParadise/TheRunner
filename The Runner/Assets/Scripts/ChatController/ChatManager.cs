using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class ChatManager : MonoBehaviour
{
    public GameObject textFieldUI;
    public GameObject outputFieldUI;


    private Text textField;
    private Text outputField;

    public string output = "";
    public string text = "";

    void OnGUI()
    {
        textField = textFieldUI.GetComponent<Text>();
        outputField = outputFieldUI.GetComponent<Text>();
	}

    public void Send()
    {

		string username = "test3";
        
        if (textField.text != "") {
            WWWForm form = new WWWForm();
            form.AddField("username", username);
            form.AddField("line", textField.text);
            form.AddField("f_included", 1);
            WWW w = new WWW("http://www.wuxixiang.com/server/runnergame/login/chat_db_communication.php", form);
            textField.text = "";

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
        Debug.Log(finalOutput);

	}

}