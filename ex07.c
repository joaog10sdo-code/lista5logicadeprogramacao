/* Exercicio 7 - Locadora: para cada 15 filmes retirados o cliente ganha uma locacao gratis.
   O procedimento recebe o vetor A (500 posicoes) e devolve o vetor de locacoes gratuitas. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 500

void locacoesGratis(int A[], int gratis[]) {
    int i;
    for (i = 0; i < TAM; i++)
        gratis[i] = A[i] / 15;
}

int main() {
    int A[TAM], gratis[TAM], i;

    /* Preenche o vetor com quantidades aleatorias de 0 a 100 filmes (simulando os dados de 2020) */
    srand(time(NULL));
    for (i = 0; i < TAM; i++)
        A[i] = rand() % 101;

    locacoesGratis(A, gratis);

    for (i = 0; i < TAM; i++)
        printf("Cliente %3d: %3d filmes retirados -> %d locacao(oes) gratis\n", i + 1, A[i], gratis[i]);

    return 0;
}
