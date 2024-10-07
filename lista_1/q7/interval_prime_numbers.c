#include <stdio.h>

int isPrimeNumber(int a);
void printInInterval(int inferior_limit, int superior_limit);

int main() {
    int inferior_limit = 0, upper_limit = 0;

    printf("Insira o valor do limite inferior\n");
    scanf("%d", &inferior_limit);

    printf("Insira o valor do limite superior\n");
    scanf("%d", &upper_limit);

    printInInterval(inferior_limit, upper_limit);
    return 0;
}

int isPrimeNumber(int a) {
    if(a <= 1) return 0;
    if(a == 2) return 1;
    if(a % 2 == 0) return 0;

    for(int i = 3; i < a / 2; i += 2)
        if(a % i == 0) return 0;

    return 1;
}

void printInInterval(int inferior_limit, int superior_limit) {
    for(int i = inferior_limit; i <= superior_limit; i++) {
        if(isPrimeNumber(i) == 1)
            printf("%d\n", i);
    }
}
