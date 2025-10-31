#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;                   // Letra representando o estado (de A a H)
    char codigo1[4];                // Código da carta (ex: A01)
    char cidade1[50];               // Nome da cidade
    unsigned long int populacao1;   // População total da cidade
    float area1;                    // Área da cidade em km²
    float pib1;                     // PIB total da cidade (em bilhões)
    int pontosTuristicos1;          // Número de pontos turísticos
    float densidade1;               // Densidade populacional calculada
    float pibPerCapita1;            // PIB per capita calculado

    // Entrada de dados da Carta 1
    printf("Digite o Estado (A-H) da carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o Código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade da carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a População da cidade da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área (km²) da cidade da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões) da cidade da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;                      // Densidade = População / Área
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;   // PIB per capita = PIB / População

    printf("\n");

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Entrada de dados da Carta 2
    printf("Digite o Estado (A-H) da carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade da carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a População da cidade da carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área (km²) da cidade da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões) da cidade da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;                      // Densidade = População / Área
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;   // PIB per capita = PIB / População

    printf("\n");

    // Exibição inicial
    printf("===== Comparação de Cartas =====\n\n");

    // Escolha do atributo para comparação
    printf("Comparação de cartas (Atributo: PIB per Capita)\n\n");

    printf("Carta 1 - %s (%c): R$ %.2f\n", cidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%c): R$ %.2f\n\n", cidade2, estado2, pibPerCapita2);

    // Estrutura de decisão para determinar a vencedora
    if (pibPerCapita1 > pibPerCapita2) {
        // Carta 1 vence se tiver maior PIB per capita
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        // Carta 2 vence se tiver maior PIB per capita
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        // Caso os valores sejam iguais
        printf("Resultado: Empate!\n");
    }

    return 0; // Finalização do programa
}
