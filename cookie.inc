<?php
if(!isset($_COOKIE['online-quiz-apk'])){
	setcookie('online-quiz-apk','0,guest');
}		
function cookie_get($value){
	$txt=explode(',',$_COOKIE['online-quiz-apk']);
	switch($value){
		case 'id':
			return $txt[0];
		case 'name':
			return $txt[1];
		default:
			return 'None';
	}
}
?>