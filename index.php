<?php
include('cookie.inc');
?>
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
$show_login_page = true;
$show_dashboard_page = false;
?>

<?php
if(isset($_POST['loginformsubmitted'])):
	include("login_process.inc");
	if($is_login_approved==true):
		$show_dashboard_page=true;
		$show_login_page=false;
	endif;
endif;

if($show_login_page):
	include("login.inc");
elseif($show_dashboard_page):
	include("dashboard.inc");
endif;

?>
</body>
</html>