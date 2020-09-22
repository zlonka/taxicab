<?php
$usage="usage: php ".$argv[0]." p nmax
ex: php taxicab.php 4 1000
search numbers (a,b,c,d) so that a^p + b^p = c^p + d^p
ex : 59^4 + 158^4 = 133^4 + 134^4
";
if (!isset($argv[2]) || substr($argv[1], 0, 2)=="-h") die($usage);
$p=1*$argv[1];
$nmax=1*$argv[2];

$nbFound=0;
$t1=microtime(true);
for($a=1;$a<$nmax;$a++){
	echo "$a/$nmax...".chr(13);
	$ap=gmp_pow($a, $p);
	for($b=$a+3;$b<$nmax;$b++){
		$bp=gmp_pow($b, $p);
		$sum=gmp_add($ap, $bp);
		for($c=$a+1;$c<$b;$c++){
			$delta=gmp_sub($sum, gmp_pow($c, $p));
			$d=gmp_root($delta, $p);
			if ($d<$c) break;
			if (gmp_pow($d, $p)==$delta){
				$nbFound++;
				echo "$a^$p + $b^$p = $c^$p + $d^$p = $sum\n";
			}
		}
	}
}
$t2=microtime(true);
echo "Finito. $nbFound solutions found (".number_format($t2-$t1, 3, ".", "")." s).\n"
?>
