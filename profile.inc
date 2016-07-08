<?php
include 'navigation.inc';
?>
<div class="profile-cointainer col-xs-0 col-sm-1 col-md-3 col-lg-3">
</div>
<div class="profile-cointainer col-xs-12 col-sm-10 col-md-6 col-lg-6">
<h1 class="text-center user-caption"><span class="fa fa-user"></span></h1>
<form role="form">
	<label for="name">Email:</label>
	 <div class="input-group" >
		  <div class="input-group-btn">
			<button type="button" class="btn btn-default dropdown-toggle" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false"><span>&nbsp;</span><b class="caret"></b></button>
			<ul class="dropdown-menu">
			  <li data-pref="mr"><a href="#">Mr.</a></li>
			  <li data-pref="ms"><a href="#">Ms.</a></li>
			  <li data-pref="mrs"><a href="#">Mrs.</a></li>
			  <li role="separator" class="divider"></li>
			  <li data-pref="dr"><a href="#">Dr.</a></li>
			  <li data-pref="prof"><a href="#">Prof.</a></li>
			</ul>
		  </div><!-- /btn-group -->
		  <input type="text" class="form-control" name="name" id="name" placeholder="John Smith" >
		  <input type="hidden" name="pref" value="" id="pref" required>
		</div>
		
  <div class="form-group">
    <label for="email">Email:</label>
    <input type="email" class="form-control" name="email" id="email" placeholder="your_name@gmail.com">
  </div>
 
<div class="form-group">
<label for="dob">Date of birth</label>
<div class="input-group date">
  <input type="text" placeholder="mm/dd/yy" class="form-control" name="dob" id="dob" ><span class="input-group-addon"><i class="glyphicon glyphicon-th"></i></span>
</div>
 </div>
 
  <div class="form-group">
    <label for="address">Address :</label>
    <textarea class="form-control" placeholder="Your current address" name="address" id="address"></textarea>
  </div>
  
</form>
</form>
<script>
$(function(){
	$("ul.dropdown-menu li").click(function(){
		$(this).parent().parent().children("button").children("span").html($(this).children('a').html());
		$("#pref").val($(this).data('pref'));
	});
	$('.profile-cointainer form .input-group.date').datepicker({
		weekStart: 7,
		maxViewMode: 2
	});
});
</script>