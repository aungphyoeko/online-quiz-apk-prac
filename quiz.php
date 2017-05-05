<?php
include 'navigation.php';
if(!isset($_GET['id'])) die("Quiz not found!");
$quizid = $_GET['id'];
include 'database/databaseconnect.php';
$quizdata = $db->query("SELECT * FROM question_list WHERE quiz_id = '$quizid' ");
if($quizdata->num_rows >0){
	while($quiz = $quizdata->fetch_assoc()){
		echo $quiz['question_msg'];
		$optionsdata = $db->query("SELECT * FROM options WHERE question_id = '$quiz[question_id]'");
		echo "<br/>";
		while($option = $optionsdata->fetch_assoc()){
			$answerdata = $db->query("SELECT * FROM answer_list WHERE answer_id = '$option[answer_id]'");
			$answer = $answerdata->fetch_assoc();
			echo $answer['answer_msg'];
			echo "<br/>";
		}
	}
}
else{
	die("Quiz not found!");
}
?>