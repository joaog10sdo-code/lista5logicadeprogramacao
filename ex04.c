/* Exercicio 4 - Funcao que calcula o volume de um cilindro circular
   V = PI * raio^2 * altura */
#include <stdio.h>

#define PI 3.1414592

float volumeCilindro(float altura, float raio) {
    return PI * raio * raio * altura;
}

int main() {
    float altura, raio;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Volume do cilindro: %.2f\n", volumeCilindro(altura, raio));
    return 0;
}
