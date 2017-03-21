<html>
<head>
    <title>Hello!</title>
</head>

    <body>
    hallo ifs 11 d

<table border='1' align="center">
    <tr>
<?php
$Endwert = 120;
$primzahl = true;

for ($Zahl>=2; $Zahl <= $Endwert; $Zahl++)
{
    if ($Zahl % (Teiler > 2))
        $Farbe="#FFFF66";
    else
        $Farbe = "#6495ed";

    {

        echo "<td align = 'center' bgcolor='".$Farbe."'>";
        echo $Zahl;
        echo "</td>";
    }

    if ($Zahl % 10 == 0 and  $Zahl < $Endwert)
        echo "</tr> <tr>";

}
?>
    </>
</table>

</body>

</html>