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
$Getippt = array();
for ($lfdnr= 0 ;$lfdnr <= 0 ;  $lfdnr ++)
{
/*
// Schleife
for($i=0; $i<6; $i++)
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

}

?>


<table border= 1px align="center">
    <tr>
        <?php
        for($i=0; $i<7; $i++) {
            echo "<td align = 'center' bgcolor='aqua'>";
            echo $Tipp;
            echo "</td>";
        }
        ?>
    </tr>
</table>

<table border= 1px; >
    <tr>
        <?php
        for ($k = 1; $k <= 49; $k++)
        {
            $istda= false;
            for ($m = 0; $m <=5; $m++ )
            {
                if ($k ==$Getippt [$m])
                {
                $istda = true;
                }
            }

            if ($istda)
            {
                echo "<td bgcolor = 'red'; >";
                echo $k;
                echo "</td>";
            }
            else
            {
                echo "<td>";
                echo $k;
                echo "</td>";
            }

            if ( ($k % 7)== 0)
            {
                echo "</tr> <tr>";
            }
        }

        ?>
    </tr>
</table>

<form method="post"
action="lottoauswertung.php">

Bitte geben Sie Ihren Tipp ein : 
<input type ="text" name="txtNr1" size=2>
<input type ="text" name="txtNr2" size=2>
<input type ="text" name="txtNr3" size=2>
<input type ="text" name="txtNr4" size=2>
<input type ="text" name="txtNr5" size=2>
<input type ="text" name="txtNr6" size=2>
<input type ="text" name="txtNr7" size=2>
<br>
<input type ="submit" name="btnTippSenden" value="Tipp senden">
<input type="reset" value="Tipp löschen">
</form>
</body>
</html>