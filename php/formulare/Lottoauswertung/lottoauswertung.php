
<?php
echo "Auswertung";
var_dump($_POST);


/*

for ($lfdnr= 0 ;$lfdnr <= 7 ;  $lfdnr ++){


// Array erstellen
$Getippt = array();


// Schleife
for($i=0; $i<7; $i++)
{
    // Eine Zahl zwischen 1 und 49
    $Tipp = mt_rand(1,49);

    // Prüfen ob Zahl bereits vorhanden
    /* if (in_array($Getippt , $Tipp))
     {

         $i--;
     }

     else */
    {$Getippt[$i]= $Tipp;

    // Sortiert
    sort ($Getippt);
    }
?>

