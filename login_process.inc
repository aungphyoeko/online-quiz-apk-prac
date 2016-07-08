<?php
include 'database/databaseconnect.inc';
connect_to_db();
$sql = 'SELECT * FROM students_login WHERE email = "'.$_POST['email'].'" ';
$result = $db->query($sql);
if($result->num_rows ==1){
	$row = $result->fetch_assoc();
	if($_POST['password']==$row['pass']) setcookie('online-quiz-apk',$row['id'].','.$row['name']);
}else{
	setcookie('online-quiz-apk','0,guest');
}
?>