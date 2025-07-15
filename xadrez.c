#include <stdio.h>

int main() {
    // Torre: 5 casas para a direita usando 'for'
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Bispo: 5 casas em diagonal para cima e à direita usando 'while'
    int casasBispo = 5;
    int Bispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (Bispo < casasBispo) {
        printf("Cima, Direita\n");
        Bispo++;
    }

    // Rainha: 8 casas para a esquerda usando 'do-while'
    int casasRainha = 8;
    int Rainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        Rainha++;
    } while (Rainha < casasRainha);

    return 0;
}