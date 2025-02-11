#include <stdio.h>

int main() {

    int codCid;
    char* nomeCid;
   
    printf("\n\n ----- Desafio Super Trunfo -----\n\n");
    printf("\n\n");
    printf("Etapa de cadastro de cartas!\n\n");
    printf("Por favor, siga os passos abaixo.\n\n");
    printf("\n");
    printf("Insira o código da cidade: \n");
    scanf("%d", &codCid);
    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeCid);
    printf("\nA carta de número %d é da cidade %s. \n", codCid, nomeCid);
    
    return 0;
}