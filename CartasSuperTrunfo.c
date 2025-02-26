#include <stdio.h>

int main() {

    //Variaveis
    char estado1[4];
    char codigo1[4];
    char Cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //Coleta de Dados
    printf("Bem vindo ao Super Trunfo!\n");
    printf("Antes de começar qual vai ser a sua carta?!\n");

    printf("Digite o codigo do estado ( Uma letra entre A e H): \n");
    scanf("%s", &estado1);
   
    printf("Digite o codigo da Carta (A letra do estado seguido de um numero: 01,02,03 ou 04): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade1);  

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos da cidade: \n");
    scanf("%d", &pontos1);

    //Calculo do Pib per capita e Densidade
    float densidade1 = populacao1 / (float)area1;   
    float pibcapita1 = pib1 / (float)populacao1;
    

    //Exibição dos Dados
    printf("\n");
    printf("Sua carta esta pronta!\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade: %.2f hab/Km²\n", densidade1);
    printf("PIB per capita: %.2f Reais\n", pibcapita1);
    printf("Proxima carta?: \n");
    printf("\n");

    //Variaveis
    char estado2[4];
    char codigo2[4];
    char Cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    //Coleta de Dados
    printf("\n");
    printf("Qual vai ser a sua proxima carta?!\n");

    printf("Digite o codigo do estado ( Uma letra entre A e H): \n");
    scanf("%s", &estado2);
   
    printf("Digite o codigo da Carta (A letra do estado seguido de um numero: 01,02,03 ou 04): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade2);  

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da cidade: \n");
    scanf("%d", &pontos2);

    //Calculo do Pib per capita e Densidade
    float densidade2 = populacao2 / area2;
    float pibcapita2 = pib2 / populacao2;

    //Exibição dos Dados
    printf("\n");
    printf("Sua carta esta pronta!\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f Km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade: %.2f hab/Km²\n", densidade2);
    printf("PIB per capita: %.2f Reais\n", pibcapita2);
    printf("Proxima carta?: \n");
 
return 0;
} 
