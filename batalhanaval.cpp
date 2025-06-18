#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define VALOR_AGUA 0
#define VALOR_NAVIO 3

int main() {
    // Declaração da matriz do tabuleiro
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializando todo o tabuleiro com 0 (água)
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            tabuleiro[linha][coluna] = VALOR_AGUA;
        }
    }

    // Definição das coordenadas iniciais para os navios
    // Navio horizontal
    int linhaNavioH = 2;
    int colunaNavioH = 3;

    // Navio vertical
    int linhaNavioV = 5;
    int colunaNavioV = 6;

    // Validação do navio horizontal dentro dos limites
    if (colunaNavioH + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        // Validação de sobreposição
        int podePosicionar = 1;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linhaNavioH][colunaNavioH + i] != VALOR_AGUA) {
                podePosicionar = 0;
                break;
            }
        }

        if (podePosicionar) {
            // Posicionando o navio horizontal
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linhaNavioH][colunaNavioH + i] = VALOR_NAVIO;
            }
        }
    }

    // Validação do navio vertical dentro dos limites
    if (linhaNavioV + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        // Validação de sobreposição
        int podePosicionar = 1;
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linhaNavioV + i][colunaNavioV] != VALOR_AGUA) {
                podePosicionar = 0;
                break;
            }
        }

        if (podePosicionar) {
            // Posicionando o navio vertical
            for (int i = 0; i < TAMANHO_NAVIO; i++) {
                tabuleiro[linhaNavioV + i][colunaNavioV] = VALOR_NAVIO;
            }
        }
    }

    // Exibição do tabuleiro com os navios posicionados
    printf("Tabuleiro Batalha Naval (0 = Água, 3 = Navio):\n\n");

    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
