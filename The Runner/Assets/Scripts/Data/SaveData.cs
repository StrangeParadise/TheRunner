using UnityEngine;
using System.Collections.Generic;

public class SaveData : MonoBehaviour
{
    public static Dictionary<string, bool> dead = new Dictionary<string, bool>();

    public static void add(string player) {
		if (dead.ContainsKey(player)) {
			dead.Add(player,false);
			print("add"+player);
		} 
    }

    public static void death(string player) {
        if (dead.ContainsKey(player)) {
            dead[player] = true;
			print("dead"+player);
        }
    }

    public static bool isDead(string player)
    {
        if (dead.ContainsKey(player)){
            return (dead[player] == true);
        }  
        return false;
    }

}
