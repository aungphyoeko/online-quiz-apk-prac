<?php
if(isset($_POST['disabled'])){
	$disabled =true;
	if($_POST['disabled']=='false') $disabled = false;
	$personal_data['name'] = $_POST['name'];
	$personal_data['pref'] = $_POST['pref'];
	$personal_data['email'] = $_POST['email'];
	$personal_data['address'] = $_POST['address'];
	$dob  = str_replace(',','-',$_POST['dob']);
}
?>
<?php
function personal_info_name($pref,$name){
	global $disabled;
	switch(strtolower($pref)){
		case 'mr': $prefd = 'Mr.';break;
		case 'ms': $prefd = 'Ms.';break;
		case 'mrs': $prefd = 'Mrs.';break;
		case 'dr': $prefd = 'Dr.';break;
		case 'prof': $prefd = 'Prof.';break;
		default: $prefd = '&nbsp;&nbsp;&nbsp;';
	}
?>
	<div class="form-group">
		<label for="name">Name :</label>
		<div class="input-group" >
			<div class="input-group-btn ">
				<button type="button" class="btn btn-default <?php if($disabled) echo 'disabled'; else echo 'dropdown-toggle " data-toggle="dropdown'; ?>"><span><?php echo $prefd; ?></span><b class="caret"></b></button>
				<ul class="dropdown-menu">
					<li data-pref="mr"><a href="#">Mr.</a></li>
					<li data-pref="ms"><a href="#">Ms.</a></li>
					<li data-pref="mrs"><a href="#">Mrs.</a></li>
					<li role="separator" class="divider"></li>
					<li data-pref="dr"><a href="#">Dr.</a></li>
					<li data-pref="prof"><a href="#">Prof.</a></li>
				</ul>
			</div><!-- /btn-group -->
			<input type="text" class="form-control" name="name" id="name" placeholder="John Smith" <?php echo "value='$name'"; if($disabled)echo 'disabled'; ?>>
			<input type="hidden" name="pref" value="<?php echo $pref;?>" id="pref" required>
		</div>
	</div>
<?php
}
?>
<?php 
	function personal_info_email($email){
		global $disabled;
?>
		<div class="form-group">
			<label for="email">Email :</label>
			<input type="email" class="form-control" name="email" id="email" placeholder="your_name@gmail.com" <?php echo  "value = '$email'"; if($disabled)echo 'disabled'; ?> >
		</div>
<?php
	}
?>
<?php
	function personal_info_dob($dob){
		global $disabled;
?>
		<div class="form-group">
			<label for="dob">Date of birth :</label>
			<div class="input-group date">
				<input type="text" placeholder="mm/dd/yy" class="form-control" name="dob" id="dob"  value="<?php echo $dob.'"'; if($disabled)echo ' disabled'; ?> ><span class="input-group-addon <?php if($disabled)echo 'disabled'; ?>"><i class="glyphicon glyphicon-th"></i></span>
			</div>
		</div>
<?php	
	}
?>
<?php
	function personal_info_address($address){
		global $disabled;
?>
		<div class="form-group">
			<label for="address">Address :</label>
			<textarea class="form-control" <?php if($disabled)echo 'disabled'; ?> placeholder="Your current address" name="address" id="address"><?php echo $address; ?></textarea>
		</div>
<?php
	}
?>

<?php
personal_info_name($personal_data['pref'],$personal_data['name']);
personal_info_email($personal_data['email']);
personal_info_dob($dob);
personal_info_address($personal_data['address']);
?>