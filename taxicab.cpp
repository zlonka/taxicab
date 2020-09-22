// taxicab.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
// search numbers (a,b,c,d) so that a^p + b^p = c^p + d^p
// ex : 59^4 + 158^4 = 133^4 + 134^4

#include <iostream>
#include <time.h>

#define TYP __int64

int main(int argc, char *argv[]){
    TYP nmax = 900;
    int p = 4;
    if (argc > 1) sscanf_s(argv[1], "%d", &p);
    if (argc > 2) sscanf_s(argv[2], "%llu", &nmax);
    TYP* t = (TYP*)malloc(nmax * sizeof(TYP));
    printf("Searching (a,b,c,d) / a^%d + b^%d = c^%d + d^%d and a,b,c,d<%llu\n", p, p, p, p, nmax);
    // printf("[sizeof(a)=%d]\n", sizeof(TYP));
    printf("precalc...");
    switch (p) {
    case 4:
        for (TYP a = 1; a < nmax; a++) {
            t[a] = a * a * a * a;
        }
        break;
    case 5:
        for (TYP a = 1; a < nmax; a++) {
            t[a] = a * a * a * a * a;
        }
        break;
    }
    printf("done.\n");
    
    int nbFound = 0;
    clock_t  t1, t2;
    t1 = clock();
    for (TYP a = 1; a < nmax; a++) {
        printf("%llu/%llu...%c", a, nmax, 13);
        for (TYP b = a + 1; b < nmax; b++) {
            TYP sum = t[a] + t[b];
            for (TYP c = a + 1; c < b; c++) {
                for (TYP d = c + 1; d < b; d++) {
                    if (t[d] + t[c] == sum) {
                        nbFound++;
                        printf("%llu^%d + %llu^%d = %llu^%d + %llu^%d = %llu + %llu = %llu + %llu = %llu\n", a, p, b, p, c, p, d, p, t[a], t[b], t[c], t[d], sum);
                    }
                    if (t[d] + t[c] > sum) break;
                }
            }
        }
    }
    t2 = clock();
    printf("Finito. %d solutions found (%.3lf s.).\n", nbFound, ((double)t2 - (double)t1) / CLOCKS_PER_SEC);
}

