#include <stdio.h>

int main() {

    // ===== Carta 1 =====
    char estado1[3];
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;

    // ===== Carta 2 =====
    char estado2[3];
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;

    // CARTA 01
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // CARTA 02
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // IMPRESSÃO
    printf("\n=== CARTA 1 ===\n");

    printf("Estado: %s\n", estado1);

    printf("Codigo: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("Populacao: %d\n", populacao1);

    printf("Area: %.2f km²\n", area1);

    printf("PIB: %.2f bilhoes de reais\n", pib1);

    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n=== CARTA 2 ===\n");

    printf("Estado: %s\n", estado2);

    printf("Codigo: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("Populacao: %d\n", populacao2);

    printf("Area: %.2f km²\n", area2);

    printf("PIB: %.2f bilhoes de reais\n", pib2);

    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
