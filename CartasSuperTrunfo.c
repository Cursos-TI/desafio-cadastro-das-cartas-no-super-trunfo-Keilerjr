#include <stdio.h>

int main(){
    char c1Estado[1], c2Estado[1];
    char c1Codigo[3], c2Codigo[3];
    char c1Cidade[20], c2Cidade[20];
    int c1Populacao, c2Populacao;
    float c1Area, c2Area;
    float c1PIB, c2PIB;
    int c1PontosTuristicos, c2PontosTuristicos;
    
    //Dados da carta 1

    printf("Insira os dados da primeira Carta\n");
    printf("Estado da carta, usando uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf("%c", &c1Estado);

    printf("Codigo da carta, usando letra do estado seguida de um numero de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", &c1Codigo);

    printf("Cidade da carta:\n");
    scanf("%s", &c1Cidade);

    printf("Numero de habitantes da cidade:\n");
    scanf("%d", &c1Populacao);

    printf("Area da cidade em quilometros quadrados:\n");
    scanf("%f", &c1Area);

    printf("Produto Interno Bruto da cidade:\n");
    scanf("%f", &c1PIB);

    printf("Quantidade de pontos turisticos na cidade:\n");
    scanf("%d", &c1PontosTuristicos);

    //Dados da carta 2

    printf("Insira os dados da segunda Carta\n");
    printf("Estado da carta, usando uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf("%c", &c2Estado);

    printf("Codigo da carta, usando letra do estado seguida de um numero de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", &c2Codigo);

    printf("Cidade da carta:\n");
    scanf("%s", &c2Cidade);

    printf("Numero de habitantes da cidade:\n");
    scanf("%d", &c2Populacao);

    printf("Area da cidade em quilometros quadrados:\n");
    scanf("%f", &c2Area);

    printf("Produto Interno Bruto da cidade:\n");
    scanf("%f", &c2PIB);

    printf("Quantidade de pontos turisticos na cidade:\n");
    scanf("%d", &c2PontosTuristicos);

    //Exibindo dados da carta 1

    printf("Carta 1:\n");
    printf("Estado: %s \n", c1Estado);
    printf("Codigo: %s \n", c1Codigo);
    printf("Nome da cidade: %s \n", c1Cidade);
    printf("Populacao: %d \n", c1Populacao);
    printf("Area: %f \n", c1Area);
    printf("PIB: %f \n", c1PIB);
    printf("Numero de pontos turisticos: %d \n\n", c1PontosTuristicos);

    //Exibindo dados da carta 2

    printf("Carta 2:\n");
    printf("Estado: %s \n", c2Estado);
    printf("Codigo: %s \n", c2Codigo);
    printf("Nome da cidade: %s \n", c2Cidade);
    printf("Populacao: %d \n", c2Populacao);
    printf("Area: %f \n", c2Area);
    printf("PIB: %f \n", c2PIB);
    printf("Numero de pontos turisticos: %d", c2PontosTuristicos);

    return 0;
};
