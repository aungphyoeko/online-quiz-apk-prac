<h1 class="text-center margin-top-100">Student Login</h1>
<div class="login-wrap">
	<h2 class="text-center"><span class="fa fa-users"></span></h2>
	<form role="form" data-toggle="validator" action="index.php" method="post">
	<div class="form-group">
		<input type="email" name="email" class="form-control" placeholder="Email address"  autofocus required/>
		<input type="password" name="password" class="form-control" placeholder="Password" />
		<input type="submit" class="form-control btn btn-info" value="Login"/>
		<input type="hidden" name="loginformsubmitted" value="true"/>
	</div>
	</form>
	<div class="login-footer">
		<span class="fa fa-lock"></span>&nbsp;&nbsp;
		<a href="#">Forgot password?</a>&nbsp;&nbsp;&nbsp;
		<span class="fa fa-check"></span>&nbsp;
		<a href="#">Sign Up</a>
	</div>
</div>