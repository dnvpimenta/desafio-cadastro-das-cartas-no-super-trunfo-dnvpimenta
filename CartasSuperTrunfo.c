#include <stdio.h>

int main() {

    char codCid[100];
    char nomeCid[50];
    int popCid;
    float areaCid;
    float pibCid;
    int pontosTur;
   
    printf("\n\n ----- Desafio Super Trunfo -----\n\n");
    printf("\n\n");
    printf("Etapa de cadastro de cartas!\n\n");
    printf("Por favor, siga os passos abaixo.\n\n");
    printf("\n");
    printf("Insira o código da cidade: \n");
    scanf("%s", codCid);
    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeCid);
    printf("Qual a população atual da cidade: \n");
    scanf("%d", &popCid);
    printf("Qual a área total da cidade em m²: \n");
    scanf("%f", &areaCid);
    printf("Qual o PIB atual da cidade: \n");
    scanf("%f", &pibCid);
    printf("Quantos Pontos Turísticos tem na cidade: \n");
    scanf("%d", &pontosTur);

    printf("\n\n ------------------------------------------------------------------------------\n\n");
    printf("\nA carta de número %s é da cidade %s. \n", codCid, nomeCid);
    printf("\nA cidade %s possui %d habitantes, em uma área de %f m². \n", nomeCid, popCid, areaCid);
    printf("\nSeu PIB é de R$ %f, e ela possui %d pontos turísticos. \n", pibCid, pontosTur);
    printf("\n\n ------------------------------------------------------------------------------\n\n");

    return 0;
}