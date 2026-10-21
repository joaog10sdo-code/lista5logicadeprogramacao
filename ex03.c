/* Exercicio 3 - Funcao que converte Fahrenheit para Celsius */
#include <stdio.h>

float fahrenheitParaCelsius(float f) {
    return (f - 32.0) * (5.0 / 9.0);
}

int main() {
    float f;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    printf("%.2f F = %.2f C\n", f, fahrenheitParaCelsius(f));
    return 0;
}
