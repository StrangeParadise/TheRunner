using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NUnit.Framework;
using TheRunner.Tools;

[TestFixture]
public class UrlTest{

    //Test the GenerateUrl Tool
    [Test]
    public void GenerateUrlTest()
    {
        string correct;        string result;
        GameObject[] players;

        GameObject player0 = new GameObject();
        player0.AddComponent<PlayerMove>();
        player0.GetComponent<PlayerMove>().isSeeker = true;
        player0.GetComponent<PlayerMove>().name = "Ryner";
        player0.GetComponent<PlayerMove>().latitude = 30;
        player0.GetComponent<PlayerMove>().longitude = 35;

        players = new GameObject[1];
        players[0] = player0;
        correct = "&markers=color:red%7Clabel:R%7C30,35";
        result = TR_Toolbox.generateURL(players);
        Assert.AreEqual(result, correct);

        GameObject player1 = new GameObject();
        player1.AddComponent<PlayerMove>();
        player1.GetComponent<PlayerMove>().isSeeker = false;
        player1.GetComponent<PlayerMove>().name = "lanyu";
        player1.GetComponent<PlayerMove>().latitude = 35;
        player1.GetComponent<PlayerMove>().longitude = 40;

        players = new GameObject[2];
        players[0] = player0;
        players[1] = player1;
        correct = "&markers=color:red%7Clabel:R%7C30,35&markers=color:green%7Clabel:L%7C35,40";
        result = TR_Toolbox.generateURL(players);
        Assert.AreEqual(result, correct);

        GameObject player2 = new GameObject();
        player2.AddComponent<PlayerMove>();
        player2.GetComponent<PlayerMove>().isSeeker = false;
        player2.GetComponent<PlayerMove>().name = "zoran";
        player2.GetComponent<PlayerMove>().latitude = 32;
        player2.GetComponent<PlayerMove>().longitude = 42;

        players = new GameObject[3];
        players[0] = player0;
        players[1] = player1;
        players[2] = player2;
        correct = "&markers=color:red%7Clabel:R%7C30,35&markers=color:green%7Clabel:L%7C35,40&markers=color:green%7Clabel:Z%7C32,42";
        result = TR_Toolbox.generateURL(players);
        Assert.AreEqual(result, correct);
    }


    //Test the drawCircle Tool
    [Test]
    public void drawCircleTest()
    {
        string correct;        string result;        int range = 200;
        float latitudeO = 40;
        float longitudeO = 40;

        correct = "&path=color:blue%7Cfillcolor:yellow%7Cweight:4%7C40.0018,40%7C40.0018,40";
        result = TR_Toolbox.drawCircle(range, latitudeO, longitudeO, 360);
        Assert.AreEqual(result, correct);

        range = 100;
        latitudeO = 30;
        longitudeO = 30;
        correct = "&path=color:blue%7Cfillcolor:yellow%7Cweight:4%7C30.0009,30%7C30.00045,30.0009%7C29.99955,30.0009%7C29.9991,30%7C29.99955,29.9991%7C30.00045,29.9991%7C30.0009,30";
        result = TR_Toolbox.drawCircle(range, latitudeO, longitudeO, 60);
        Assert.AreEqual(result, correct);

        range = 1000;
        latitudeO = 30;
        longitudeO = 30;
        correct = "&path=color:blue%7Cfillcolor:yellow%7Cweight:4%7C30.00898,30%7C30.00884,30.0018%7C30.00844,30.00355%7C30.00778,30.00519%7C30.00688,30.00667%7C30.00577,30.00795%7C30.00449,30.00898%7C30.00307,30.00975%7C30.00156,30.01022%7C30,30.01037%7C29.99844,30.01022%7C29.99693,30.00975%7C29.99551,30.00898%7C29.99422,30.00795%7C29.99312,30.00667%7C29.99222,30.00519%7C29.99156,30.00355%7C29.99115,30.0018%7C29.99101,30%7C29.99115,29.9982%7C29.99156,29.99645%7C29.99222,29.99481%7C29.99312,29.99333%7C29.99422,29.99205%7C29.99551,29.99102%7C29.99693,29.99025%7C29.99844,29.98978%7C30,29.98963%7C30.00156,29.98978%7C30.00307,29.99025%7C30.00449,29.99102%7C30.00577,29.99205%7C30.00688,29.99333%7C30.00778,29.99481%7C30.00844,29.99645%7C30.00884,29.9982%7C30.00898,30";
        result = TR_Toolbox.drawCircle(range, latitudeO, longitudeO, 10);
        Assert.AreEqual(result, correct);

    }
}
