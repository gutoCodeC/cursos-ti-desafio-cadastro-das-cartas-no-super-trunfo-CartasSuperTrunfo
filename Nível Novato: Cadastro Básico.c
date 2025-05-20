#include <stdio.h>

int main()
{   
    char estado1, estado2;
    char codigodecarta1[5], codigodecarta2[5];
    char nomedacidade1[50], nomedacidade2[50];
    int populacao1, populacao2, numerosdepontosturisticos1, numerosdepontosturisticos2;
    float area1, area2, pib1, pib2;
    
    printf("Estado (A-H) - Carta 1: ");
    scanf(" %c", &estado1);
    
    printf("Codigo da Carta 1 (ex: A01, B03): ");
    scanf("%s", codigodecarta1);
    
    printf("Nome da Cidade 1: ");
    scanf("%s", nomedacidade1);
    
    printf("Populacao 1: ");
    scanf("%d", &populacao1);
    
    printf("Area 1 (km2): ");
    scanf("%f", &area1);
    
    printf("PIB 1: ");
    scanf("%f", &pib1);
    
    printf("Qtd pontos turisticos 1: ");
    scanf("%d", &numerosdepontosturisticos1);
    
    printf("\nEstado (A-H) - Carta 2: ");
    scanf(" %c", &estado2);
    
    printf("Codigo da Carta 2 (ex: A01, B03): ");
    scanf("%s", codigodecarta2);
    
    printf("Nome da Cidade 2: ");
    scanf("%s", nomedacidade2);
    
    printf("Populacao 2: ");
    scanf("%d", &populacao2);
    
    printf("Area 2 (km2): ");
    scanf("%f", &area2);
    
    printf("PIB 2: ");
    scanf("%f", &pib2);
    
    printf("Qtd pontos turisticos 2: ");
    scanf("%d", &numerosdepontosturisticos2);

    printf("\n---Carta 1 Registrada---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigodecarta1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\u00b2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Qtd pontos turisticos: %d\n", numerosdepontosturisticos1);
    
    printf("\n---Carta 2 Registrada---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigodecarta2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\u00b2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Qtd pontos turisticos: %d\n", numerosdepontosturisticos2);

    return 0;
}
