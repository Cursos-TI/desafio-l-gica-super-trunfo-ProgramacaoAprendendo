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
    srand(time(0));
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

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

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf("Comparação das cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade\n");
    printf("6 - Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador)
    {
    case 1:
        if (populacao > populacaodois)
        {
            printf("Cidade 1 tem maior população.\n");
        }
        else if (populacaodois > populacao)
        {
            printf("Cidade 2 tem maior população.\n");
        }
        else
        {
            printf("Empatou!.\n");
        }
        
        break;
        case 2:
        if (area > areadois)
        {
            printf("Cidade 1 tem maior área.\n");
        }
        else if (areadois > area)
        {
            printf("Cidade 2 tem maior área.\n");
        }
        else
        {
            printf("Empatou!.\n");
        }
        
        break;
        case 3:
        if (pib > pibdois)
        {
            printf("Cidade 1 tem maior PIB.\n");
        }
        else if (pibdois > pib)
        {
            printf("Cidade 2 tem maior PIB.\n");
        }
        else
        {
            printf("Empatou!.\n");
        }
        
        break;
        case 4:
        if (turisticos > turisticosdois)
        {
            printf("Cidade 1 tem maior população.\n");
        }
        else if (turisticosdois > turisticos)
        {
            printf("Cidade 2 tem maior população.\n");
        }
        else
        {
            printf("Empatou!.\n");
        }
        
        break;
        case 5:
        if (densidade < densidadedois)
        {
            printf("Cidade 1 tem menor densidade.\n");
        }
        else if (densidadedois < densidade)
        {
            printf("Cidade 2 tem menor densidade.\n");
        }
        else
        {
            printf("Empatou!.\n");
        }
        
        break;
        case 6:
        if (capita > capitadois)
        {
            printf("Cidade 1 tem maior capita.\n");
        }
        else if (capitadois > capita)
        {
            printf("Cidade 1 tem maior capita.\n");
        }
        else
        {
            printf("Empatou!.\n");
        }
        
        break;
        case 7:
        if (superpoderum > superpoderdois)
        {
            printf("Cidade 1 tem maior Super Poder.\n");
        }
        else if (superpoderdois > superpoderum)
        {
            printf("Cidade 1 tem maior Super Poder.\n");
        }
        else
        {
            printf("Empatou!.\n");
        }
        
        break;
    default:
        printf("Opção Inválida.\n");
        break;
    }
    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
