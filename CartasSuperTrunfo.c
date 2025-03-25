#include <stdio.h>

int main() {

    printf("Bem vindo ao jogo do super trunfo! \n"); //mensagem de boas vindas.

//criação de variaveis para armazenar dados
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTurismo1, pontosTurismo2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

//pede para o usuario informar os dados da primeira carta
    printf("--DADOS DA PRIMEIRA CARTA--\n");
    printf("Informe a letra de um estado de A a H: \n");
    scanf("%s", &estado1);
    printf("Informe o código: \n");
    scanf("%s", &codigo1);
    printf("Informe a cidade(não coloque espaço): \n"); //salva o nome da cidade sem espaço 
    scanf("%s", &cidade1);
    printf("Informe a população: \n");
    scanf("%d", &populacao1);
    printf("Informe a área em km²: \n");
    scanf("%f", &area1);
    printf("Informe o PIB(Produto Interno Bruto): \n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTurismo1);

//calcula densidade populacional e pib percapita da primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

//imprime o resultado da primeira carta
    printf("---CARTA 1--- \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontosTurismo1);
    printf("Densidade populacional: %.2f \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f \n", pibPerCapita1);

//pede para o usuario informar os dados da segunda carta
    printf("--DADOS DA SEGUNDA CARTA--\n");
    printf("Informe a letra de um estado de A a H: \n");
    scanf("%s", &estado2);
    printf("Informe o código: \n");
    scanf("%s", &codigo2);
    printf("Informe a cidade(não coloque espaço): \n"); //salva o nome da cidade sem espaço 
    scanf("%s", &cidade2);
    printf("Informe a população: \n");
    scanf("%d", &populacao2);
    printf("Informe a área em km²: \n");
    scanf("%f", &area2);
    printf("Informe o PIB(Produto Interno Bruto): \n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTurismo2);

//calcula densidade populacional e pib per capita da segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

//imprime o resultado da segunda carta
    printf("---CARTA 2--- \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosTurismo2);
    printf("Densidade populacional: %.2f \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibPerCapita2);

    return 0;
}