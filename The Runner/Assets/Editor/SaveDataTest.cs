using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.IO;
using System.Text;
using NUnit.Framework;

[TestFixture]
public class SaveDataTest
{
    //Test the save data's add function
    [Test]
    public void TestAdd()
    {
        SaveData.add("Ryner");
        Assert.IsTrue(SaveData.isIn("Ryner"));

        SaveData.add("zoran");
        Assert.IsTrue(SaveData.isIn("zoran"));
    }

    //Test the save data's delete function
    [Test]
    public void TestDelete()
    {
        SaveData.add("lanyu");
        SaveData.delete("lanyu");
        Assert.IsFalse(SaveData.isIn("lanyu"));

        SaveData.add("wxx");
        SaveData.delete("wxx");
        Assert.IsFalse(SaveData.isIn("wxx"));
    }

    //Test the save data's death function
    [Test]
    public void TestDeath()
    {
        SaveData.add("Ryner");
        SaveData.death("Ryner");
        Assert.IsTrue(SaveData.isDead("Ryner"));

        SaveData.add("zoran");
        SaveData.death("zoran");
        Assert.IsTrue(SaveData.isDead("zoran"));
    }
}
