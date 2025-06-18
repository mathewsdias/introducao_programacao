#include <stdio.h>
#include <string.h>

// Definição da estrutura da carta
struct Carta {
    char estado[30];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Cadastro de duas cartas
    struct Carta carta1 = {
        "São Paulo", "SP001", "São Paulo",
        12300000, 1521.11, 260000000000.0, 120
    };

    struct Carta carta2 = {
        "Rio de Janeiro", "RJ002", "Rio de Janeiro",
        6710000, 1182.30, 190000000000.0, 95
    };

    // Cálculo da densidade populacional e PIB per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Impressão dos dados calculados
    printf("Carta 1 - %s (%s):\n", carta1.cidade, carta1.estado);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Densidade Populacional: %.2f\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f\n\n", carta1.pibPerCapita);

    printf("Carta 2 - %s (%s):\n", carta2.cidade, carta2.estado);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Densidade Populacional: %.2f\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f\n\n", carta2.pibPerCapita);

    // ========================
    // Comparação entre cartas
    // Atributo escolhido: PIB per capita
    // ========================

    printf("Comparacao de cartas (Atributo: PIB per capita):\n\n");

    printf("Carta 1 - %s: %.2f\n", carta1.cidade, carta1.pibPerCapita);
    printf("Carta 2 - %s: %.2f\n", carta2.cidade, carta2.pibPerCapita);

    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
