<?php
function personal_info_name($pref,$name){
	global $disabled;
	$newuser = $pref!=''&& $name!=''?false:true;
	switch($pref){
		case 'mr': $pref = 'Mr.';break;
		case 'ms': $pref = 'Ms.';break;
		case 'mrs': $pref = 'Mrs.';break;
		case 'dr': $pref = 'Dr.';break;
		case 'prof': $pref = 'Prof.';break;
		default: $pref = '&nbsp;&nbsp;&nbsp;';
	}
?>
	<div class="form-group">
		<label for="name">Name :</label>
		<div class="input-group" >
			<div class="input-group-btn ">
				<button type="button" class="btn btn-default <?php if($disabled) echo 'disabled'; else echo 'dropdown-toggle " data-toggle="dropdown'; ?>"><span><?php echo $pref; ?></span><b class="caret"></b></button>
				<ul class="dropdown-menu">
					<li data-pref="mr"><a href="#">Mr.</a></li>
					<li data-pref="ms"><a href="#">Ms.</a></li>
					<li data-pref="mrs"><a href="#">Mrs.</a></li>
					<li role="separator" class="divider"></li>
					<li data-pref="dr"><a href="#">Dr.</a></li>
					<li data-pref="prof"><a href="#">Prof.</a></li>
				</ul>
			</div><!-- /btn-group -->
			<input type="text" class="form-control" name="name" id="name" placeholder="John Smith" <?php echo "value='$$name'"; if($disabled)echo 'disabled'; ?>>
			<input type="hidden" name="pref" value="" id="pref" required>
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