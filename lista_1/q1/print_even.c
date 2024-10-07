#include <stdio.h>

void printEvenNumbers();

int main() {
    printEvenNumbers();
    return 0;
}

void printEvenNumbers() {
    printf("Digite um numero para imprimir todos os numeros pares ate ele \n");

    int a;
    scanf("%d", &a);

    for(int i = 0; i <= a; i++) {
        if (i % 2 == 1) continue;
        printf("%d\n", i);
    }
}
