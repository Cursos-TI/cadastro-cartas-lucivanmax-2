#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  /* Declarando variáveis da carta1*/
  char estado1;
  char codigo1[5];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  float densidadePopulacional1; // Nova variável
  float pibPerCapita1;          // Nova variável
  float superPoder1;            // Nova variável Nível Mestre


  /* Declarando variáveis da carta2*/
  char estado2;
  char codigo2[5];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  float densidadePopulacional2; // Nova variável
  float pibPerCapita2;          // Nova variável
  float superPoder2;            // Nova variável Nível Mestre

  // Área para entrada de dados


  // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta (Ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", cidade1); // Lê a linha toda, incluindo espaços
    
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta (Ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);
    
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2); 

  // --- Área de Cálculos ---
  
  // Cálculos para a Carta 1
  densidadePopulacional1 = (float)populacao1 / area1;
  // Multiplicamos o PIB por 1.000.000.000 porque ele foi inserido em bilhões
  pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; 
  // Super Poder Carta 1: soma dos atributos com o inverso da densidade
  superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

  // Cálculos para a Carta 2
  densidadePopulacional2 = (float)populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
  // Super Poder Carta 2: soma dos atributos com o inverso da densidade
  superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);


  // Área para divulgação dos dados da cidade

  printf("\n\n===== CARTAS CADASTRADAS =====\n");
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // inserindo o resultado do calculo carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
  
    // inserindo o resultado do calculo carta 2
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);


  // --- Área de Comparação e Resultados ---

  printf("\n\n===== RESULTADO DAS COMPARAÇÕES =====\n");
  printf("(1 = Carta 1 venceu | 0 = Carta 2 venceu)\n\n");

  // Atributos onde o maior valor ganha
  printf("População: %d\n", populacao1 > populacao2);
  printf("Área: %d\n", area1 > area2);
  printf("PIB: %d\n", pib1 > pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
  printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
  
  // Densidade Populacional: o menor valor ganha
  printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
  
  // Super Poder: o maior valor ganha
  printf("Super Poder: %d\n", superPoder1 > superPoder2);

return 0;
}
