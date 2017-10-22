<?php

    // o--------------------------------------------------------
    // | Input & Settings
    // o--------------------------------------------------------

    $registered = false;

    // These settings define where the server is located, and
    // which credentials we use to connect to that server.  
    
    $server   = "runnergame.wuxixiang.com";
    $s_username = "xixiangw";
    $s_password = "xindefengbao12";
    
    // This is the database and table we are going to access in
    // the mysql server. In this example, we assume that we have
    // the table 'highscores' in the database 'gamedb'.
    
    $database = "runnergame";
    $table    = "login_db";
    
    // These are the MySQL queries that we are going to use when
    // we store our new score, and return our top 10 players.
    
    $insert   = "INSERT INTO $table (game, player, score) 
                 VALUES ('$game', '$player', '$score')";

    $select   = "SELECT * FROM $table";

    // o--------------------------------------------------------
    // | Access database
    // o--------------------------------------------------------

    // Connect to the server with our settings defined above.
    
    $connection = mysql_connect($server, $s_username, $s_password);
    
    // These variables are sent from Unity, we access them via
    // $_POST and make sure to santitize the input to mysql.
    
    $username     = mysql_real_escape_string($_POST['username']);
    $password     = mysql_real_escape_string($_POST['password']);

    $result = mysql_select_db($database, $connection);    
    $result = mysql_query($insert, $connection);
    $result = mysql_query($select, $connection);
    
    while ($row = mysql_fetch_array($result)) {
        
        if ($row['username'] == $username) {
            $registered = true;
            if ($row['password'] == $password) {
                echo "Login Successfully :D ";
                break;
            } else {
                echo "Incorrect Password :( ";
                break;
            }  
        } 

    }

    if ($registered == false) {
        echo "No Username Found! :( ";
    }

    mysql_close($connection);
?>
