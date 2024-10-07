#include <stdio.h>

int isPrimeNumber(int a);
void printPrimeNumbers();

int main() {
    printPrimeNumbers();
    return 0;
}

int isPrimeNumber(int a) {
    if(a <= 1) return 0;
    if(a == 2) return 1;
    if(a % 2 == 0) return 0;

    for(int i = 3; i < a / 2; i = i + 2)
        if(a % i == 0) return 0;

    return 1;
}

void printPrimeNumbers() {
    printf("Digite ate que numero deseja imprimir os numeros primos\n");

    int a = 0;
    scanf("%d", &a);

    for(int i = 0; i <= a; i++) {
        if (isPrimeNumber(i) == 1) {
            printf("%d\n", i);
        }
    }
}
