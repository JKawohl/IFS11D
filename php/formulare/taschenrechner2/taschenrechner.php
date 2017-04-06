<!DOCTYPE html>
<?php session_start() ?>


<?php
session_start();
var_dump($_POST);
var_dump($_SESSION);


$Ergebnis= $_POST[txtOperand1] + $_POST[txtOperand2];

echo "Ihr Ergebnis:" . $Ergebnis;


$Eingabe=$_SESSION[txtErgebnis];
$Operand1 = $_POST[txtOperand1];
$Operand2 = $_POST [txtOperand2];

//Zwischenspeichern


if (isset($_POST[btnZwischenspeichern]))
{
    $Save=$Ergebnis;

}

//Zwischenergebnis nach Operand1 übernehmen

if (isset($_POST[btnUebertrag]))
{
    $Operand1=$_POST[txtErgebnis];
}

if (isset($_POST[btnReset]))
{
    $_SESSION = array();
}


?>

<html>
<body>

<form method="post"
      action="">

    <table>
        <tr>
            <td>Operand 1</td>
            <td>+</td>
            <td>Operand 2 </td>
            <td> </td>
            <td>Ergebnis</td>
        </tr>
        <br>

        <tr>
            <td><input type="text" name="txtOperand1" size="5"
                       value="<?php echo $Operand1; ?>"></td>
            <td>+</td>
            <td><input type="text" name="txtOperand2" size="5"
                       value="<?php echo $Operand2; ?>"></td>
            <td>=</td>
            <td><input type ="text" name="txtErgebnis" size="6"
                       value="<?php echo $Ergebnis; ?>"></td>
    </table>

    <input type="submit" name="btnBerechnen" value="Berechnen"
           style="height:50px; width:150px" > <br>
    <input type="reset" name="btnreset" value="C"
           style="height:50px; width:150px" > <br>
    <input type ="submit" name="btnZwischenspeichern" value="M+"
           style="height:50px; width:150px" > <br>
    <input type ="submit" name="btnUebertrag" value="MR"
           style="height:50px; width:150px" > <br>
</form>
</body>
</html>