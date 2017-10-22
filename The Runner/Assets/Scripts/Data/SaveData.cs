using UnityEngine;
using System.Collections.Generic;

// Stores the data if a player is dead
public class SaveData : MonoBehaviour
{
	// Srting is the player name and the bool shows if the player is alive
    public static Dictionary<string, bool> dead = new Dictionary<string, bool>();

	// Put all players into the dictionary with alive status
    public static void add(string player) {
		if (!dead.ContainsKey(player)) {
			dead.Add(player,false);
			print("add"+player);
		} 
    }

	// Set a player to dead
    public static void death(string player) {
        if (dead.ContainsKey(player)) {
            dead[player] = true;
			print("dead"+player);
        }
    }

	// Return if player is Dead
    public static bool isDead(string player)
    {
        if (dead.ContainsKey(player)) {
            return (dead[player] == true);
        }  
        return false;
    }

}
