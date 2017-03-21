<head>
    <title>Hello!</title>
</head>

<body>
hallo ifs 11 d

</br>
<table border='1' align="center">
    <tr>
        <?php
        $Endwert = 120;
        $zaehler = 0;

        for ($Zahl=1; $Zahl <=120; $Zahl++)
        {

            $primz = true;
            $teiler =2;

            while (($teiler < $Zahl) && ($primz == true))
            {
              if ($Zahl % $teiler == 0)
                {
                    $primz = false;
                }

                $teiler = $teiler +1;
            }

            if ($primz  == true  && ($Zahl > 1))
            {
                $Farbe="#FFFF66";
                $zaehler ++;
            }
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
    </tr>
</table>

<center>
<?php
    echo  "Anzahl Primzahlen". $zaehler;
?>
</center>

</body>

</html>
