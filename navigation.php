<nav class="navbar navbar-inverse">
	<div class="container-fluid">
	<!-- Brand and toggle get grouped for better mobile display -->
		<div class="navbar-header">
			<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1" aria-expanded="false">
				<span class="sr-only">Toggle navigation</span>
				<span class="icon-bar"></span>
				<span class="icon-bar"></span>
				<span class="icon-bar"></span>
			</button>
			<a href="#" class="navbar-brand">Home</a>
		</div>

	<!-- Collect the nav links, forms, and other content for toggling -->
	<div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
		<ul class="nav nav-pills navbar-nav">
			<li><a href="#">Start Quiz</a></li>
		</ul>
		<ul class="nav nav-pills navbar-nav">		
			<li><a href="#">View Result</a></li>
			<li role="separator" class="divider"></li>
		</ul>

		<ul class="nav navbar-nav navbar-right">
			<li role="presentation" class="dropdown">
			<a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false">
			Welcome <?php echo cookie_get('name'); ?><span class="caret"></span>&nbsp;&nbsp;</a>
			<ul class="dropdown-menu">
				<li><a href="#" id="profile">Profile</a></li>
				<li role="separator" class="divider"></li>
				<li><a href="#" id="setting">Setting</a></li>
				<li role="separator" class="divider"></li>
				<li><a href="#" id="logout">Logout</a></li>
			</ul>
			</li>
		</ul> 
		</div><!-- /.navbar-collapse -->
	</div><!-- /.container-fluid -->
	<form action="index.php" method="get">
		<input type="hidden" name="page" value="" id="page">
	</form>
</nav>
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
	$(".navbar-brand").click(function(){
		$("#page").val('dashboard');
		$("#page").parent().submit();
	});
});
</script>
<br/>