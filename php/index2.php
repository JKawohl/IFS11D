<head>
    <title>Hello!</title>
</head>

<body>
hallo ifs 11 d

<table border='1' align="center">
    <tr>
        <?php
        $Endwert = 100;
        $Teiler =2;
        $primzahl = true;


        for ($Zahl=1; $Zahl <=$Endwert; $Zahl++) {
            for ($Zahl = 1; $Zahl <= $Endwert && $Primzahl = true; $Zahl++) {

                if ($Zahl % $Teiler == 0)
                    $Farbe = "#FFFF66";
                else
                    {
                    $Farbe = "#6495ed";
                    }
                {
                    echo "<td align = 'center' bgcolor='" . $Farbe . "'>";
                    echo $Zahl;
                    echo "</td>";
                }

                if ($Zahl % 10 == 0 and $Zahl < $Endwert)
                    echo "</tr> <tr>";
            }
        }
        ?>
    </>
</table>
</body>

</html>