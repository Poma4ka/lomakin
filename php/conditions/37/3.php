<?php
    $day = 33;
	if ($day > 0 and $day < 11) {
		echo 'первая декада'; }
    elseif ($day > 10 and $day < 21) {
        echo 'вторая декада'; }
    elseif ($day > 20 and $day < 32) {
        echo 'третья декада'; }
    else ($day < 0 and $day > 31) {
        echo 'неверное число'; }
?>