/* Exercicio 10 - Funcao que recebe a data de nascimento e apresenta a idade
   expressa em anos, meses e dias (em relacao a data atual do sistema). */
#include <stdio.h>
#include <time.h>

int diasNoMes(int mes, int ano) {
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0))
        return 29;
    return dias[mes - 1];
}

void calculaIdade(int dia, int mes, int ano) {
    time_t t = time(NULL);
    struct tm *hoje = localtime(&t);
    int diaAtual = hoje->tm_mday;
    int mesAtual = hoje->tm_mon + 1;
    int anoAtual = hoje->tm_year + 1900;
    int anos, meses, dias;

    dias = diaAtual - dia;
    meses = mesAtual - mes;
    anos = anoAtual - ano;

    /* "pega emprestado" os dias do mes anterior ao atual */
    if (dias < 0) {
        int mesAnterior = mesAtual - 1;
        int anoMesAnterior = anoAtual;
        if (mesAnterior == 0) {
            mesAnterior = 12;
            anoMesAnterior--;
        }
        dias += diasNoMes(mesAnterior, anoMesAnterior);
        meses--;
    }

    if (meses < 0) {
        meses += 12;
        anos--;
    }

    if (anos < 0) {
        printf("Data de nascimento no futuro!\n");
        return;
    }

    printf("Idade: %d ano(s), %d mes(es) e %d dia(s)\n", anos, meses, dias);
}

int main() {
    int dia, mes, ano;

    printf("Digite a data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12 || dia < 1 || dia > diasNoMes(mes, ano)) {
        printf("Data invalida!\n");
        return 0;
    }

    calculaIdade(dia, mes, ano);
    return 0;
}
