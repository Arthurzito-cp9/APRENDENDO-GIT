/*
 * Nome: Arthur Gameleira da Costa
 * Número de Matrícula: 605321
 * Data Atual: 30/09/2026
 * Ambiente / Ferramenta Utilizada: Dev-C++
 */
 
 #include <stdio.h>

int main() {
    int val1, val2, menor, maior;
    int soma = 0;
    int contador = 0;
    float media;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &val1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &val2);

    // Descobrir qual o maior e o menor valor digitado
    if (val1 < val2) {
        menor = val1;
        maior = val2;
    } else {
        menor = val2;
        maior = val1;
    }

    // Calcular a soma dos inteiros no intervalo
	int i;
	for (i = menor; i <= maior; i++) {
    soma += i;
    contador++;
}

    // Calcular e escrever a soma e a média
    if (contador > 0) {
        media = (float)soma / contador;
    } else {
        media = 0;
    }

    printf("Soma dos valores no intervalo: %d\n", soma);
    printf("Media dos valores no intervalo: %.2f\n", media);

    return 0;
}
