# Lista 5 - Logica de Programacao (Funcoes em C)

| Arquivo | Exercicio |
|---|---|
| `ex01.c` | Maior entre dois numeros |
| `ex02.c` | Mes e quantidade de dias (1 a 12) |
| `ex03.c` | Conversao Fahrenheit -> Celsius |
| `ex04.c` | Volume do cilindro (V = PI * r^2 * h) |
| `ex05.c` | Volume da esfera (V = 4/3 * PI * r^3) |
| `ex06.c` | Opcoes de pagamento (a vista, 2x, 3 a 10x com juros) |
| `ex07.c` | Locadora: locacoes gratis a cada 15 filmes (vetor de 500) |
| `ex08.c` | Trocas na matriz 10x10 (linhas, colunas e diagonais) |
| `ex09.c` | Soma das colunas da matriz 61x10 na 61a linha |
| `ex10.c` | Idade em anos, meses e dias a partir da data de nascimento |

PI = 3.1414592, conforme o enunciado.

## Como compilar e executar

```bash
gcc ex01.c -o ex01 -lm
./ex01
```

(`-lm` e necessario no `ex06.c` por causa da funcao `pow`.)
