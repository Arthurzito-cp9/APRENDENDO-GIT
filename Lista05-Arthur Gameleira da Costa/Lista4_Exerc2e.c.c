/*
 * Nome: Arthur Gameleira da Costa
 * Número de Matrícula: 605321
 * Data Atual: 25/09/2026
 * Ambiente / Ferramenta Utilizada: Dev-C++
 */

#include <stdio.h>

int main() {
    float base, altura, area;

    /* Leitura da base e altura */
    printf("Introduza o valor da base do triangulo (B): ");
    scanf("%f", &base);

    printf("Introduza o valor da altura do triangulo (H): ");
    scanf("%f", &altura);

    /* Cálculo da área conforme a fórmula pedida */
    area = (base * altura) / 2.0;

    /* Exibição do resultado */
    printf("\nA area do triangulo e: %.2f\n", area);

    return 0;
}
