/*
 * Nome: Arthur Gameleira da Costa
 * Número de Matrícula: 605321
 * Data Atual: 25/09/2026
 * Ambiente / Ferramenta Utilizada: Dev-C++
 */

#include <stdio.h>

int main() {
    int num1, num2;

    /* Ler os dois números */
    printf("Introduza o primeiro numero: ");
    scanf("%d", &num1);

    printf("Introduza o segundo numero: ");
    scanf("%d", &num2);

    /* Exibir os números antes da troca */
    printf("\n--- Antes da troca ---\n");
    printf("Numero 1: %d\n", num1);
    printf("Numero 2: %d\n", num2);

    /* 
     * Troca de valores sem variável auxiliar.
     * Exemplo lógico se num1 = 5 e num2 = 3:
     * Passo 1: num1 = 5 + 3 -> (num1 passa a ser 8)
     * Passo 2: num2 = 8 - 3 -> (num2 passa a ser 5, o valor original de num1)
     * Passo 3: num1 = 8 - 5 -> (num1 passa a ser 3, o valor original de num2)
     */
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    /* Exibir os números depois da troca */
    printf("\n--- Depois da troca ---\n");
    printf("Numero 1: %d\n", num1);
    printf("Numero 2: %d\n", num2);

    return 0;
}
