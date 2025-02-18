#include <stdio.h>


int main() {

    //Declaração de variáveis
    char codigo[3];
    char estado;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float populacaoporarea;
    float pibporpopulacao;


    //Solicitação de informações do usuário
    printf("Digite o código da cidade iniciando com uma letra entre A e H e terminando com um número entre 1 e 4\n");
    scanf ("%s", &codigo);
    printf ("Digite a população da cidade\n");
    scanf ("%d", &populacao);
    printf ("Digite a área da cidade (em km²)\n");
    scanf ("%f", &area);
    printf ("Digite o PIB (em bilhões de R$)\n");
    scanf ("%f", &pib);
    printf ("Digite o número de pontos turísticos\n");
    scanf ("%d", &pontos_turisticos);

    //Cálculos da Densidade populacional e PIB per capita

    populacaoporarea = populacao / area;
    pibporpopulacao = (float) pib / populacao;

    //Exibição dos valores
    printf ("O código da cidade é %s\n", codigo);
    printf ("A população da cidade é %d habitantes\n", populacao);
    printf ("A área da cidade é %.2f km²\n", area);
    printf ("O PIB é %.2f milhões\n", pib);
    printf ("O número de pontos turísticos é %d\n", pontos_turisticos);
    printf ("A densidade demografica da cidade é: %.2f pessoas/km2\n", populacaoporarea);
    printf ("O PIB per capita da cidade é: %.2f reais\n", pibporpopulacao);


    return 0;
}