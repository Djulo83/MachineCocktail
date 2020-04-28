(function(){
	
	$(document).ready( function(){
		var cocktailName = ""; 
		$(".btn-fabriquer").click(function(){
			cocktailName = this.value;
		})
		$(".btn-fabriquer-ok").click(function(){
			console.log(cocktailName);
			var xhr = new XMLHttpRequest();
			xhr.open('POST', 'http://leodalloz.alwaysdata.net/test.php');
			xhr.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
			xhr.send('test=0&cocktail=' + cocktailName);

			$("#animation-valide").show();
			setTimeout(function(){
				$("#animation-valide").hide("slow");
			}, 2000);
		})
	});


}) ();