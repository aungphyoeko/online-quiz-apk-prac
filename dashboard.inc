<nav class="navbar navbar-default" role="navigation">
	<div class="navbar-header"><a href="#" class="navbar-brand">Home</a></div>
	<div>
		<ul class="nav navbar-nav">
			<li><a href="#">Start Quiz</a></li>
			<li><a href="#">View Result</a></li>
		</ul>
		<ul class="nav navbar-nav navbar-right">
		<li class="dropdown"><a href="#" class="dropdown-toggle" >Welcome <?php echo cookie_get('name'); ?><span class="caret"></span>&nbsp;&nbsp;</a>
				<ul class="dropdown-menu">
					<li><a href="#" id="profile">Profile</a></li>
					<li class="divider"></li>
					<li><a href="#" id="password">Change Password</a></li>
					<li class="divider"></li>
					<li><a href="#" id="logout">Logout</a></li>
				</ul>
		</li>
		</ul>
	</div>
</nav>

<br/>
<div class="row">
	<div class="col-xs-0 col-sm-0 col-md-2"></div>
	<div class="col-md-8" >
	<table class="table table-striped">
		<caption class="text-center"><h3>Avaliable Quiz List</h3></caption>
		<thead>
			<tr>
				<th>No.</th>
				<th>Quiz List</th>
				<th>Discription</th>
				<th>Progress</th>
				<th>&nbsp;</th>
			</tr>
		</thead>
		<tbody>
			<tr>
				<td>1.</td>
				<td>Quiz 1</td>
				<td class="btn btn-success">Easy</td>
				<td>
				<div class="progress progress-striped">
					<div class="progress-bar progress-bar-info" style="width:80%"></div>
				</div>
				</td>
				<td class="text-right"><button class="btn btn-info">Take quiz</button></td>
			</tr>
		</tbody>
	</table>
	</div>
</div>

<form action="index.php" method="get">
<input type="hidden" name="page" value="" id="page">
</form>
<script>
$(function(){
	$("#logout").click(function(){
		$("#page").val('logout');
		$("#page").parent().submit();
	});
});
</script>