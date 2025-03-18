#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
     char estado, estadodois;
     char codigo[25], codigodois[30];
     char nome[20], nomedois[30];
     unsigned long int populacao, populacaodois;
     float area, areadois;
     float pib, pibdois;
     int turisticos, turisticosdois;
     float densidade, densidadedois;
     float capita, capitadois;
     float superpoderum, superpoderdois;
     int escolhaJogador;
     int resultado1, resultado2;
     int primeiroAtributo, segundoAtributo;

    srand(time(0));

    printf("Estado cidade 1: \n");
     scanf("%c", &estado);
     printf("Codigo da cidade 1: \n");
     scanf("%s", &codigo);
     printf("Nome da cidade 1: \n");
     scanf("%s", &nome);
     printf("População da cidade 1: \n");
     scanf("%u", &populacao);
     printf("Área da cidade 1: \n");
     scanf("%f", &area);
     printf("PIB da cidade 1: \n");
     scanf("%f", &pib);
     printf("Número de pontos turísticos da cidade 1: \n");
     scanf("%d", &turisticos);

    densidade = populacao / area;

    capita = pib / populacao;

    superpoderum = populacao + area + pib + turisticos + capita + (1 / densidade);

     printf("Estado da cidade 2: \n");
     scanf(" %c", &estadodois);
     printf("Código da cidade 2: \n");
     scanf("%s", &codigodois);
     printf("Nome da cidade 2: \n");
     scanf("%s", &nomedois);
     printf("População da cidade 2: \n");
     scanf("%d", &populacaodois);
     printf("Área da cidade 2: \n");
     scanf("%f", &areadois);
     printf("PIB da cidade 2: \n");
     scanf("%f", &pibdois);
     printf("Número de pontos turísticos da cidade 2: \n");
     scanf("%d", &turisticosdois);

    densidadedois = populacaodois / areadois;

    capitadois = pibdois / populacaodois;

    superpoderdois = populacaodois + areadois + pibdois + turisticosdois + capitadois + (1 / densidadedois);

    printf("Cidade 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", turisticos);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", capita);
    printf("Super Poder: %.2f\n", superpoderum);

    printf("Cidade 2: \n");
    printf("Estado: %c\n", estadodois);
    printf("Código: %s\n", codigodois);
    printf("Nome da Cidade: %s\n", nomedois);
    printf("População: %d\n", populacaodois);
    printf("Área: %.2f km²\n", areadois);
    printf("PIB: %.2f bilhões de reais\n", pibdois);
    printf("Número de pontos turísticos: %d\n", turisticosdois);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadedois);
    printf("PIB per Capita: %.2f reais\n", capitadois);
    printf("Super Poder: %.2f\n", superpoderdois);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf("Bem vindo ao jogo de Comparação!:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade\n");
    printf("6 - Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o atributo para comparar:\n");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("Você escolheu o atributo População!.\n");
        resultado1 = populacao > populacaodois ? 1 : 0; 
        break;
    case 2:
        printf("Você escolheu o atributo Área!.\n");
        resultado1 = area > areadois ? 1 : 0; 
        break;
    case 3:
        printf("Você escolheu o atributo PIB!.\n");
        resultado1 = pib > pibdois ? 1 : 0; 
        break;
    case 4:
        printf("Você escolheu o atributo Pontos Turísticos.\n");
        resultado1 = turisticos > turisticosdois ? 1 : 0; 
        break;
    case 5:
        printf("Você escolheu o atributo População!.\n");
        resultado1 = densidade < densidadedois ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu o atributo Capita.\n");
        resultado1 = capita > capitadois ? 1 : 0; 
        break;
    case 7:
        printf("Você escolheu o atributo Super Poder!.\n");
        resultado1 = superpoderum > superpoderdois ? 1 : 0; 
        break;
    default:
        printf("Opção Inválida.\n");
        break;
    }

    printf("Escolha o segundo atributo:\n");
    printf("Atenção: O mesmo atributo não pode ser escolhido novamente.\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade\n");
    printf("6 - Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha a comparação.\n");
    scanf("%d", &segundoAtributo);

    switch (segundoAtributo)
    {
    case 1:
        printf("Você escolheu o atributo População!.\n");
        resultado2 = populacao > populacaodois ? 1 : 0; 
        break;
    case 2:
        printf("Você escolheu o atributo Área!.\n");
        resultado2 = area > areadois ? 1 : 0; 
        break;
    case 3:
        printf("Você escolheu o atributo PIB!.\n");
        resultado2 = pib > pibdois ? 1 : 0; 
        break;
    case 4:
        printf("Você escolheu o atributo Pontos Turísticos.\n");
        resultado2 = turisticos > turisticosdois ? 1 : 0; 
        break;
    case 5:
        printf("Você escolheu o atributo População!.\n");
        resultado2 = densidade < densidadedois ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu o atributo Capita.\n");
        resultado2 = capita > capitadois ? 1 : 0; 
        break;
    case 7:
        printf("Você escolheu o atributo Super Poder!.\n");
        resultado2 = superpoderum > superpoderdois ? 1 : 0; 
        break;
    default:
        printf("Opção Inválida.\n");
        break;
    }

    if (resultado1 && resultado2){
        printf("Carta 1 venceu na comparação.\n");
        printf("Atributo: %d\n", primeiroAtributo);
    } else if (resultado1 != resultado2){
        printf("Carta 1 e Carta 2 empataram!.\n");
        printf("Atributo Carta 1: %d\n", primeiroAtributo);
        printf("Atributo Carta 2: %d\n", segundoAtributo);
    } else {
        printf("Carta 2 venceu.\n");
        printf("Atributo: %d\n", segundoAtributo);
    }

    return 0;
}
