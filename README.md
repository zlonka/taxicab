# taxicab
search taxicab numbers : (a,b,c,d) / a^p + b^p = c^p + d^p<br/>
usage: <b>taxicab p aMax</b><br/>
ex: <b>taxicab 4 1000</b><br/>
For more info, go to <a href="https://en.wikipedia.org/wiki/Taxicab_number" target="_blank">Taxicab Wikipedia page</a>.<br/>
<br/>
comes in 2 versions :<ul>
<li>PHP : slow but with unlimited numbers (thanks to gmp lib)</li>
<li>Visual C++ : fast but with limited numbers (i.e. a<7131 for p=5)</li>
</ul>
<br/>
For p=3 : 1^3 + 12^3 = 9^3 + 10^3 = 1729 (discovered in 1657 by Bernard Frénicle de Bessy)<br/>
For p=4 : 7^4 + 239^4 = 157^4 + 227^4 = 3262811042<br/>
So far (09/2020), no taxicab number was found for p>=5.
