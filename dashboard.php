<?php 
	include 'navigation.php'; 
	require 'database/databaseconnect.php';
	$result = $db->query('SELECT * FROM `quiz_list`');
	$id = cookie_get('id');
?>
<div class="row no-gutter">
	<div class="col-xs-0 col-sm-0 col-md-2"></div>
	<div class="col-md-8" >
		<div class="panel panel-primary" >
			<div class="panel-heading"><h3>Avaliable Quiz List</h3></div>		
			<div class="panel-body">
			<table class="table table-striped quiz-list-table">
				<thead>
					<tr class="hidden-xs hidden-sm">
						<th>No.</th>
						<th>Quiz List</th>
						<th>Discription</th>
						<th>Score</th>
						<th>&nbsp;</th>
					</tr>
				</thead>
				<tbody>
<?php
if($result->num_rows>0){
	$i=0;
	while($row = $result->fetch_assoc()){
		switch($row['quiz_level']){
			case '1':
				$level = '<span class="btn btn-success">Easy</span>';break;
			case '2':
				$level = '<span class="btn btn-warning">Easy</span>';break;
			case '3':
				$level = '<span class="btn btn-danger">Easy</span>';break;
			default:
				$level = '<span class="btn btn-info"></span>';
		}
		$i++;
		$scoredata = $db->query("SELECT score,total FROM score WHERE student_id = '$id' AND quiz_id = '$row[quiz_id]' ");
		$scorerow= $scoredata->fetch_assoc();
		$total = (int) $scorerow['total'];
		$score = (int) $scorerow['score'];
		$percentage = ($score/$total) * 100;
?>
					<tr>
						<td class="hidden-xs col-xs-0 col-sm-0 col-md-1 col-lg-1"><?php echo $i;?>.</td>
						<td class="visible-xs-block visible-sm visible-md visible-lg col-xs-6 col-sm-2 col-md-2 col-lg-2"><span class="btn"><?php echo $row['quiz_name'];?></span></td>
						<td class="visible-xs-block visible-sm visible-md visible-lg col-xs-6 col-sm-2 col-md-2 col-lg-2 td-top-right"><?php echo $level;?></td>
						<td class="visible-xs-block visible-sm visible-md visible-lg col-xs-12 col-sm-5 col-md-5 col-lg-5" >
							<div class="progress progress-striped">
								<div class="progress-bar progress-bar-primary" style="width:<?php echo $percentage; ?>%" data-toggle="tooltip" data-placement="bottom" title="<?php echo $score.' out of '.$total; ?>"> Progress </div>
							</div>
						</td>
						<td class="visible-xs-block visible-sm visible-md visible-lg text-right col-xs-12 col-sm-2 col-md-2 col-lg-2"><button class="btn btn-primary" data-link="<?php echo $row['quiz_id'] ?>">Take quiz</button></td>
					</tr>
<?php
	}
}else{
	echo '<tr> <td colspan="5">No Quiz Avaliable</td></tr>';
}
?>					
				</tbody>
			</table>
			</div>
		</div>
	</div>
</div>
<script>
$(function(){
	$('[data-toggle="tooltip"]').tooltip();
	$("button.btn-primary").click(function(){
		location.assign("index.php?page=quiz&id="+$(this).data("link"));
	});
});
</script>
