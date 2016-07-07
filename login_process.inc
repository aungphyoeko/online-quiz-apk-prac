<?php
$is_login_approved = false;
include("database/databaseconnect.inc");
connect_to_db();
$sql = 'SELECT pass FROM students_login WHERE email = "'.$_POST['email'].'" ';
$result = $db->query($sql);
if($result->num_rows ==1){
	$row = $result->fetch_assoc();
	if($_POST['password']==$row['pass']) $is_login_approved = true;
}
?>