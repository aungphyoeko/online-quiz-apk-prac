<?php
$show_login_page = true;
$show_dashboard_page = false;
$show_profile_page = false;
$show_setting_page = false;
$show_quiz_page = false;
if (isset($_GET['page'])) :
	$show_login_page=false;
	switch($_GET['page']){
		case 'logout':
			setcookie('online-quiz-apk','',-1000); 
			$show_login_page = true;
			break;
		case 'profile':
			$show_profile_page=true; 
			break;
		case 'setting':
			$show_setting_page=true; 
			break;
		case 'dashboard':
			$show_dashboard_page = true;
			break;
		case 'quiz':
			$show_quiz_page = true;
			break;
		case 'result':
			break;
		case 'login':
			$show_login_page=true;
			break;
		default:
			header('location:login/');
	}
elseif(cookie_get('id')!=0):
	$show_login_page=false;
	$show_dashboard_page = true;
else:
	header('location:login/');
endif;

?>