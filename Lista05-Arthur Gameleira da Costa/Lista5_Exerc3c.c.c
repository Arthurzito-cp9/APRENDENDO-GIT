/*
 * Nome: Arthur Gameleira da Costa
 * Número de Matrícula: 605321
 * Data Atual: 30/09/2026
 * Ambiente / Ferramenta Utilizada: Dev-C++
 */
 
 #include <stdio.h>

int main() {
    int total_mercadorias;
    float valor_mercadoria, valor_total = 0.0, media_valor = 0.0;

    printf("Digite o numero total de mercadorias no estoque: ");
    scanf("%d", &total_mercadorias);

    // Leitura do valor de cada mercadoria
    // Leitura do valor de cada mercadoria
    int i;
    for (i = 1; i <= total_mercadorias; i++) {
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valor_mercadoria);
        valor_total += valor_mercadoria;
    }

    // Cálculo da média
    if (total_mercadorias > 0) {
        media_valor = valor_total / total_mercadorias;
    }

    printf("\nValor total em estoque: %.2f\n", valor_total);
    printf("Media de valor das mercadorias: %.2f\n", media_valor);

    return 0;
}
