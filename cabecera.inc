<!DOCTYPE html> 
<html lang="es"> 
<!-- La cabecera --> 
<head> 
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<meta charset="utf-8" /> 
<meta name="author" content="GrupoX" /> 
<meta name="keywords" content="HTML5, web" /> 
<title> FlicktriX </title>
<link rel="shortcut icon" type="image/x-icon" href="fotoprueba.ico">
<?php
 
 $aux="estilo.css";

 if(isset($_SESSION['usuario'])&&$_SESSION['usuario']=='teste1'){

    
    $aux="alternativo1.css";

 }
   


?>


<link rel="stylesheet" type="text/css" href="<?php echo $aux;?>"  media=screen>    
<link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Quicksand">
<link rel="stylesheet" type="text/css" href="imp.css"  media="print">

</head> 
