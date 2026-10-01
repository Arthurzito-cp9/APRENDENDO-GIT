/*
 * Nome: Arthur Gameleira da Costa
 * Número de Matrícula: 605321
 * Data Atual: 25/09/2026
 * Ambiente / Ferramenta Utilizada: Dev-C++
 */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float media_ponderada, soma_pesos;

    /* Leitura das notas e pesos */
    printf("Introduza a primeira nota e o seu peso (separados por espaco): ");
    scanf("%f %f", &nota1, &peso1);

    printf("Introduza a segunda nota e o seu peso (separados por espaco): ");
    scanf("%f %f", &nota2, &peso2);

    printf("Introduza a terceira nota e o seu peso (separados por espaco): ");
    scanf("%f %f", &nota3, &peso3);

    /* Cálculo da média ponderada */
    soma_pesos = peso1 + peso2 + peso3;
    
    if (soma_pesos != 0) {
        media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / soma_pesos;
        printf("\nA media ponderada e: %.2f\n", media_ponderada);
    } else {
        printf("\nErro: A soma dos pesos nao pode ser zero.\n");
    }

    return 0;
}
