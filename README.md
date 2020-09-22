# taxicab
search taxicab numbers : (a,b,c,d) / a^p + b^p = c^p + d^p<br/>
usage: taxicab p aMax<br/>
ex: taxicab 4 1000<br/>
comes in 2 versions :<br/>
 - PHP : slow but with unlimited numbers (thanks to gmp lib)<br/>
 - Visual C++ : fast but with limited numbers (i.e. a<7131 for p=5)<br/>
So far (09/2020) no taxicab number was found for p=5.
