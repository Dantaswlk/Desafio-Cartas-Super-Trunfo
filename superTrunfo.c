#include <stdio.h>

int main() {

    printf("=========================================\n");
    printf("    Bem-vindo ao jogo do Super Trunfo!    \n");
    printf("=========================================\n\n");

    // Dados da primeira carta
    char estado1[100];
    char codigo1[4];
    char nomeDaCidade1[100];
    int populacao1, numeroDePontosTuristicos1;
    float area1, pib1;

    // Dados da segunda carta
    char estado2[100];
    char codigo2[4];
    char nomeDaCidade2[100];
    int populacao2, numeroDePontosTuristicos2;
    float area2, pib2;

    // Primeira carta
    printf("Digite os dados da PRIMEIRA carta:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Código: ");
    scanf(" %s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroDePontosTuristicos1);

    // Segunda carta
    printf("\nDigite os dados da SEGUNDA carta:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Código: ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroDePontosTuristicos2);

    // Exibindo dados das cartas
    printf("\n=== PRIMEIRA CARTA ===\n");
    printf("Estado: %s - Código: %s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", numeroDePontosTuristicos1);

    printf("\n=== SEGUNDA CARTA ===\n");
    printf("Estado: %s - Código: %s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numeroDePontosTuristicos2);

    return 0;
}
