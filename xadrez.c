#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 0, rainha = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentos do Bispo::\n");
    // Estrutura de Repeticao While para os movimentos do Bispo:
    while (bispo < 5) {
        printf("Bispo: 1 casa para a Cima-Direita (Casa:%d)\n", bispo + 1);
        bispo++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentos da Torre:\n");
    // Estrutura de Repeticao For para os movimentos da Torre:
    for (int torre = 0; torre < 5; torre++)
    {
        printf("Torre: 1 casa para a Direita (Casa:%d)\n", torre + 1);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentos da Rainha:\n");
    // Estrutura de Repeticao Do-While para os movimentos da Rainha:
    do {
        printf("Rainha: 1 casa para Esquerda (Casa:%d)\n", rainha + 1);
        rainha++;
    } while(rainha < 8);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
