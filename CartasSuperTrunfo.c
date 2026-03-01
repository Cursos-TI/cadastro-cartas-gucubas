#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variáveis da primeira carta
  char carta1_Estado;
  char carta1_Codigo[3];
  char carta1_Cidade[30];
  int carta1_Populacao;
  float carta1_Area;
  float carta1_PIB;
  int carta1_Pontos_turisticos;

  // Variáveis da segunda carta
  char carta2_Estado;
  char carta2_Codigo[3];
  char carta2_Cidade[30];
  int carta2_Populacao;
  float carta2_Area;
  float carta2_PIB;
  int carta2_Pontos_turisticos;

  // Área para entrada de dados
  
  // Cadastro da primeira carta
  printf ("*** Cadastro das informações da primeira carta ***\n");

  printf ("Insira uma letra para representação do Estado da primeira carta: \n");
  scanf ("%c", &carta1_Estado);

  printf ("Insira um código para a carta, com a letra %c e um número de 01 a 04: \n", carta1_Estado);
  scanf ("%s", carta1_Codigo);  

  printf ("Insira o nome de uma cidade: \n");
  scanf ("%s", carta1_Cidade);
  
  printf ("Insira o número da população de %s: \n", carta1_Cidade);
  scanf ("%d", &carta1_Populacao);
  
  printf ("Insira a área da cidade de %s, em km2: \n", carta1_Cidade);
  scanf ("%f", &carta1_Area);
  
  printf ("Insira o PIB da cidade de %s, em R$ bilhões: \n", carta1_Cidade);
  scanf ("%f", &carta1_PIB);  
  
  printf ("Insira o número de pontos turísticos da cidade de %s: \n", carta1_Cidade);
  scanf ("%d", &carta1_Pontos_turisticos);

  // Cadastro da segunda carta
  printf ("\n*** Cadastro das informações da segunda carta ***\n");

  printf ("Insira uma letra para representação do Estado da segunda carta: \n");
  scanf ("%c", &carta2_Estado);

  printf ("Insira um código para a carta, com a letra %c e um número de 01 a 04: \n", carta2_Estado);
  scanf ("%s", carta2_Codigo);  

  printf ("Insira o nome de uma cidade: \n");
  scanf ("%s", carta2_Cidade);
  
  printf ("Insira o número da população de %s: \n", carta2_Cidade);
  scanf ("%d", &carta2_Populacao);
  
  printf ("Insira a área da cidade de %s, em km2: \n", carta2_Cidade);
  scanf ("%f", &carta2_Area);
  
  printf ("Insira o PIB da cidade de %s, em R$ bilhões: \n", carta2_Cidade);
  scanf ("%f", &carta2_PIB);  
  
  printf ("Insira o número de pontos turísticos da cidade de %s: \n", carta2_Cidade);
  scanf ("%d", &carta2_Pontos_turisticos);
  
  // Área para exibição dos dados da cidade
  // Exibição do cadastro da primeira carta
  printf("\n*** Cartas cadastradas ***\n");
  printf("\nCARTA 1:\n");
  printf("Letra do Estado: %c\n", carta1_Estado);
  printf("Código da carta: %s\n", carta1_Codigo);
  printf("Cidade: %s\n", carta1_Cidade);
  printf("População: %d\n", carta1_Populacao);
  printf("Área: %f km2\n", carta1_Area);
  printf("PIB: R$ %f bilhões\n", carta1_PIB);
  printf("Número de pontos turísticos: %d\n", carta1_Pontos_turisticos);

  // Exibição do cadastro da segunda carta
  printf("\nCARTA 2:\n");
  printf("Letra do Estado: %c\n", carta2_Estado);
  printf("Código da carta: %s\n", carta2_Codigo);
  printf("Cidade: %s\n", carta2_Cidade);
  printf("População: %d\n", carta2_Populacao);
  printf("Área: %f km2\n", carta2_Area);
  printf("PIB: R$ %f bilhões \n", carta2_PIB);
  printf("Número de pontos turísticos: %d\n", carta2_Pontos_turisticos);

return 0;
} 
