<nav class="navbar navbar-default" role="navigation">
	<div class="navbar-header"><a href="#" class="navbar-brand">Home</a></div>
	<div>
		<ul class="nav nav-pills navbar-nav">
			<li><a href="#">Start Quiz</a></li>
			<li><a href="#">View Result</a></li>
		</ul>
		<ul class="nav nav-pills navbar-nav navbar-right">
		 <li role="presentation" class="dropdown">
			<a class="dropdown-toggle" data-toggle="dropdown" href="#" role="button">
			Welcome <?php echo cookie_get('name'); ?><span class="caret"></span>&nbsp;&nbsp;</a>
					<ul class="dropdown-menu">
						<li><a href="#" id="profile">Profile</a></li>
						<li class="divider"></li>
						<li><a href="#" id="setting">Setting</a></li>
						<li class="divider"></li>
						<li><a href="#" id="logout">Logout</a></li>
					</ul>
			</li>
		</ul>
	</div>
</nav>
<form action="index.php" method="get">
<input type="hidden" name="page" value="" id="page">
</form>

<script>
$(function(){
	$("#logout").click(function(){
		$("#page").val('logout');
		$("#page").parent().submit();
	});
	$("#profile").click(function(){
		$("#page").val('profile');
		$("#page").parent().submit();
	});
	$("#setting").click(function(){
		$("#page").val('setting');
		$("#page").parent().submit();
	});
});
</script>
<br/>