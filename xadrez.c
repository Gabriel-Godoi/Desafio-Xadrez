#include <stdio.h>

// Função recursiva para movimentar a Torre para a direita
void moverTorre(int passos) {
    if (passos <= 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva com loops aninhados para o Bispo (diagonal cima + direita)
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;

    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(vertical - 1, horizontal - 1);
}

// Função recursiva para movimentar a Rainha para a esquerda
void moverRainha(int passos) {
    if (passos <= 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    // Torre: recursivamente 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Bispo: recursivamente 5 casas em diagonal (loops aninhados dentro da recursão)
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo);

    // Rainha: recursivamente 8 casas para a esquerda
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Cavalo: movimento em "L" — duas casas para cima e uma para a direita
    printf("\nMovimento do Cavalo:\n");
    int vertical = 2;
    int horizontal = 1;

    for (int i = 0; i < 3; i++) {
        for (int v = 0; v < vertical; v++) {
            if (v == 1) continue; // apenas para demonstrar controle do fluxo
            printf("Cima\n");
        }

        int h = 0;
        while (h < horizontal) {
            if (i == 1) break; // exemplo de controle de fluxo adicional
            printf("Direita\n");
            h++;
        }
    }

    return 0;
}