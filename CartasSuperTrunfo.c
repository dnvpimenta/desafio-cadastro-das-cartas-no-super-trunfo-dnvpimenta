#include <stdio.h>

int main() {

    char codCid[100];
    char nomeCid[60];
    int popCid;
    float areaCid;
    float pibCid;
    int pontosTur;
    float densCid;
    float pibPer;
   
    printf("\n ----- Desafio Super Trunfo -----\n");
    printf("\n\n");
    printf("Etapa de cadastro de cartas!\n\n");
    printf("Por favor, siga os passos abaixo.\n\n");
    printf("\n");
    printf("Insira o código da cidade: ");
    scanf("%s", codCid);
    printf("Insira o nome da cidade: ");
    scanf("%s", nomeCid);
    printf("Qual a população atual da cidade: ");
    scanf("%d", &popCid);
    printf("Qual a área total da cidade em km²: ");
    scanf("%f", &areaCid);
    printf("Qual o PIB atual da cidade: ");
    scanf("%f", &pibCid);
    printf("Quantos Pontos Turísticos tem na cidade: ");
    scanf("%d", &pontosTur);

    densCid = areaCid / popCid;
    pibPer = pibCid / popCid;

    printf("\n\n------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------\n\n");
    printf("\n  A carta de número %s é da cidade %s. \n", codCid, nomeCid);
    printf("\n  A cidade %s possui %d habitantes, em uma área de %f km². \n", nomeCid, popCid, areaCid);
    printf("\n  Densidade populacional de %f de pessoas por km². \n", densCid);
    printf("\n  Seu PIB per capita é de R$ %f, e ela possui %d pontos turísticos. \n", pibPer, pontosTur);
    printf("\n\n------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------\n\n");

    return 0;
}