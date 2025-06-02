#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("Digite o estado da Carta 1 (A-H):\n");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o código da Carta 1:\n");
    scanf("%3s", codigo1);
    getchar();

    printf("Digite o nome da cidade da Carta 1:\n");
    scanf(" %[^\n]s", nome1);

    printf("Digite a população da Carta 1:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área da Carta 1:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1:\n");
    scanf("%d", &pontosTuristicos1);

    printf("\nDigite o estado da Carta 2 (A-H):\n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o código da Carta 2:\n");
    scanf("%3s", codigo2);
    getchar();

    printf("Digite o nome da cidade da Carta 2:\n");
    scanf(" %[^\n]s", nome2);

    printf("Digite a população da Carta 2:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área da Carta 2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2:\n");
    scanf("%d", &pontosTuristicos2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 * 1e9 / populacao1;
    float pibPerCapita2 = pib2 * 1e9 / populacao2;

    float superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
