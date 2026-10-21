/* Exercicio 2 - Funcao que recebe um numero de 1 a 12 e imprime o mes e sua quantidade de dias */
#include <stdio.h>

void imprimeMes(int n) {
    char *meses[12] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho",
                       "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (n < 1 || n > 12) {
        printf("Numero invalido! Digite um valor entre 1 e 12.\n");
        return;
    }

    if (n == 2)
        printf("Mes: %s - %d dias (29 em ano bissexto)\n", meses[n - 1], dias[n - 1]);
    else
        printf("Mes: %s - %d dias\n", meses[n - 1], dias[n - 1]);
}

int main() {
    int n;

    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &n);
    imprimeMes(n);
    return 0;
}
