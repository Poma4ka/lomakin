<?php
	$a = ['a' => 1, 'b' => 2, 'c' => 3];
    $a['a'] =  $a['a'] + 3;
    $a['b'] =  $a['b'] + 3;
    $a['c'] =  $a['c'] + 3;
    var_dump($a);
?>