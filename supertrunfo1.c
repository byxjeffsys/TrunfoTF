#include <stdio.h>

int main(){

    //Declaração da Carta 1
    char estado1[3];
    char codigo1[4];
    char cidade1[49];
    int populacao1;
    float area1;
    float pib1;
    int pturisticos1;

    //Declaração da Carta 2
    char estado2[3];
    char codigo2[4];
    char cidade2[49];
    int populacao2;
    float area2;
    float pib2;
    int pturisticos2;

    //Cadastro da Carta 1
    printf("\nCadastro da Carta 1 \n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %s", estado1);
    printf("Informe o código da carta: \n");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Informe a população da cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (KM): \n");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &pturisticos1);

    printf("\nCarta de código %s foi cadastrada com sucesso!\n", codigo1);


    //Cadastro da Carta 2
    printf("\nCadastro da Carta 2 \n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %s", estado2);
    printf("Informe o código da carta: \n");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Informe a população da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (KM): \n");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &pturisticos2);

    printf("\nCarta de código %s foi cadastrada com sucesso!\n", codigo2);


    //Exibição Carta 1
    printf("\n Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos turisticos: %d", pturisticos1);

    //Exibição Carta 2
    printf("\n Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos turisticos: %d", pturisticos2);

    return 0;



}