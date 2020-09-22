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
So far (09/2020), no taxicab number was found for p=5.
