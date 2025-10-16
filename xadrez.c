#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Recursividade da Torre:
void moverTorre()
{

    for (int torre = 0; torre < 5; torre++)
    {

        printf("Torre: 1 casa para Direita (Casa:%d)\n", torre + 1);

    }

}

// Recursividade do Bispo:
void moverBispo(int bispo)
{
    int bispoCima = 0, bispoDireita = 0;

    while(bispoCima < 5)
    {
        printf("Bispo: 1 casa para Cima-");
        bispoCima++;

        while(bispoDireita < bispoCima)
        {

            printf("Direira (Casa:%d)\n", bispoCima);
            bispoDireita++;
        }
    }

}

// Recursivida da Rainha:
void moverRainha(int rainha)
{

    do
    {

        printf("Rainha: 1 casa para Esquerda (Casa:%d)\n", rainha + 1);
        rainha++;

    }
    while(rainha < 8);

}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 0, rainha = 0;

    
    // Implementação de Movimentação do Bispo
    printf("Movimentos do Bispo::\n");
    // Estrutura de Repeticao While para os movimentos do Bispo:
    // Transformando a Estrutura de Repeticao do Bispo em Recursiva:
    moverBispo(bispo);


    // Implementação de Movimentação da Torre
    printf("\nMovimentos da Torre:\n");
    // Estrutura de Repeticao For para os movimentos da Torre:
    // Transformando a Estrutura de Repeticao da Torre em Recursiva:
    moverTorre();

    // Implementação de Movimentação da Rainha
    printf("\nMovimentos da Rainha:\n");
    // Estrutura de Repeticao Do-While para os movimentos da Rainha:
    // Transformando a Estrutura de Repeticao da Rainha em Recursiva:
    moverRainha(rainha);
    

    // Exibicao dos movimntos do Cavalo:
    printf("\nMovimentos do Cavalo\n");

    // Estrutura de Repeticao For com Do-While para os movimentos do Cavalo:
    // Aplicando Estrutura de loops Complexos no movimento do Cavalo:
    for (int cavaloCima = 1, cavaloDireita = 1; cavaloCima >= cavaloDireita; cavaloDireita--)
    {
        do 
        {

            printf("Cavalo: 1 casa para Cima\n");
            cavaloCima--;

        } while (cavaloCima >= 0 ? 1 : 0);

        printf("Cavalo: 1 casa para a Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
