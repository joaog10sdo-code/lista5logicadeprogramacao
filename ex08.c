/* Exercicio 8 - Procedimento que recebe uma matriz A(10,10) e realiza as trocas:
   - linha 2 com a linha 8
   - coluna 4 com a coluna 10
   - diagonal principal com a secundaria
   - linha 5 com a coluna 10
   A matriz e passada por referencia, entao o procedimento devolve a matriz alterada. */
#include <stdio.h>

#define N 10

void imprimeMatriz(int A[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }
}

void trocas(int A[N][N]) {
    int i, aux, linha[N], coluna[N];

    /* linha 2 com a linha 8 (indices 1 e 7) */
    for (i = 0; i < N; i++) {
        aux = A[1][i];
        A[1][i] = A[7][i];
        A[7][i] = aux;
    }

    /* coluna 4 com a coluna 10 (indices 3 e 9) */
    for (i = 0; i < N; i++) {
        aux = A[i][3];
        A[i][3] = A[i][9];
        A[i][9] = aux;
    }

    /* diagonal principal com a secundaria */
    for (i = 0; i < N; i++) {
        aux = A[i][i];
        A[i][i] = A[i][N - 1 - i];
        A[i][N - 1 - i] = aux;
    }

    /* linha 5 com a coluna 10 (indices 4 e 9): copia ambas antes de trocar */
    for (i = 0; i < N; i++) {
        linha[i] = A[4][i];
        coluna[i] = A[i][9];
    }
    for (i = 0; i < N; i++) {
        A[4][i] = coluna[i];
        A[i][9] = linha[i];
    }
}

int main() {
    int A[N][N], i, j;

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            A[i][j] = i * 10 + j;

    printf("Matriz original:\n");
    imprimeMatriz(A);

    trocas(A);

    printf("\nMatriz alterada:\n");
    imprimeMatriz(A);
    return 0;
}
