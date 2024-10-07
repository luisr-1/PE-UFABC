#include <stdio.h>

long long int fibonacci(int n);

int main() {
    printf("%lld\n", fibonacci(10));
    return 0;
}

long long int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;

    long long int actual = 1;
    long long int last = 1;
    long long int result = 0;

    for(int i = 3; i < n; i++) {
        result = actual + last;
        last = actual;
        actual = result;
    }

    return result;
}
