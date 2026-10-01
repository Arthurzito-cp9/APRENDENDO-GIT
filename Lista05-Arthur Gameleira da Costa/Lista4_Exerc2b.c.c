/*
 * Nome: Arthur Gameleira da Costa
 * Número de Matrícula: 605321
 * Data Atual: 25/09/2026
 * Ambiente / Ferramenta Utilizada: Dev-C++
 */

#include <stdio.h>
#include <math.h> /* Necessário para a função pow() */

int main() {
    /* Declaração de variáveis para números reais (float) */
    float num1, num2;

    printf("Introduza o primeiro numero real: ");
    scanf("%f", &num1);

    printf("Introduza o segundo numero real: ");
    scanf("%f", &num2);

    printf("\n--- Resultados ---\n");
    /* Utilizando %.2f para apresentar o resultado com duas casas decimais */
    printf("Soma: %.2f\n", num1 + num2);
    printf("Diferenca: %.2f\n", num1 - num2);
    printf("Multiplicacao: %.2f\n", num1 * num2);

    /* Verificação para evitar o erro de divisão por zero */
    if (num2 != 0.0) {
        printf("Divisao de ponto flutuante: %.2f\n", num1 / num2);
    } else {
        printf("Divisao de ponto flutuante: Erro (divisao por zero)\n");
    }

    /* A função pow() aceita e devolve valores em ponto flutuante (double) */
    printf("Potencia (%.2f elevado a %.2f): %.2f\n", num1, num2, pow(num1, num2));

    return 0;
}
