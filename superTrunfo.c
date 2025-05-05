#include <stdio.h>

int main() {

    printf("=========================================\n");
    printf("    Bem-vindo ao jogo do Super Trunfo!    \n");
    printf("=========================================\n\n");

    // Dados da primeira carta
    char estado1[100];
    char codigo1[10];
    char nomeDaCidade1[100];
    float populacao1, area1, pib1;
    int numeroDePontosTuristicos1;

    // Dados da segunda carta
    char estado2[100];
    char codigo2[10];
    char nomeDaCidade2[100];
    float populacao2, area2, pib2;
    int numeroDePontosTuristicos2;

    // Primeira carta
    printf("Digite os dados da PRIMEIRA carta:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Código: ");
    scanf(" %[^\n]", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade1);

    printf("População (apenas número, ex: 6200000 para 6,2 milhões): ");
    scanf("%f", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroDePontosTuristicos1);

    // Cálculos da primeira carta
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Segunda carta
    printf("\nDigite os dados da SEGUNDA carta:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Código: ");
    scanf(" %[^\n]", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);

    printf("População (apenas número, ex: 12000000 para 12 milhões): ");
    scanf("%f", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroDePontosTuristicos2);

    // Cálculos da segunda carta
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibindo dados das cartas
    printf("\n=== PRIMEIRA CARTA ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeDaCidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", numeroDePontosTuristicos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\n=== SEGUNDA CARTA ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeDaCidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numeroDePontosTuristicos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    return 0;
}
