<?php
include 'database/databaseconnect.php';
$i=1;
$count = count($_POST);
echo '{"questions":[';
foreach($_POST as $question_id => $answer_id){
	$quizdata = $db->query("SELECT answer_id FROM question_list WHERE question_id = '$question_id' AND answer_id = '$answer_id' ");
	echo "{ \"question_id\": $question_id, \"answer_id\":$answer_id , \"score\": ";
	if($quizdata->num_rows==1){
		echo '1'; 
	}
	else
	{
		echo '0';
	}
	echo "}";
	if($i != $count) echo ",";
	$i++;
}
echo ']}';
?>