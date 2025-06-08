#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa tudo com água (0)
    char colunas[] = "ABCDEFGHIJ"; // Letras para as colunas do tabuleiro

    // Coloca navio horizontal (3 posições) a partir da posição (3,3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[3][3 + i] = 3; // Coloca o navio horizontal
        printf("Navio horizontal em: %c%d\n", colunas[3 + i], 4); // Linha 3 + 1 = 4
    }

    // Coloca navio vertical (3 posições) a partir da posição (5,5)
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][5] = 3;// Coloca o navio vertical
        printf("Navio vertical em: %c%d\n", colunas[5], 6 + i); // Linha 5 + i + 1
    }

    // Exibe o tabuleiro com números
    printf("\n...BATALHA NAVAL...\n"); // Título do jogo
    printf("   A B C D E F G H I J\n");// Cabeçalho do tabuleiro
    printf("  ---------------------\n"); // Linha de separação

    for (int i = 0; i < 10; i++) { // Linha do tabuleiro
        printf("%c| ", 'A' + i); // Converte o índice para a letra correspondente
        for (int j = 0; j < 10; j++) { // Coluna do tabuleiro
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da célula
        }
        printf("\n");// Nova linha após cada linha do tabuleiro
    }

    return 0;
}

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
