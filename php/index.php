<?php 
	$comPort = "/dev/ttyACM0";
	$fp =fopen($comPort, "w");
	fwrite($fp, "switch"); 
	fclose($fp);
?>
