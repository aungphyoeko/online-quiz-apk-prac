<?php
function connect_to_db(){
	include("databasesetup.inc");
    @$db = mysqli_connect($host, $user,$password,$database) ;
	if($db->connect_errno){
	    echo "Failed to connect to MySQL: (" . $mysqli->connect_errno . ") " . $mysqli->connect_error;
	}
    return $db;
}
?>