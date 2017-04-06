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

    <input type="submit" name="btnBerechnen" value="Berechnen">
</form>
</body>
</html>