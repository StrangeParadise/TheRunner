using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using TheRunner.Data;

namespace TheRunner.Chat
{
    public class ChatManager : MonoBehaviour
    {

		// Two UIs one shows text and the other show the input bar
        public InputField textFieldUI;
        public GameObject outputFieldUI;


        private string text;
        private Text outputField;

        public string output = "";
        public string textLine = "";

		// Update frequency
        private float UPDATE_INTERVAL = 1.0f;
        private float updateCount = 0.0f;
        private bool needsUpdate = true;

        void OnGUI()
        {
			// Initialize textLine and outputField
            textLine = textFieldUI.GetComponent<InputField>().text;
            outputField = outputFieldUI.GetComponent<Text>();
        }

        void Update()
        {
            if (needsUpdate)
            {
                updateCount = UPDATE_INTERVAL;
                needsUpdate = false;
				// Download the chat history every UPDATE_INTERVAL time
                Download();
                return;
            }

            updateCount -= Time.deltaTime;
            if (updateCount <= 0.0f)
            {
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
			// If the input is not empty, upload the text input
            if (textLine != "")
            {
                WWWForm form = new WWWForm();
                form.AddField("username", PlayerDataManager.s_Instance.playerName);
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
            }
            else
            {
                Debug.Log(_w.error);
            }

        }

        private void OutputToScreen(string line)
        {
			// The process that the server send back the info to the screen
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
        }
    }
}