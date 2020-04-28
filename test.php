<?php 
 header("Access-Control-Allow-Origin: *");


if(isset($_POST['test']))
{
	$var = file_get_contents("ListeCocktail.txt");
	$file = fopen("ListeCocktail.txt", "wb");
	$test = $_POST['test'];

	if( $test == 1)
	{
		$var = explode(" ", $var);
		echo($var[0]);
		array_shift($var);
		fwrite($file, implode(" ", $var));
	}

	else if( $test == 0 AND isset($_POST['cocktail']) AND $_POST['cocktail'] != "")
	{
		$var = $var . $_POST['cocktail'] . " ";
		fwrite($file, $var);
		header('Location: http://leodalloz.alwaysdata.net/index.html');
	}
}


