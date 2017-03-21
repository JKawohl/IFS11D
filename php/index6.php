<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8" />
    <title>Lottoziehung</title>
</head>
<body>
<h1>Lottozahlen</h1>


<?php
// Array erstellen
$Getippt = array(0,0,0,0,0,0,0);


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
    else*/
    {$Getippt[$i]= $Tipp;
    }

}
?>


<table border='1' align="center">
    <tr>
<?php
for($i=0; $i<7; $i++) {
    echo "<td align = 'center' bgcolor='aqua'>";
    echo $Getippt[$i];
    echo "</td>";
}
 ?>
    </tr>
</table>
</body>
</html>