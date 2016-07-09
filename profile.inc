<?php
include 'navigation.inc';
require 'personal_info_box.inc';
require 'database/databaseconnect.inc';
$sql = 'SELECT name,email,dob,pref,address FROM students_login WHERE id='.cookie_get('id');
$result = $db->query($sql);
$db->close();
if($result->num_rows==1) $personal_data = $result->fetch_assoc();
else die("Cannot connect to database.");
$dob = explode('-',$personal_data['dob']);
krsort($dob);
$dob = implode('-',$dob);
?>
<div class="col-xs-0 col-sm-1 col-md-3 col-lg-3"></div>
<div class="personalinfo-cointainer col-xs-12 col-sm-10 col-md-6 col-lg-6">
	<h1 class="text-center user-caption">
		<span class="fa fa-user"></span>
	</h1>
	<h2>Personal Information :</h2>
	<form role="form">
		<?php
		$disabled = true;
			personal_info_name($personal_data['pref'],$personal_data['name']);
			personal_info_email($personal_data['email']);
			personal_info_dob($dob);
			personal_info_address($personal_data['address']);
		?>
		<div class="row no-gutter">
			<div class="col-sm-4 col-md-3 col-lg-2">
				<button type="button" class="btn btn-primary active btn-block">&nbsp;&nbsp;Update&nbsp;&nbsp;</button>
			</div>
			<div class="col-sm-4 col-md-6 col-lg-8">
			</div>
			<div class="col-sm-4 col-md-3 col-lg-2">
				<button type="button" class="btn btn-primary active btn-block">&nbsp;&nbsp;Edit&nbsp;&nbsp;</button>
			</div>
		</div>
	</form>
</div>
<script>
$(function(){
	$("ul.dropdown-menu li").click(function(){
		$(this).parent().parent().children("button").children("span").html($(this).children('a').html());
		$("#pref").val($(this).data('pref'));
	});
	$('form .input-group.date').datepicker({
		weekStart: 7,
		maxViewMode: 2
	});
});
</script>
<script>
function edit() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (xhttp.readyState == 4 && xhttp.status == 200) {
      document.getElementById("demo").innerHTML = xhttp.responseText;
    }
  };
  xhttp.open("POST", "demo_post2.asp", true);
  xhttp.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
  xhttp.send("fname=Henry&lname=Ford");
}
</script>
