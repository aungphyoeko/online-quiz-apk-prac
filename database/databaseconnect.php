<?php
include("databasesetup.php");
$db;
@$db = mysqli_connect($host, $user,$password,$database) ;
if($db->connect_errno){
    die( "Failed to connect to MySQL: (" . $mysqli->connect_errno . ") " . $mysqli->connect_error);
}
if(isset($_REQUEST['func'])){
	if($_REQUEST['func']=='update'){
		if(updateSQL($_REQUEST['sql'])){
			echo "success";
		}else{
			echo "fail";
		}
		$db->close();
	}
}
function updateSQL($sql){
	global $db;
	if($db->query($sql)) return true;
	return false;
}

?>
