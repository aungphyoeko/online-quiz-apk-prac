<?php
include 'navigation.inc';
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
	<h2>Personal Information:</h2>
	<form role="form">
		<?php
		$disabled = true;
			require 'personal_info_box.inc';
		?>
	</form>
	<div class="row no-gutter">
		<div class="col-sm-4 col-md-3 col-lg-2">
			<button id="update" type="button" class="btn btn-primary active btn-block hidden">Update</button>
		</div>
		<div class="col-sm-4 col-md-6 col-lg-8">
		</div>
		<div class="col-sm-4 col-md-3 col-lg-2">
			<button id="edit" type="button" class="btn btn-primary active btn-block">&nbsp;&nbsp;Edit&nbsp;&nbsp;</button>
		</div>
	</div>
	
</div>
<script>
$(function(){
	$(document).ajaxComplete(function(){
		$("ul.dropdown-menu li").click(function(){
			$(this).parent().parent().children("button").children("span").html($(this).children('a').html());
			$("#pref").val($(this).data('pref'));
		});
		$('form .input-group.date').datepicker({
			weekStart: 7,
			maxViewMode: 2,
			format:'dd-mm-yyyy'
		});
	});
	$("#edit").click(function(){
		var ishidden = $("#update").hasClass("hidden");
		$.post(
			"personal_info_box.inc",
			{
				disabled: ishidden?"false":"true",
				pref:"<?php echo $personal_data['pref'];?>",
				name:"<?php echo $personal_data['name'];?>",
				email:"<?php echo $personal_data['email'];?>",
				dob:"<?php echo str_replace('-',',',$dob);?>",
				address:"<?php echo $personal_data['address'];?>"
			},
			function(result){
				$(".personalinfo-cointainer form").html(result);
				if(ishidden) $("#update").removeClass("hidden");
				else $("#update").addClass("hidden");
			}
		);
	});
	$("#update").click(function(){
		var name = $("#name").val();
		var email = $("#email").val();
		var pref = $("#pref").val();
		var dob = $("#dob").val();
		var address = $("#address").html();
		dob = dob.split("-");
		dob.reverse();
		dob = dob.join();
		$.post(
			"database/databaseconnect.inc",
			{
				func:"update",
				sql:"UPDATE students_login SET name='"+name+"', email='"+email+"', pref= '"+pref+"', address= '"+address+"',dob = '"+dob+"' WHERE id= <?php echo cookie_get('id');?>"
			},
			function(result){
				if(result =="success"){
					$(".personalinfo-cointainer").prepend(alertbox('success','Your profile data is now updated!'));
				}
				else{
					$(".personalinfo-cointainer").prepend(alertbox('danger','Sorry, your profile data cannot be updated!'));
				}
				$(document).scrollTop(0);
			}
		);
	});
	function alertbox(type,msg){
		var div = "<div class='alert alert-"+type+" alert-dismissable' ></button>";
		var btn = "<button class='close' data-dismiss='alert'>&times;</button>";
		return $(div).append(btn).append(msg);
	}
	
});
</script>
