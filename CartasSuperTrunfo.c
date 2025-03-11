#include <stdio.h>

/* Desafio: Nivel Novato
Tema 1 - Super Trunfo
Cadastrar cartas com informações sobre as cidades.
*/

int main(){
    // Declarando variáveis para armazenar informações das cartas, incluindo estado, código, cidade, população, área em Km², PIB e pontos turísticos
    char estado1, estado2;
    char codcarta1[50], codcarta2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2; 
    int pontosturisticos1, pontosturisticos2;

    //Entrada de dados para a primeira carta
    printf("\n Cadastrando a Carta 1, digite as informações abaixo:\n");
    printf("Estado (Ex: A,B,C): ");
    scanf(" %c", &estado1);

    printf("Código da carta (Ex: A01, A02, B01): ");
    scanf("%s", codcarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em Km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    //Entrada de dados para a segunda carta
    printf("\n Cadastrando a Carta 2, digite as informações abaixo:\n");
    printf("Estado (Ex: A,B,C): ");
    scanf(" %c", &estado2);

    printf("Código da carta (Ex: A01, A02, B01): ");
    scanf("%s", codcarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em Km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Saída de dados da cartas 1
    printf("\n Carta 01: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codcarta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    // Saída de dados da cartas 2
    printf("\n Carta 02: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codcarta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

    return 0;

}