#include <stdio.h>

long long int factorial(int n);

int main() {
    printf("%lld\n", factorial(12));
    return 0;
}

long long int factorial(int n) {
    long long int result = 1;

    for(int i = n; i > 0; i--) {
       result *= i;
    }

    return result;
}
