<?php
include 'database/databaseconnect.php';
$sql = 'SELECT id,name,pass FROM students_login WHERE email = "'.$_POST['email'].'" ';
$result = $db->query($sql);
if($result->num_rows ==1){
	$user_data = $result->fetch_assoc();
	if($_POST['password']==$user_data['pass']){
		setcookie('online-quiz-apk',$user_data['id'].','.$user_data['name']);
		echo "success";
		die();
	}
}
echo "fail";
?>
