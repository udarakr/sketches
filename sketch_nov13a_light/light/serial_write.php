<?php

if(isset($_POST['light_val'])){

	//set color 1 =red, 2 =yellow, 3 =green

	switch ($_POST['light_val']) {
    case 1:
        $color = "red";
        break;
    case 2:
        $color = "yellow";
        break;
    case 3:
        $color = "green";
        break;
}

	error_log("Writing....".$color);
	$comPort = "/dev/ttyACM0"; /*Update to the correct port */
	$fp =fopen($comPort, "w");
	fwrite($fp, $color); /* We are going to write "switch" */
	fclose($fp); 
}
?>
