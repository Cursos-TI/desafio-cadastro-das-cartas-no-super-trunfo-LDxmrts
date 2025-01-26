#include <stdio.h>

int main (){

    //Declaração de variáveis
    char estado1[30], estado2[30];
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[30], nomeCidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    //Solicitação de dados da primeira carta
    printf ("Digite o estado da primeira carta:\n");
    scanf (" %s", &estado1);
    printf ("Digite o código da primeira carta: \n");
    scanf (" %s", &codigoCarta1);
    printf ("Digite o nome da cidade da primeira carta: \n");
    scanf (" %s", &nomeCidade1);
    printf ("Digite a população da primeira carta: \n");
    scanf ("%lu", &populacao1);
    printf ("Digite a área da primeira carta (em km²)\n");
    scanf ("%f", &area1);
    printf ("Digite o PIB para a primeira carta: \n");
    scanf ("%f", &pib1);
    printf ("Digite o número de pontos turísticos para a primeira carta: \n");
    scanf ("%d", &pontosTuristicos1);

    //Solicitação de dados da segunda carta
    printf ("Digite o estado da segunda carta:\n");
    scanf (" %s", &estado2);
    printf ("Digite o código da segunda carta: \n");
    scanf (" %s", &codigoCarta2);
    printf ("Digite o nome da cidade da segunda carta: \n");
    scanf (" %s", &nomeCidade2);
    printf ("Digite a população da segunda carta: \n");
    scanf ("%lu", &populacao2);
    printf ("Digite a área da segunda carta (em km²)\n");
    scanf ("%f", &area2);
    printf ("Digite o PIB para a segunda carta: \n");
    scanf ("%f", &pib2);
    printf ("Digite o número de pontos turísticos para a segunda carta: \n");
    scanf ("%d", &pontosTuristicos2);

    //Cálculo de Densidade Demográfica para a primeira e segunda cartas
    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;

    //Cáculo PIB per capita para a primeira e segunda cartas
    pibPerCapita1 = pib1 / (float)populacao1;
    pibPerCapita2 = pib2 / (float)populacao2;

    //Cálculo do super poder de cada carta
    superPoder1 = (double) populacao1 + area1 + pib1 + pibPerCapita1 + densidadePopulacional1 + pontosTuristicos1;
    superPoder2 = (double) populacao2 + area2 + pib2 + pibPerCapita2 + densidadePopulacional2 + pontosTuristicos2;

    //Impressão dos resultados da entrada de dados
    
    printf ("Estado da primeira carta: %s\n", estado1);
    printf ("Estado da segunda carta: %s\n", estado2);
    printf ("Código da primeira carta: %s\n", codigoCarta1);
    printf ("Código da segunda carta: %s\n", codigoCarta2);
    printf ("Nome da cidade da primeira carta: %s\n", nomeCidade1);
    printf ("Nome da cidade da segunda carta: %s\n", nomeCidade2);
    printf ("População correspondente à primeira carta: %lu\n", populacao1);
    printf ("População correspondente à segunda carta: %lu\n", populacao2);
    printf ("Área correspondente à primeira carta: %f km²\n", area1);
    printf ("Área correspondente à segunda carta: %f km²\n", area2);
    printf ("PIB correspondente à primeira carta: %f\n", pib1);
    printf ("PIB correspondente à segunda carta: %f\n", pib2);
    printf ("Número de pontos turísticos para a primeira carta: %d\n", pontosTuristicos1);
    printf ("Número de pontos turísticos para a segunda carta: %d\n", pontosTuristicos2);
    printf ("Densidade populacional para a primeira carta: %.2f\n", densidadePopulacional1);
    printf ("Densidade populacional para a segunda carta: %.2f\n", densidadePopulacional2);
    printf ("PIB per capita para a primeira carta: %.2f\n", pibPerCapita1);
    printf ("PIB per capita para a segunda carta: %.2f\n", pibPerCapita2);
    printf ("Valor do super poder para a primeira carta: %f\n", superPoder1);
    printf ("Valor do super poder para a segunda carta: %f\n", superPoder2);

    //Comparação de propriedades das cartas

    printf ("População da primeira carta maior que da segunda carta: %d\n", populacao1 > populacao2);
    printf ("População da segunda carta maior que da primeira carta: %d\n", populacao2 > populacao1);
    printf ("População da primeira e segunda carta iguais: %d\n", populacao2 == populacao1);
    printf ("A área da primeira carta é maior do que a área da segunda carta: %d\n", area1 > area2);
    printf ("A área da segunda carta é maior que a área da primeira carta: %d\n", area2 > area1);
    printf ("As áreas da primeira e segunda carta são iguais: %d\n", area1 == area2);
    printf ("O PIB correspondente a primeira carta é maior que o da segunda carta: %d\n", pib1 > pib2);
    printf ("O PIB correspondente a segunda carta é maior que o da primeira carta: %d\n", pib2 > pib1);
    printf ("O PIB de ambas cartas é igual: %d\n", pib1 == pib2);
    printf ("O número de pontos turísticos da primeira carta é maior que da segunda carta: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf ("O número de pontos turísticos da segunda carta é maior que da primeira carta: %d\n", pontosTuristicos2 > pontosTuristicos1);
    printf ("O número de pontos turísticos de ambas cartas são iguais: %d\n", pontosTuristicos1 == pontosTuristicos2);
    printf ("A densidade demográfica da primeira carta é maior que da segunda carta: %d\n", densidadePopulacional1 > densidadePopulacional2);
    printf ("A densidade demográfica da segunda carta é maior que da primeira carta: %d\n", densidadePopulacional2 > densidadePopulacional1);
    printf ("As densidades demográficas de ambas cartas são iguais: %d\n", densidadePopulacional1 == densidadePopulacional2);
    printf ("O PIB per capita da primeira carta é maior que o da segunda carta: %d\n", pibPerCapita1 > pibPerCapita2);
    printf ("O PIB per capita da segunda carta é maior que o da primeira carta: %d\n", pibPerCapita2 > pibPerCapita1);
    printf ("Os PIBs per capita de ambas cartas são iguais: %d\n", pibPerCapita1 == pibPerCapita2);
    printf ("O super poder da primeira carta é maior que o da segunda carta: %d\n", superPoder1 > superPoder2);
    printf ("O super poder da segunda carta é maior que o da primeira carta: %d\n", superPoder2 > superPoder1);
    printf ("Os super poderes de ambas cartas são iguais: %d\n", superPoder1 == superPoder2);
    
    return 0;
}