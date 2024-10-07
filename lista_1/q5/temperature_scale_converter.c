#include <stdlib.h>
#include <stdio.h>

double convertTemperature(char option, double temperature);

int main() {
    printf("Informe a escala em que está a temperatura: \n\tFahrenheit (F)\n\tCelsius (C)\n");
    char option;
    scanf("%c", &option);

    printf("Tambem informe o valor da temperatura\n");
    double temperature;
    scanf("%lf", &temperature);

    printf("%.4lf°%c -> %.4lf°%c\n", temperature, option, convertTemperature(option, temperature), option == 'C' ? 'F' : 'C');
    return 0;
}

double convertTemperature(char option, double temperature) {
    double result = 0;

    switch (option) {
        case 'C':
            result = (double) ((temperature / 5) * 9) + 32;
            break;
        case 'F':
            result = (double) (temperature - 32) / 9 * 5;
            break;
        default:
            fprintf(stderr, "A opcao %c não está definida\n", option);
            exit(EXIT_FAILURE);
            break;
    }

    return result;
}
