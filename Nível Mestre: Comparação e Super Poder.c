#include <stdio.h>

struct Carta {
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

int main() {
    struct Carta carta1, carta2;

    
    printf("Informe o nome da primeira carta: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Informe a populacao da primeira carta: ");
    scanf("%lu", &carta1.populacao);
    printf("Informe a area (em km2) da primeira carta: ");
    scanf("%f", &carta1.area);
    printf("Informe o PIB (em bilhoes) da primeira carta: ");
    scanf("%f", &carta1.pib);

    
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib +
                        carta1.pibPerCapita + (1.0f / carta1.densidadePopulacional);

    
    printf("\nInforme o nome da segunda carta: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Informe a populacao da segunda carta: ");
    scanf("%lu", &carta2.populacao);
    printf("Informe a area (em km2) da segunda carta: ");
    scanf("%f", &carta2.area);
    printf("Informe o PIB (em bilhoes) da segunda carta: ");
    scanf("%f", &carta2.pib);

    
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib +
                        carta2.pibPerCapita + (1.0f / carta2.densidadePopulacional);

    
    printf("\n--- Carta 1 ---\n");
    printf("Nome: %s\n", carta1.nome);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Densidade Populacional: %.2f\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.6f\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\n--- Carta 2 ---\n");
    printf("Nome: %s\n", carta2.nome);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Densidade Populacional: %.2f\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.6f\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    
    printf("\n--- Resultados da Comparacao ---\n");
    printf("Populacao: %d\n", carta1.populacao > carta2.populacao);
    printf("Area: %d\n", carta1.area > carta2.area);
    printf("PIB: %d\n", carta1.pib > carta2.pib);
    printf("Densidade Populacional (menor vence): %d\n", carta1.densidadePopulacional < carta2.densidadePopulacional);
    printf("PIB per Capita: %d\n", carta1.pibPerCapita > carta2.pibPerCapita);
    printf("Super Poder: %d\n", carta1.superPoder > carta2.superPoder);

    return 0;
}
