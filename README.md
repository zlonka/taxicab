# taxicab
search taxicab numbers : (a,b,c,d) / a^p + b^p = c^p + d^p
usage: taxicab p aMax
ex: taxicab 4 1000
comes in 2 versions :
 - PHP : slow but with unlimited numbers (thanks to gmp lib)
 - Visual C++ : fast but with limited numbers (i.e. a<7131 for p=5)
So far (09/2020) no taxicab number was found for p=5
