#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int passos) {
    if (passos > 0) {
        printf("Direita\n");
        moverTorre(passos - 1);
    }
}

// Função recursiva para o movimento do Bispo
void moverBispo(int passos) {
    if (passos > 0) {
        printf("Cima Direita\n");
        moverBispo(passos - 1);
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int passos) {
    if (passos > 0) {
        printf("Esquerda\n");
        moverRainha(passos - 1);
    }
}

int main() {
    printf("Desafio Mestre\n");
    // Movimento da Torre (recursivo)
    printf(" Movimento da Torre \n");
    moverTorre(5);

    printf("\n");

    // Movimento do Bispo (recursivo)
    printf("Movimento do Bispo \n");
    moverBispo(5);

    printf("\n");

    // Movimento da Rainha (recursivo)
    printf(" Movimento da Rainha\n");
    moverRainha(8);

    printf("\n");

    // Movimento do Cavalo (loops aninhados)
    printf("Movimento do Cavalo \n");
    int movimentos_para_cima = 2;
    int movimentos_para_direita = 1;

    // Loop para os movimentos verticais
    for (int i = 0; i < movimentos_para_cima; i++) {
        printf("Cima\n");
    }

    // Loop para os movimentos horizontais
    for (int c = 0; c < movimentos_para_direita; c++) {
        printf("Direita\n");
    }

    // Movimento do Bispo com Loops Aninhados
    printf("Movimento do Bispo loops aninhados\n");
    int passos_diagonais = 3; // Exemplo: 3 passos diagonais

    for (int b = 0; b < passos_diagonais; b++) { // Loop para movimento vertical
        printf("Cima\n");
        for (int B = 0; B < 1; B++) { // Loop para movimento horizontal
            printf("Direita\n");
        }
    }

    return 0;
}