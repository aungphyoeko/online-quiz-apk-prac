<?php
$show_login_page = true;
$show_dashboard_page = false;
$show_profile_page=false;

if(isset($_POST['loginformsubmitted'])):
	include 'login_process.inc';
	if(cookie_get('id')!=0):
		$show_login_page=false;
		$show_dashboard_page = true;
elseif (isset($_GET['page'])) :
	switch($_GET['page']){
		case 'logout':
			setcookie('online-quiz-apk','',-1000); break;
		case 'profile':
			$show_profile_page=true;
	}
		
endif;
?>