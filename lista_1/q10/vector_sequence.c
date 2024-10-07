#include <stdint.h>
#include <stdio.h>

void readVector(int entry[], int size);
int min(int v[], int size);
int max(int v[], int size);
double media(int v[], int size);

int main() {
    printf("Digite a quantidade de itens que deseja inserir no vetor\n");
    int value;
    scanf("%d", &value);
    const int size = value;

    int entry[size];

    readVector(entry, size);

    printf("O minimo: %d\n", min(entry, size));
    printf("O maximo: %d\n", max(entry, size));
    printf("A media: %lf\n", media(entry, size));

    printf("Para a lista: ");
    for(int i = 0; i < size; i++) {
        printf("%d%c", entry[i], i < size - 1 ? ',' : '.');
    }

    return 0;
}

void readVector(int entry[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Insira o proximo valor da lista\n");
        scanf("%d", &entry[i]);
    }
}

int min(int v[], int size) {
    int min = INT16_MAX;
    for(int i = 0; i < size; i++) {
        if(v[i] < min)
            min = v[i];
    }

    return min;
}

int max(int v[], int size) {
    int max = INT16_MIN;
    for(int i = 0; i < size; i++){
        if(v[i] > max)
            max = v[i];
    }

    return max;
}

double media(int v[], int size) {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum += v[i];
    }

    return (double) (sum / size);
}
