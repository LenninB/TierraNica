
<?php

function validateEmail($email) 
{ 
if(preg_match("/^([a-zA-Z0-9])+([a-zA-Z0-9\._-])*@([a-zA-Z0-9_-])+([a-zA-Z0-9\._-]+)+$/",$email)) 
{ return true; } return false; 
} 
	
	require("connect_db.php");

	$username=$_POST['mail'];
	$pass=$_POST['pass'];

	if ( validateEmail ( $username )==true )
	{
	echo 'Buen formeto';
	exit(0);
	}
	else{
	echo 'Mal formato';
	exit(0);
	}

	
	

	$sql2=mysql_query("SELECT * FROM login WHERE email='$username'");
	if($f2=mysql_fetch_array($sql2)){
		if($pass==$f2['passadmin']){
			echo '<script>alert("BIENVENIDO ADMINISTRADOR")</script> ';
		
			echo "<script>location.href='http://www.google.com'</script>";
		
		}
	}




	$sql=mysql_query("SELECT * FROM login WHERE email='$username'");
	if($f=mysql_fetch_array($sql)){
		if($pass==$f['password']){
			header("Location:https://www.youtube.com");
		}else{
			echo '<script>alert("CONTRASEÑA INCORRECTA")</script> ';
		
			echo "<script>location.href='index.php'</script>";
		}
	}else{
		
		echo '<script>alert("ESTE USUARIO NO EXISTE, PORFAVOR REGISTRESE PARA PODER INGRESAR")</script> ';
		
		echo "<script>location.href='index.php'</script>";	

	}



		


?>