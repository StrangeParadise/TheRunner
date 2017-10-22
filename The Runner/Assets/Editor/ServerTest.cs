using System.Collections;
using System.Collections.Specialized;
using System.Net;
using System.IO;
using System.Text;
using NUnit.Framework;
using System.Web;
using System.Net.NetworkInformation;
using UnityEngine;


[TestFixture]
public class ServerTest
{
    //Test the login server
    [Test]
    public void TestLogin() {
        string url = "http://www.wuxixiang.com/server/runnergame/login/login_test.php";
        HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
        HttpWebResponse response = (HttpWebResponse)request.GetResponse();

        using (Stream stream = response.GetResponseStream())
        {
            StreamReader reader = new StreamReader(stream, Encoding.UTF8);
            string responseString = reader.ReadToEnd();
            Assert.NotNull(responseString);
        }
    }

    //Test the chat server download function
    [Test]
    public void TestChatD()
    {
        string url = "http://www.wuxixiang.com/server/runnergame/login/chat_download.php";
        HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
        HttpWebResponse response = (HttpWebResponse)request.GetResponse();

        using (Stream stream = response.GetResponseStream())
        {
            StreamReader reader = new StreamReader(stream, Encoding.UTF8);
            string responseString = reader.ReadToEnd();
            Assert.NotNull(responseString);
        }
    }

    //Test the chat server
    [Test]
    public void TestChatC()
    {
        string url = "http://www.wuxixiang.com/server/runnergame/login/chat_db_communication.php";
        HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
        HttpWebResponse response = (HttpWebResponse)request.GetResponse();

        using (Stream stream = response.GetResponseStream())
        {
            StreamReader reader = new StreamReader(stream, Encoding.UTF8);
            string responseString = reader.ReadToEnd();
            Assert.NotNull(responseString);
        }
    }

}