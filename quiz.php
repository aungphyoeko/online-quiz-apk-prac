<?php
include 'navigation.php';
?>
<div class="row no-gutter">
	<div class="col-xs-0 col-sm-0 col-md-2"></div>
	<div class="col-md-8" >
		<?php
			if(!isset($_GET['id'])) die("Quiz not found!");
			$quizid = $_GET['id'];
			include 'database/databaseconnect.php';
			$quizdata = $db->query("SELECT * FROM question_list WHERE quiz_id = '$quizid' ");
			if($quizdata->num_rows >0)
			{
				while($quiz = $quizdata->fetch_assoc())
				{
		?>
	<div class="panel panel-primary" >
		<div class="panel-heading"><h4><?php echo $quiz['question_msg'];?></h4></div>		
		<div class="panel-body">
			<?php 
					$optionsdata = $db->query("SELECT * FROM options WHERE question_id = '$quiz[question_id]'");
					while($option = $optionsdata->fetch_assoc())
					{
						$answerdata = $db->query("SELECT * FROM answer_list WHERE answer_id = '$option[answer_id]'");
						$answer = $answerdata->fetch_assoc();
						echo "<input type='radio' name='$quiz[question_id]' value='$option[answer_id]' id='$option[answer_id]'/> &nbsp;<label for='$option[answer_id]'>";
						echo $answer['answer_msg'];
						echo '</label><br/>';
					}
			?>
		</div>
	</div>
		<?php	
				}
		?>
		<button type="button" class="btn btn-lg btn-warning col-xs-12 col-sm-5 col-md-4 col-lg-3 col-xl-2" data-action="cancel">I will try later</button>
		<div class="col-xs-12 col-sm-2 col-md-4 col-lg-6">&nbsp;</div>
		<button type="button" class="btn btn-lg btn-primary col-xs-12 col-sm-5 col-md-4 col-lg-3 col-xl-2" data-action="submit">Submit My Answers</button>
		<?php
			}else
			{
				die("Quiz not found!");
			}
		?>
	</div>
</div>
<script>
	$(function(){
		$('button').click(function(){
			if($(this).data('action')=='cancel')
			{
				location.assign('../dashboard/');
			}
			if($(this).data('action')=='submit')
			{
				
			}
		});
	});
</script>	