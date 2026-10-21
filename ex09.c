/* Exercicio 9 - Procedimento que recebe uma matriz 61x10, soma cada coluna
   (linhas 1 a 60) e armazena o resultado na 61a linha. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 61
#define COL 10

void somaColunas(int M[LIN][COL]) {
    int i, j;
    for (j = 0; j < COL; j++) {
        M[LIN - 1][j] = 0;
        for (i = 0; i < LIN - 1; i++)
            M[LIN - 1][j] += M[i][j];
    }
}

int main() {
    int M[LIN][COL], i, j;

    srand(time(NULL));
    for (i = 0; i < LIN - 1; i++)
        for (j = 0; j < COL; j++)
            M[i][j] = rand() % 10;

    somaColunas(M);

    for (i = 0; i < LIN; i++) {
        if (i == LIN - 1)
            printf("Soma:\n");
        printf("L%2d:", i + 1);
        for (j = 0; j < COL; j++)
            printf("%5d", M[i][j]);
        printf("\n");
    }
    return 0;
}
