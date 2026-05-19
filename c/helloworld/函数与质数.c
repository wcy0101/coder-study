#include <stdio.h>
int isPrime(unsigned n);

int main() {
    unsigned m;
    for(m = 0; m <= 20; m++) {
        if(m < 2)
            printf("%u is neither prime nor composite number.\n", m);
        else if(isPrime(m)==1)
            printf("%u is a prime number.\n", m);
        else
            printf("%u is a composite number.\n", m);
    }
    return 0;
}


int isPrime(unsigned n) {
    if(n <= 1) return 0;
    for(unsigned i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}