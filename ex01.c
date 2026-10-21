/* Exercicio 1 - Funcao que recebe dois numeros e retorna o maior */
#include <stdio.h>

float maior(float a, float b) {
    if (a > b)
        return a;
    return b;
}

int main() {
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("O maior numero e: %.2f\n", maior(n1, n2));
    return 0;
}
