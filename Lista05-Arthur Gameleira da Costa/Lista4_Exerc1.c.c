/*
 * Nome: Arthur Gameleira da Costa
 * Número de Matrícula: 605321
 * Data Atual: 25/09/2026
 * Ambiente / Ferramenta Utilizada: Dev-C++
 */

#include <stdio.h>

int main() {
    /* 
     * a) Declarando 2 variáveis inteiras, 2 variáveis reais e 2 variáveis do tipo caracter;
     * b) Atribuindo valores distintos e válidos a cada uma destas variáveis;
     */
    int int1 = 15;
    int int2 = 30;
    
    float real1 = 3.14f;
    float real2 = 9.81f;
    
    char char1 = 'A';
    char char2 = 'Z';

    /* 
     * c) Fazendo a troca dos valores das 2 variáveis inteiras e mostrando os valores 
     * das mesmas antes e depois da troca;
     */
    printf("--- Trocando valores inteiros ---\n");
    printf("Antes da troca : int1 = %d, int2 = %d\n", int1, int2);
    
    // Utilizando uma variável temporária para realizar a troca
    int temp = int1;
    int1 = int2;
    int2 = temp;
    
    printf("Depois da troca: int1 = %d, int2 = %d\n\n", int1, int2);

    /*
     * d) Tente atribuir variáveis de tipos distintos (umas às outras) e 
     * observe / informe o que acontece quanto tenta compilar o código do programa;
     * 
     * RESPOSTA:
     * Ao testar a atribuição de tipos distintos (ex: int1 = real1;), o código compila, 
     * mas ocorre uma conversão implícita de tipo (cast). Ao atribuir um 'float' a um 'int', 
     * a parte decimal é truncada (perdida). Dependendo do nível de rigorosidade do 
     * compilador no Dev-C++, ele pode gerar um "Warning" (aviso) informando sobre a 
     * possível perda de dados durante essa conversão. Atribuir um 'char' a um 'int' 
     * armazena o valor numérico correspondente na tabela ASCII.
     */

    /*
     * e) Descreva o que acontece quando se tenta fazer uma operação 
     * inválida (como uma divisão por Zero /0) em um programa C.
     * 
     * RESPOSTA:
     * Ao tentar compilar uma divisão explícita por zero com inteiros (ex: int x = 10 / 0;), 
     * o compilador exibe um Warning ("division by zero"). No entanto, o problema maior 
     * ocorre em tempo de execução: o programa sofre um travamento (crash) e é encerrado 
     * abruptamente pelo sistema operacional, geralmente lançando um erro de exceção de 
     * ponto flutuante (Floating point exception).
     */

    return 0;
}
