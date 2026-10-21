/* Exercicio 5 - Funcao que calcula o volume de uma esfera
   V = (4/3) * PI * raio^3 */
#include <stdio.h>

#define PI 3.1414592

float volumeEsfera(float raio) {
    return (4.0 / 3.0) * PI * raio * raio * raio;
}

int main() {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    printf("Volume da esfera: %.2f\n", volumeEsfera(raio));
    return 0;
}
