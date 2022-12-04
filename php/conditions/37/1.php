<?php
    $day = 5;
	if ($day > 0 and $day < 11) 
		echo 'первая декада';
    if ($day > 10 and $day < 21)
        echo 'вторая декада';
    if ($day > 20 and $day < 32)
        echo 'третья декада';
?>