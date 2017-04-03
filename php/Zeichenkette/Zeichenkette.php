<?php


echo "Ihre Eingabe ".$_POST["txtZeichenkette"]."<br>";
echo "Sie haben insgesamt ";	
echo strlen($_POST["txtZeichenkette"]);
echo " Zeichen eingegeben";


for ($pos = 0; $pos < strlen ($_POST ["txtZeichenkette"]); $pos++)
{
	echo "<br> ".$_POST["txtZeichenkette"][$pos];
}



/*
Nur nach gesuchtem Zeichen suchen und anzahl des vorkommens des Zeichens.
*/ 














