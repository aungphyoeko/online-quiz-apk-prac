<?php
require 'cookie.inc';
require 'page_processing.inc';
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="en"> 
<head>
	<title>Student Online Quiz</title>
	<?php include 'import.inc'; ?>
</head>
<body>

<?php
if($show_login_page):
	include 'login.inc';
elseif($show_dashboard_page):
	include 'dashboard.inc';
elseif($show_profile_page):
	include 'profile.inc';
elseif($show_setting_page):
	include 'setting.inc';
elseif($show_quiz_page):
	include 'quiz.inc';
endif;

?>
</body>
</html>