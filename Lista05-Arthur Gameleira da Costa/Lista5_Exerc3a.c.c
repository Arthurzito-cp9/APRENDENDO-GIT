/*
 * Nome: Arthur Gameleira da Costa
 * Número de Matrícula: 605321
 * Data Atual: 30/09/2026
 * Ambiente / Ferramenta Utilizada: Dev-C++
 */
 
 #include <stdio.h>

int main() {
    int N;
    
    // Garante uma entrada válida (N > 0)
    do {
        printf("Digite um numero inteiro maior que zero (N): ");
        scanf("%d", &N);
    } while (N <= 0);

    int termo = 1;
    printf("Os %d primeiros termos da serie sao:\n", N);
    
    // Imprime os N primeiros termos
    int i;
for (i = 0; i < N; i++) {
    printf("%d ", termo);
    termo += 4; // A série avança de 4 em 4
}
    printf("\n");

    return 0;
}
