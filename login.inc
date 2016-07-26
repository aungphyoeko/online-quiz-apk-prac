<div class="height-control visible-md visible-lg">&nbsp;</div>
<div class="login-wrap col-xs-10 col-sm-6 col-md-4 col-lg-3 col-xs-push-1 col-sm-push-3 col-md-push-4 col-lg-push-4">
	<h2 class="text-center"><span class="fa fa-users"></span></h2>
	<h3 class="text-center">Student Login</h2>
	<form role="form" data-toggle="validator" method="post" id="loginform">
	<div class="form-group" id="form">
		
		<input type="email" id="email" name="email" class="form-control" placeholder="Email address"  autofocus required/>
		<input type="password" id="password" name="password" class="form-control" placeholder="Password" />
		
		<input type="submit" class="form-control btn btn-info" value="Login"/>
		
	</div>
	</form>
	<div class="login-footer">
		<span class="fa fa-lock"></span>&nbsp;&nbsp;
		<a href="#">Forgot password?</a>&nbsp;&nbsp;&nbsp;
		<span class="fa fa-check"></span>&nbsp;
		<a href="#">Sign Up</a>
	</div>
</div>
<script>
$(function(){
	var div = "<div class='alert alert-danger fade in'><a href='#' class='close' data-dismiss='alert'>&times</a><strong>Incorrect Email or Password.</strong></div>";
	
	$("form").submit(function(e){
		e.preventDefault();
		$.post("login_process.inc",
		{
			email:$("#email").val(),
			password:$("#password").val()
		},
		function(result){
			if(result == "success") location.assign("index.php");
			else $("#password").after(div);
		}
		);
	});
});
</script>