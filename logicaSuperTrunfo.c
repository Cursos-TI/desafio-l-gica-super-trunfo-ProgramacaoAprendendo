#include <stdio.h>

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
 

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if (populacao > populacaodois) {
             printf("Cidade 1 tem maior população.\n");
             printf("A cidade vencedora é: %s\n", nome);
         } else {
             printf("Cidade 2 tem maior população.\n");
             printf("A cidade vencedora é: %s\n", nomedois);
         }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
