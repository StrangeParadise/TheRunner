<?php

    // o--------------------------------------------------------
    // | Chat function
    // o--------------------------------------------------------

    // These settings define where the server is located, and
    // which credentials we use to connect to that server.  
    
    $server   = "runnergame.wuxixiang.com";
    $s_username = "xixiangw";
    $s_password = "xindefengbao12";
    
    // This is a chat system which basically uses insert to add line to 
    // server and download the whole databse from server to make the chat
    // system works.
    
    $database = "runnergame";
    $table    = "default_chat_db";
    
    // These are the MySQL queries that we are going to use when
    // we store our new score, and return our top 10 players.

    $select   = "SELECT * FROM $table";

    // o--------------------------------------------------------
    // | Access database
    // o--------------------------------------------------------

    // Connect to the server with our settings defined above.
    
    $connection = mysql_connect($server, $s_username, $s_password);
    
    // These variables are sent from Unity, we access them via
    // $_POST and make sure to santitize the input to mysql.

    $username     = mysql_real_escape_string($_POST['username']);
    $line         = mysql_real_escape_string($_POST['line']);
    $f_included   = mysql_real_escape_string($_POST['f_included']);

    $insert   = "INSERT INTO $table (line_id, username, line, f_included) 
                 VALUES ('$line_id', '$username', '$line', '$f_included')";

    mysql_select_db($database, $connection);    
    mysql_query($insert, $connection);
    $result = mysql_query($select, $connection);
    
    while ($row = mysql_fetch_array($result)) {
        
        if ($row['line'] != "") {
        
            echo $row['line_id']   . "/";
            echo $row['username']  . "/";
            echo $row['line']      . "/";
            echo $row['f_included']. "/";

            $f_included = $row['f_included'];

        }
        
    }

    mysql_close($connection);
?>
