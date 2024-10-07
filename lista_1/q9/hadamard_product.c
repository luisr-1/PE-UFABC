#include <stdio.h>

void hadamardProduct(double u[], double v[], double resultado[], int size);

int main() {
    const int size = 4;
    double u[] = {1,2,3,4};
    double v[] = {5,6,7,8};
    double resultado[size];

    hadamardProduct(u, v, resultado, size);

    for(int i = 0; i < size; i++) {
        printf("%lf\n", resultado[i]);
    }

    return 0;
}

void hadamardProduct(double u[], double v[], double resultado[], int size) {
    for(int i = 0; i < size; i++) {
        resultado[i] = u[i] * v[i];
    }
}
