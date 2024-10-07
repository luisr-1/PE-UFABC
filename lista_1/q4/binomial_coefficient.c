#include <stdio.h>
#include <unistd.h>

double binomial_coeff(int n, int k);
long long int factorial(int n);

int main() {
    printf("%f", binomial_coeff(5, 2));
    return 0;
}

double binomial_coeff(int n, int k) {
    return (double) (factorial(n)) / ((double) (factorial(k)) * (double) (factorial(n - k)));
}

long long int factorial(int n)  {
    long long int result = 1;

    for(int i = n; i > 0; i--)
        result *= i;

    return result;
}
