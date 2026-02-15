#include <stdio.h>

int main() {
    //Carta 1
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    //Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado);

    printf("Digite o Codigo de carta (ex: A01): ");
    scanf(" %3s", codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49s", cidade);

    printf("Digite Populaçao: ");
    scanf(" %d", &populacao);

    printf("Digite  a Area (km2): ");
    scanf(" %f", &area);

    printf("Digite o Pib: ");
    scanf(" %f", &pib);

    printf("Digite Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos);

       

// =====================
// CADASTRO - CARTA 2
// =====================
    printf("\n=== CADASTRO CARTA 2 ===\n");

    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%49s", cidade2);

    printf("Digite Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (km2): ");
    scanf("%f", &area2);
     
    printf("Digite o Pib: ");
    scanf("%f", &pib2);

    printf("Digite Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    

    printf("\n=== CARTA CADASTRADA ===\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);


    // =====================
   // EXIBICAO - CARTA 2
  // =====================
  printf("\n=== CARTA 2 CADASTRADA ===\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);



    return 0;




}





