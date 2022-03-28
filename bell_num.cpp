#include <iostream>

unsigned long binomial(unsigned long n, unsigned long k) { 
    if (k == 0 or k == n) {
        return 1;
    }
    return binomial(n - 1, k - 1) + binomial(n - 1, k);
}

unsigned long bell(unsigned long n) {

    if (n <= 1) {
        return 1;
    }

    unsigned long output = 0; 
    
    for (unsigned long k = 0; k <= n - 1; k++) {    

        output += (binomial(n-1, k) * bell(k));

    }
    return output;
}