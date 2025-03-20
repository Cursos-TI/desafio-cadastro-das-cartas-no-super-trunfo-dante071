#include <stdio.h>

/* Desafio: Nivel Mestre
Tema 1 - Super Trunfo
Exibindo a comparação das cartas
*/

int main(){
    // Declarando variáveis para armazenar informações das cartas, incluindo estado, código, cidade, população, área em Km², PIB e pontos turísticos
    char estado1, estado2;
    char codcarta1[50], codcarta2[50];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2; 
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float inversoDensidade1, inversoDensidade2;
    float pibpercapita1, pibpercapita2;
    float superPoder1, superPoder2;
    

    //Entrada de dados para a primeira carta
    printf("\n Cadastrando a Carta 1, digite as informações abaixo:\n");
    printf("Estado (Ex: A,B,C): ");
    scanf(" %c", &estado1);

    printf("Código da carta (Ex: A01, A02, B01): ");
    scanf("%s", codcarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Área em Km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Saída de dados da carta 1
    printf("\n Carta 01: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codcarta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    //Exibindo informações adicionais da Carta 1
    densidade1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    pibpercapita1 = (float) pib1 * 1000000000 / populacao1;
    printf("Pib per Capita: %.2f reais \n", pibpercapita1);

    // Calcular Super Poder da carta 1 e exibindo
    inversoDensidade1 = 1 / densidade1;
    superPoder1 = (float) (populacao1 + area1 + pontosturisticos1 + pibpercapita1 + inversoDensidade1) + (pib1 * 1000000000);

    printf("Super Poder: %f \n", superPoder1);


    // Saída de dados da carta 2
    printf("\n Carta 02: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codcarta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);

    //Exibindo informações adicionais da Carta 2
    densidade2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    pibpercapita2 = (float) pib2 * 1000000000 / populacao2;
    printf("Pib per Capita: %.2f reais \n", pibpercapita2);

    // Calcular Super Poder da carta 2 e exibindo
    inversoDensidade2 = 1 / densidade2;
    superPoder2 = (float) (populacao2 + area2 + pontosturisticos2 + pibpercapita2 + inversoDensidade2) + (pib2 * 1000000000);

    printf("Super Porder: %f \n", superPoder2);

    // Comparação das cartas
    printf("\n---RESULTADO DO JOGO---\n");
    printf("População: %d \n", populacao1 > populacao2);
    printf("Área: %d \n", area1 > area2);
    printf("PIB: %d \n", pib1 > pib2);
    printf("Pontos Turísticos: %d \n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: %d \n", densidade1 < densidade2);
    printf("PIB per Capita: %d \n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: %d \n", superPoder1 > superPoder2);

    return 0;

}