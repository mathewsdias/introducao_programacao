#include <stdio.h>

int main() {
    // Simulação do movimento da Torre usando FOR
    // A torre se move 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço entre os movimentos

    // Simulação do movimento do Bispo usando WHILE
    // O bispo se move 5 casas na diagonal para cima e à direita
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n"); // Espaço entre os movimentos

    // Simulação do movimento da Rainha usando DO-WHILE
    // A rainha se move 8 casas para a esquerda
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
