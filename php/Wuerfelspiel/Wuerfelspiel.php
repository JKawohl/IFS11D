<?php
mt_srand(time());


echo "Anzahl Würfel: ".$_POST["txtWuerfelzahl"]."<br>";

for ( $k =0 ; $k < $_POST ["txtWuerfelzahl"] ; $k ++)
{
	$wuerfel = mt_rand(1,6);
	
	// Ausgabe Würfelbilder 
	echo "<td>";
	echo ("<img src='".$wuerfel.".gif'
		width= '72' height='71' />");
	echo "</td>";

	// Umbruch nach Würfen
}




//if ($Zufallszahl )
//	echo "Zeige Würfelbild 1";
//if $Zufallszahl show image
/*
// Hausaufgabe: Das Würfeln ohne Formular, die mehrfach läuft

Wenn die gerafe gewürfelte Zahl == 1 ist, echo zeige Würfelbild. 
if $variable [], (Mit variable, Switch case, und so ...

Umbruch  nach Würfen
Statistik 
Summe der Augenzahlen 
Durchschnitlliche Augenzahlen.


/*
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




*/



?>
