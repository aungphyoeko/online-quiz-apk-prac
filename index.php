<?php
require 'cookie.php';
require 'page_processing.php';
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="en"> 
<head>
	<title>Student Online Quiz</title>
	<?php include 'import.php'; ?>
</head>
<body>

<?php
if($show_login_page):
	include 'login.php';
elseif($show_dashboard_page):
	include 'dashboard.php';
elseif($show_profile_page):
	include 'profile.php';
elseif($show_setting_page):
	include 'setting.php';
elseif($show_quiz_page):
	include 'quiz.php';
endif;

?>
</body>
</html>