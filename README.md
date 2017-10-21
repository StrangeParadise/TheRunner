# Healthy-boys

The runner application is a 3d AR based application for mobile phone. （testing in IOS）. This is a game which similar to the traditional game “hide and seek”. A catcher will creating a room in our APP. The other player can join this game as runner. The same as old game, catcher need to allow other players have some time to hide in the game region.  (In our setting, game region is a circle with 200 meters radius long, it can be customize.) The catcher need to catch all the player to win the game. 

One Significant feature of our game is the AR function. The whole game is established in the AR camera view. When user look down in AR view that a map will appear in their game screen. When user look up in AR view that a compass will also appear in the game. When user holding phone in horizontal way that they can find other players in their screens. (As 3D models, which also synchronize with all the actions). There is also a build in chat function in the AR camera view. Player can use it in anytime if they want to chat with other users in the game.

# How to use

Make sure you have build in unity （the version is 5.6.2 or higher）
clone the whole repository to your own device
open the “The runner” project in the unity
login in your own account （setting the environment）
build in to your device

IMPORTATANT RIGHT NOW ONLY 4 AVAVAIBLE ACCOUNT SAVE IN THE SERVER
Account name ： Password
wxx：1234
zoran：1234
Ryner：1234
lanyu：1234

# Server 

This game have two different server， 
the first server is responsible for login ，store user information ， all the chat function.
The second server is responsible for all the game function nad gps location. 

# Self Evaluation

Open the editor tests ruuner （already build in unity 5.6.2）
select the particular test you would like to run
press the run to check the unit test for each function
