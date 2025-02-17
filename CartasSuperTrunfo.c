#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar os dados de uma cidade
typedef struct {
    char estado[50];
    char codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
} Cidade;

// Função para calcular a densidade demográfica
float calcularDensidadeDemografica(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(float pib, int populacao) {
    return pib / populacao;
}

int main() {
    Cidade cidade1, cidade2;

    // Entrada de dados para a primeira cidade
    printf("--- Cadastro da Cidade 1 ---\n");
    printf("Estado: ");
    scanf("%s", cidade1.estado);
    printf("Código da cidade: ");
    scanf("%s", &cidade1.codigo);
    getchar(); // Limpa o buffer do teclado
    printf("Nome da cidade: ");
    fgets(cidade1.nome, 50, stdin);
    cidade1.nome[strcspn(cidade1.nome, "\n")] = '\0'; // Remove a quebra de linha (\n) do final
    printf("População: ");
    scanf("%d", &cidade1.populacao);
    printf("Área (km²): ");
    scanf("%f", &cidade1.area);
    printf("PIB: R$ ");
    scanf("%f", &cidade1.pib);

    // Entrada de dados para a segunda cidade
    printf("\n--- Cadastro da Cidade 2 ---\n");
    printf("Estado: ");
    scanf("%s", cidade2.estado);
    printf("Código da cidade: ");
    scanf("%s", &cidade2.codigo);
    getchar(); // Limpa o buffer do teclado
    printf("Nome da cidade: ");
    fgets(cidade2.nome, 50, stdin);
    cidade2.nome[strcspn(cidade2.nome, "\n")] = '\0'; // Remove a quebra de linha (\n) do final
    printf("População: ");
    scanf("%d", &cidade2.populacao);
    printf("Área (km²): ");
    scanf("%f", &cidade2.area);
    printf("PIB: R$ ");
    scanf("%f", &cidade2.pib);

    // Cálculos para a primeira cidade
    float densidade1 = calcularDensidadeDemografica(cidade1.populacao, cidade1.area);
    float pibPerCapita1 = calcularPIBPerCapita(cidade1.pib, cidade1.populacao);

    // Cálculos para a segunda cidade
    float densidade2 = calcularDensidadeDemografica(cidade2.populacao, cidade2.area);
    float pibPerCapita2 = calcularPIBPerCapita(cidade2.pib, cidade2.populacao);

    // Exibição dos dados da primeira cidade
    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Estado: %s\n", cidade1.estado);
    printf("Código: %d\n", cidade1.codigo);
    printf("Nome: %s\n", cidade1.nome);
    printf("População: %d\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: R$ %.2f\n", cidade1.pib);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    // Exibição dos dados da segunda cidade
    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Estado: %s\n", cidade2.estado);
    printf("Código: %d\n", cidade2.codigo);
    printf("Nome: %s\n", cidade2.nome);
    printf("População: %d\n", cidade2.populacao);
    printf("Área: %.2f km²\n", cidade2.area);
    printf("PIB: R$ %.2f\n", cidade2.pib);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    // Comparação do PIB per capita e da Densidade Demográfica das duas cidades
    printf("\n--- Análise das Cidades ---\n");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("A cidade com maior PIB per capita é: %s (R$ %.2f)\n", cidade1.nome, pibPerCapita1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("A cidade com maior PIB per capita é: %s (R$ %.2f)\n", cidade2.nome, pibPerCapita2);
    } else {
        printf("As duas cidades têm o mesmo PIB per capita: R$ %.2f\n", pibPerCapita1);
    }
    if (densidade1 < densidade2) {
        printf("A cidade com menor densidade demográfica é: %s (%.2f hab/km²)\n", cidade1.nome, densidade1);
    } else if (densidade2 < densidade1) {
        printf("A cidade com menor densidade demográfica é: %s (%.2f hab/km²)\n", cidade2.nome, densidade2);
    } else {
        printf("As duas cidades têm a mesma densidade demográfica: %.2f hab/km²\n", densidade1);
    }

    return 0;
}