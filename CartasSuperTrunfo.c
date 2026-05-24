#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 3 - Desenvolvendo a Lógica do Jogo - nível novato

int main() {

  // ÁREA DE DEFINIÇÃO DAS VARIÁVEIS
  
  
  /* Variáveis da Carta 1 */
  char estado1[50];          
  char codigo1[5];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;

  /* Variáveis da Carta 2 */
  char estado2[50];          
  char codigo2[5];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;

 
  // ÁREA PARA ENTRADA DE DADOS 


  // --- Cadastro da Carta 1 ---
  printf("--- Cadastro da Carta 1 ---\n");
  
  printf("Digite o Estado: ");
  scanf(" %[^\n]s", estado1);
  
  printf("Digite o Código da Carta (Ex: A01): ");
  scanf("%s", codigo1);
  
  printf("Digite o nome da Cidade: ");
  scanf(" %[^\n]s", cidade1); 
  
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
  
  printf("Digite o Estado: ");
  scanf(" %[^\n]s", estado2);
  
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


  // ÁREA DE PROCESSAMENTO E CÁLCULOS
  
  // Cálculos para a Carta 1
  densidadePopulacional1 = (float)populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; 

  // Cálculos para a Carta 2
  densidadePopulacional2 = (float)populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

 
  // ÁREA PARA EXIBIÇÃO DOS DADOS CADASTRADOS


  printf("\n\n===== CARTAS CADASTRADAS =====\n");
    
  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);


  // ÁREA DE COMPARAÇÃO UTILIZANDO IF / ELSE

  printf("\n\n===== RESULTADO DA COMPARAÇÃO =====\n");
  
  // Atributo escolhido diretamente no código: População
  printf("Comparação de cartas (Atributo: População):\n\n");
  printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
  printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

  // Lógica de decisão para avaliar qual valor de população é maior
  if (populacao1 > populacao2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
  } else if (populacao2 > populacao1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
  } else {
      printf("Resultado: Empate! Ambas as cidades possuem a mesma população.\n");
  }

  return 0;
}
