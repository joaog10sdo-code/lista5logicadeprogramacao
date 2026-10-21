/* Exercicio 6 - Opcoes de pagamento de uma loja
   a) a vista com 10% de desconto
   b) em duas vezes (preco da etiqueta)
   c) de 3 ate 10 vezes com 3% de juros ao mes (somente compras acima de R$ 100,00) */
#include <stdio.h>
#include <math.h>

/* Imprime as opcoes, solicita a opcao desejada e retorna a opcao escolhida */
char menu() {
    char opcao;

    printf("\nOpcoes de pagamento:\n");
    printf("a) A vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preco da etiqueta)\n");
    printf("c) De 3 ate 10 vezes com 3%% de juros ao mes (compras acima de R$ 100,00)\n");
    printf("Escolha a opcao: ");
    scanf(" %c", &opcao);

    return opcao;
}

void aVista(float total) {
    printf("Total a vista com desconto: R$ %.2f\n", total * 0.90);
}

void duasVezes(float total) {
    printf("2 prestacoes de R$ %.2f (total R$ %.2f)\n", total / 2, total);
}

void parcelado(float total) {
    int n;
    float totalJuros;

    if (total <= 100.0) {
        printf("Opcao disponivel somente para compras acima de R$ 100,00.\n");
        return;
    }

    do {
        printf("Em quantas vezes (3 a 10)? ");
        scanf("%d", &n);
    } while (n < 3 || n > 10);

    totalJuros = total * pow(1.03, n);
    printf("%d prestacoes de R$ %.2f (total R$ %.2f)\n", n, totalJuros / n, totalJuros);
}

int main() {
    float total;
    char opcao;

    printf("Digite o total gasto: R$ ");
    scanf("%f", &total);

    opcao = menu();

    if (opcao == 'a' || opcao == 'A')
        aVista(total);
    else if (opcao == 'b' || opcao == 'B')
        duasVezes(total);
    else if (opcao == 'c' || opcao == 'C')
        parcelado(total);
    else
        printf("Opcao invalida!\n");

    return 0;
}
