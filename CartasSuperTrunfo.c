#include <stdio.h>

int main() {

    printf("Bem vindo ao jogo do super trunfo! \n"); //mensagem de boas vindas.

//criação de variaveis para armazenar dados
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTurismo1, pontosTurismo2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float densidadeInvertida1, densidadeInvertida2;
    float superPoder1, superPoder2;

//pede para o usuario informar os dados da primeira carta
    printf("--DADOS DA PRIMEIRA CARTA--\n");
    printf("Informe a letra de um estado de A a H: \n");
    scanf("%s", estado1);
    printf("Informe o código: \n");
    scanf("%s", codigo1);
    printf("Informe a cidade: \n");
    scanf(" %[^\n]", cidade1); //salva o nome da cidade usando espaço 
    printf("Informe a população: \n");
    scanf("%f", &populacao1);
    printf("Informe a área em km²: \n");
    scanf("%f", &area1);
    printf("Informe o PIB(Produto Interno Bruto): \n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTurismo1);

//calcula densidade populacional, pib per capita e densidade invertida da primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    densidadeInvertida1 = area1 / densidadePopulacional1;

//Calcular super poder primeira carta, passando para float os valores inteiros
    superPoder1 = populacao1 + area1 + pib1 + (float)pontosTurismo1 + pibPerCapita1 + densidadeInvertida1;

//imprime o resultado da primeira carta
    printf("---CARTA 1--- \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("nome da Cidade: %s \n", cidade1);
    printf("População: %.2f \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de pontos turísticos: %d \n", pontosTurismo1);
    printf("Densidade populacional: %.2f \n", densidadePopulacional1);
    printf("PIB per Capita: %.2f \n", pibPerCapita1);

//pede para o usuario informar os dados da segunda carta
    printf("--DADOS DA SEGUNDA CARTA--\n");
    printf("Informe a letra de um estado de A a H: \n");
    scanf("%s", estado2);
    printf("Informe o código: \n");
    scanf("%s", codigo2);
    printf("Informe a cidade: \n"); 
    scanf(" %[^\n]", cidade2); //salva o nome da cidade usando espaço 
    printf("Informe a população: \n");
    scanf("%f", &populacao2);
    printf("Informe a área em km²: \n");
    scanf("%f", &area2);
    printf("Informe o PIB(Produto Interno Bruto): \n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTurismo2);

//calcula densidade populacional, pib per capita e densidade invertida da segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    densidadeInvertida2 = area2 / densidadePopulacional2;

//Calcular super poder segunda carta, passando para float os valors inteiros 
    superPoder2 = populacao2 + area2 + pib2 + (float)pontosTurismo2 + pibPerCapita2 + densidadeInvertida2;

//imprime o resultado da segunda carta
    printf("---CARTA 2--- \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("nome da Cidade: %s \n", cidade2);
    printf("População: %.2f \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosTurismo2);
    printf("Densidade populacional: %.2f \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibPerCapita2);

//comparação de atributos 
    printf("---COMPARAÇÃO ENTRE CARTAS---\n");
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu \n");
    } else {
        printf("População: Carta 2 venceu \n");
    }
    
    if (area1 > area2) {
        printf("Área: Carta 1 venceu \n");
    } else {
        printf("Área: Carta 2 venceu \n");
    }
    
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu \n");
    } else {
        printf("PIB: Carta 2 venceu \n");
    }
   
    if (pontosTurismo1 > pontosTurismo2) {
        printf("Pontos Turísticos: Carta 1 venceu \n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu \n");
    }
    
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Densidade Populacional: Carta 1 venceu \n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu \n");
    }
    
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu \n");
    } else {
        printf("PIB per Capita: Carta 2 venceu \n");
    }
    
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu \n");
    } else {
        printf("Super Poder: Carta 2 venceu \n");
    }

    return 0;
}