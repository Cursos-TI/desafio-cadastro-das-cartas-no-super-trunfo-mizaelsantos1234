#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado, codigoCarta[50], nomeCidade[50];
    int populacao, numeroDePontos;
    float area, pib;

    printf("CARTA 1: \n");
    printf("Digite uma letra de um estado de A á H: \n");
    scanf("%c", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite o tamanho da area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos: \n");
    scanf("%d", &numeroDePontos);
    

    printf("CARTA 1: \n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigoCarta);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Número de pontos: %d \n", numeroDePontos);


    printf("CARTA 2: \n");
    
    printf("Digite uma letra de um estado de A á H: \n");
    scanf("%c", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite o tamanho da area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos: \n");
    scanf("%d", &numeroDePontos);

    printf("CARTA 2: \n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigoCarta);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Número de pontos: %d \n", numeroDePontos);


    return 0;
}
