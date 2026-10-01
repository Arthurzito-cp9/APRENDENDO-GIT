/*
 * Nome: Arthur Gameleira da Costa
 * Número de Matrícula: 605321
 * Data Atual: 25/09/2026
 * Ambiente / Ferramenta Utilizada: Dev-C++
 */

#include <stdio.h>
#include <math.h> /* Necessário para a função pow() */

int main() {
    int num1, num2;

    printf("Introduza o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Introduza o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("\n--- Resultados ---\n");
    printf("Soma: %d\n", num1 + num2);
    printf("Diferenca: %d\n", num1 - num2);
    printf("Multiplicacao: %d\n", num1 * num2);

    /* Verificação simples para evitar o erro de divisão por zero (testado no exercício 1) */
    if (num2 != 0) {
        printf("Divisao inteira: %d\n", num1 / num2);
        printf("Resto da divisao: %d\n", num1 % num2);
    } else {
        printf("Divisao inteira: Erro (divisao por zero)\n");
        printf("Resto da divisao: Erro (divisao por zero)\n");
    }

    /* A função pow() devolve um double, por isso convertemos para (int) para exibir o resultado inteiro */
    printf("Potencia (%d elevado a %d): %d\n", num1, num2, (int)pow(num1, num2));

    return 0;
}
