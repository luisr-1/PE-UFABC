#include <stdio.h>

int isPrimeNumber(int a);
void printN(int limit);

int main() {
    int limit;
    printf("Digite quantos numeros primos você quer que seja impresso na tela\n");
    scanf("%d", &limit);

    printN(limit);
    return 0;
}

int isPrimeNumber(int a) {
    if(a <= 1) return 0;
    if(a == 2) return 1;
    if(a % 2 == 0) return 0;

    for(int i = 3; i < a / 2; i += 2) {
        if(a % i == 0) return 0;
    }

    return 1;
}

void printN(int limit) {
    int count = 0;
    int n = count;
    do {
        if(isPrimeNumber(n) == 1) {
            printf("%d\n", n);
            count++;
        }
        n++;
    } while(count < limit);
}
