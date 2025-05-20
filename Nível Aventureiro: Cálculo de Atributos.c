#include <stdio.h>

struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

  
    printf("Informe o nome da primeira carta: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Informe a populacao da primeira carta: ");
    scanf("%d", &carta1.populacao);
    printf("Informe a area (em km2) da primeira carta: ");
    scanf("%f", &carta1.area);
    printf("Informe o PIB (em bilhoes) da primeira carta: ");
    scanf("%f", &carta1.pib);


    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    printf("\nInforme o nome da segunda carta: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Informe a populacao da segunda carta: ");
    scanf("%d", &carta2.populacao);
    printf("Informe a area (em km2) da segunda carta: ");
    scanf("%f", &carta2.area);
    printf("Informe o PIB (em bilhoes) da segunda carta: ");
    scanf("%f", &carta2.pib);

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    printf("\n Primeira Carta:\n");
    printf("Nome: %s\n", carta1.nome);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes\n", carta1.pib);
    printf("Densidade Populacional: %.2f hab/km2\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta1.pibPerCapita);

    printf("\n Segunda Carta:\n");
    printf("Nome: %s\n", carta2.nome);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes\n", carta2.pib);
    printf("Densidade Populacional: %.2f hab/km2\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta2.pibPerCapita);

    return 0;
}
