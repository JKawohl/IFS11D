<?php
mt_srand(time());


echo "Anzahl Würfel: ".$_POST["txtWuerfelzahl"]."<br>";

for ( $_POST ["txtWuerfelzahl"]; $_POST ["txtWuerfelzahl"] <= 100 ; $_POST["txtWuerfelzahl"] ++)
{

	$wuerfel = mt_rand(1,6);
	switch($wuerfel)
	{
		case 1:
			echo "Würfel anzeigen 1";
			break;
		case 2:
			echo "Würfel anzeigen 2";
			break;
		case 3:
			echo "Würfel anzeigen 3";
			break;
		case 4:
			echo "Würfel anzeigen 4";
			break;
		case 5:
			echo "Würfel anzeigen 5";
			break;
		case 6:
			echo "Würfel anzeigen 6";
			break;
	}
}


/*	
//
	$switch ($Zufallszahl) {
		case 1:
			echo "Würfel anzeigen 1"
			break;
		case 2:
			echo "Würfel anzeigen 2"
			break;
		case 3:
			echo "Würfel anzeigen 3"
			break;
		case 4:
			echo "Würfel anzeigen 4"
			break;
		case 5:
			echo "Würfel anzeigen 5"
			break;
		case 6:
			echo "Würfel anzeigen 6"
			break;
	} 	
*/


//if ($Zufallszahl )
//	echo "Zeige Würfelbild 1";
//if $Zufallszahl show image
/*
// Hausaufgabe: Das Würfeln ohne Formular, die mehrfach läuft

Wenn die gerafe gewürfelte Zahl == 1 ist, echo zeige Würfelbild. 
if $variable [], (Mit variable, Switch case, und so ...
*/
?>
