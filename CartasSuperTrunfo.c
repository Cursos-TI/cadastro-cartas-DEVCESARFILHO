#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro + Calculos + Comparacao
// Nivel basico - comparacao com if e if-else

int main() {

    // ===== Carta 1 =====
    char estado1[3];
    char codigo1[5];
    char cidade1[15];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // ===== Carta 2 =====
    char estado2[3];
    char codigo2[5];
    char cidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // CARTA 01
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Codigo da carta: ");
    scanf(" %[^\n]", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // CARTA 02
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo da carta: ");
    scanf(" %[^\n]", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // IMPRIMIR
    //CARTA 01


    printf("\n\n=== IMPRESSÃO DA CARTA 1 ===\n\n");

    printf ("Estado: %s\n", estado1);
   
    printf ("Codigo da carta: %s\n", codigo1);
    
    printf ("Nome da cidade: %s\n", cidade1);
   
    printf ("População: %d\n", populacao1);

    printf ("Área: %.2f km²\n", area1);

    printf ("PIB: %.2f bilhões de reais\n", pib1);

    printf ("Numero de pontos turisticos: %d\n\n", pontos1);

    // CARTA 02

    printf("=== IMPRESSÃO DA CARTA 2 ===\n\n");

    printf ("Estado: %s\n", estado2);
   
    printf ("Codigo da carta: %s\n", codigo2);
    
    printf ("Nome da cidade: %s\n", cidade2);
   
    printf ("População: %d\n", populacao2);

    printf ("Área: %.2f km²\n", area2);

    printf ("PIB: %.2f bilhões de reais\n", pib2);

    printf ("Numero de pontos turisticos: %d\n\n", pontos2);
      
return 0;
} 
