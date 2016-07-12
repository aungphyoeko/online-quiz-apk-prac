<?php include 'navigation.inc'; ?>
<div class="row no-gutter">
	<div class="col-xs-0 col-sm-0 col-md-2"></div>
	<div class="col-md-8" >
		<div class="panel panel-primary" >
			<div class="panel-heading"><h3>Avaliable Quiz List</h3></div>		
			<div class="panel-body">
			<table class="table table-striped quiz-list-table">
				<thead>
					<tr class="hidden-xs hidden-sm">
						<th>No.</th>
						<th>Quiz List</th>
						<th>Discription</th>
						<th>Progress</th>
						<th>&nbsp;</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td class="hidden-xs col-xs-0 col-sm-0 col-md-1 col-lg-1">1.</td>
						<td class="visible-xs-block visible-sm visible-md visible-lg col-xs-6 col-sm-2 col-md-2 col-lg-2"><span class="btn">Quiz 1</span></td>
						<td class="visible-xs-block visible-sm visible-md visible-lg col-xs-6 col-sm-2 col-md-2 col-lg-2 td-top-right"><span class="btn btn-success">Easy</span></td>
						<td class="visible-xs-block visible-sm visible-md visible-lg col-xs-12 col-sm-5 col-md-5 col-lg-5" >
							<div class="progress progress-striped">
								<div class="progress-bar progress-bar-primary" style="width:80%" > Progress </div>
							</div>
						</td>
						<td class="visible-xs-block visible-sm visible-md visible-lg text-right col-xs-12 col-sm-2 col-md-2 col-lg-2"><button class="btn btn-primary">Take quiz</button></td>
					</tr>
					<tr>
						<td class="hidden-xs col-xs-0 col-sm-0 col-md-1 col-lg-1">2.</td>
						<td class="visible-xs-block visible-sm visible-md visible-lg col-xs-6 col-sm-2 col-md-2 col-lg-2"><span class="btn">Quiz 2</span></td>
						<td class="visible-xs-block visible-sm visible-md visible-lg col-xs-6 col-sm-2 col-md-2 col-lg-2 td-top-right"><span class="btn btn-warning">Hard</span></td>
						<td class="visible-xs-block visible-sm visible-md visible-lg col-xs-12 col-sm-5 col-md-5 col-lg-5" >
							<div class="progress progress-striped">
								<div class="progress-bar progress-bar-primary" style="width:60%" > Progress </div>
							</div>
						</td>
						<td class="visible-xs-block visible-sm visible-md visible-lg text-right col-xs-12 col-sm-2 col-md-2 col-lg-2"><button class="btn btn-primary">Take quiz</button></td>
					</tr>
				</tbody>
			</table>
			</div>
		</div>
	</div>
</div>
