#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //Declaração de variáveis
    char codigo[3];
    char estado;
    int cidade_numero;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    //Solicitação de informações do usuário
    printf("Digite o código da cidade iniciando com uma letra entre A e H e terminando com um número entre 1 e 4\n");
    scanf ("%s", &codigo);
    printf ("Digite a população da cidade\n");
    scanf ("%d", &cidade_numero);
    printf ("Digite a área da cidade (em km²)\n");
    scanf ("%f", &area);
    printf ("Digite o PIB (em milhões de R$)\n");
    scanf ("%f", &pib);
    printf ("Digite o número de pontos turísticos\n");
    scanf ("%d", &pontos_turisticos);

    //Exibição dos valores
    printf ("O código da cidade é %s\n", codigo);
    printf ("A população da cidade é %d habitantes\n", cidade_numero);
    printf ("A área da cidade é %.2f km²\n", area);
    printf ("O PIB é %.2f milhões\n", pib);
    printf ("O número de pontos turísticos é %d\n", pontos_turisticos);

    return 0;
}
