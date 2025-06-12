#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    {Printf("desafio Xadrez!\n");}
}
    // Nível Novato - Movimentação das Peças
    int main() {
        {Printf("Desafio Novato!\n");}
    // Movimento da Torre
    printf("Movimento da Torre\n");
    int t;
    for (t = 0; t < 5; t++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo\n");
    int b = 0;
    while (b < 5) {
        printf("Cima Direita\n");
        b++;
    }

    printf("\n");

    // Movimento da Rainha 
    printf("Movimento da Rainha\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

     printf("\n");

    return 0;
}

