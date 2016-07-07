<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="en"> 
<head>
	<title>Student Online Quiz</title>
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/css/bootstrap.min.css">
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js"></script>
	<script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/js/bootstrap.min.js"></script>

	<link rel="stylesheet" href="http://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.6.3/css/font-awesome.min.css">
	
	<link rel="stylesheet" type="text/css" href="style.css"/>
</head>
<body>
<?php
include("database/databaseconnect.inc");
?>
<h1 class="text-center margin-top-100">Student Login</h1>
<div class="login-wrap">
	<h2 class="text-center"><span class="fa fa-users"></span></h2>
	<form role="form">
	<div class="form-group">
		<input type="email" class="form-control" placeholder="Email address" />
		<input type="password" class="form-control" placeholder="Password" />
	</div>
    <span class="fa fa-lock"></span>
    <button type="submit" class="btn btn-default">Submit</button>
	<span class="fa fa-check"></span>
  </form>
</div>

</body>
</html>