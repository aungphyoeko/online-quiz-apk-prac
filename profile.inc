<?php
include 'navigation.inc';
?>
<h1 class="text-center user-caption"><span class="fa fa-user"></span></h1>
<form role="form">
	<label for="name">Email:</label>
	 <div class="input-group" >
		  <div class="input-group-btn">
			<button type="button" class="btn btn-default dropdown-toggle" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false"><span>&nbsp;</span><b class="caret"></b></button>
			<ul class="dropdown-menu">
			  <li><a href="#">Mr.</a></li>
			  <li><a href="#">Ms.</a></li>
			  <li><a href="#">Mrs.</a></li>
			  <li role="separator" class="divider"></li>
			  <li><a href="#">Dr.</a></li>
			  <li><a href="#">Prof.</a></li>
			</ul>
		  </div><!-- /btn-group -->
		  <input type="text" class="form-control" name="name" id="name"/>
		</div>
		
  <div class="form-group">
    <label for="email">Email:</label>
    <input type="email" class="form-control" id="email">
  </div>
  <div class="form-group">
    <label for="pwd">Password:</label>
    <input type="password" class="form-control" id="pwd">
  </div>
  <div class="form-group">
    <label for="pwd">Password:</label>
    <input type="password" class="form-control" id="pwd">
  </div>
  
</form>
<script>
$(function(){
	$("ul.dropdown-menu li").click(function(){
		$(this).parent().parent().children("button").children("span").html($(this).children('a').html());
	});
	
});
</script>