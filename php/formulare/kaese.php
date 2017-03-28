<?php

if(trim($_POST["txtName"])== "") 
{
	echo "Bitte geben Sie Ihren Namen ein";
	echo "<p> <a href=\"kaeseformular.html\"> zurück </a>";
}
   echo "Name: ".$_POST["txtName"]."<br>";
if(isset($_POST["chxCamenbert"])) echo "Ihr gewaehlter Kaese : Camenbert "; "<br>";	
if(isset($_POST["chxEmmentaler"])) echo "Ihr gewaehlter Kaese : Emmentaler "; "<br>";	
if(isset($_POST["chxEdamer"])) echo "Ihr gewaehlter Kaese : Edamer "; "<br>";	
if(isset($_POST["chxKraversal"])) echo "Ihr gewaehlter Kaese : Kraversal "; "<br>";	

echo "Wunsch: ".$_POST ["txtWunsch"]."<br>";
echo "Ihr Zahlungswunsch :" .$_POST ["optBezahlung"]. "<br>";

?>