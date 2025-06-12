#include <stdio.h>
int main() {
    // Movimento do Cavalo
    printf("Movimento do Cavalo\n");
    int movimentos_para_baixo = 2;
    int movimentos_para_esquerda = 1;

    // Primeiro loop movimentos para baixo
    for (int i = 0; i < movimentos_para_baixo; i++) {
        printf("Baixo\n");
    }

    // Segundo loop movimento para a esquerda
    int c = 0;
    while (c < movimentos_para_esquerda) {
        printf("Esquerda\n");
        c++;
    }

    return 0;
}