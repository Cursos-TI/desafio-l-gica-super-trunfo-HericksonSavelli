#include <stdio.h>
#include <string.h>

int main()
{
  char letra1, letra2;
  char codigo1[4], codigo2[4];
  char cidade1[50], cidade2[50];

  unsigned long int populacao1, populacao2;
  float area1, area2;
  float Pib1, Pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidade1, densidade2;
  float PIBperCapita1, PIBperCapita2;
  float superpoder1, superpoder2;

  int opcao1, opcao2, atributo1, atributo2;
  int resultado1, resultado2;
  float somaCarta1, somaCarta2;

  // Variáveis para guardar os valores dos atributos escolhidos para a soma final
  float valorCarta1Atributo1 = 0, valorCarta2Atributo1 = 0;
  float valorCarta1Atributo2 = 0, valorCarta2Atributo2 = 0;
  char nomeAtributo1[30], nomeAtributo2[30];

  printf("***Bem vindo os jogo Super Trunfo***\n");
  printf("- Cadastre as informações de duas cartas -\n\n");
  printf("--- CADASTRO DA CARTA 1 ---\n");

  printf("Digite uma letra de A a H: ");
  scanf(" %c", &letra1);
  printf("Digite um numero de 1 a 4: ");
  scanf("%s", codigo1);
  printf("Digite nome da cidade: ");
  scanf("%s", &cidade1);
  printf("Digite numero de habitantes da cidade: ");
  scanf("%lu", &populacao1);
  printf("Digite a area em quilometros quadrados: ");
  scanf("%f", &area1);
  printf("Digite produto interno bruto: ");
  scanf("%f", &Pib1);
  printf("Digite a quantidade de pontos turisticos da cidade: ");
  scanf("%d", &pontosTuristicos1);

  densidade1 = populacao1 / area1;
  PIBperCapita1 = Pib1 / populacao1;
  superpoder1 = populacao1 + area1 + Pib1 + pontosTuristicos1 + PIBperCapita1 + densidade1;

  printf("\n\n");
  // Cadastro da segunda carta
  printf("--- CADASTRO DA CARTA 2 ---\n");

  printf("Digite uma letra de A a H: ");
  scanf(" %c", &letra2);

  printf("Digite um numero de 01 a 04: ");
  scanf("%s", codigo2);

  printf("Digite nome da cidade: ");
  scanf("%s", &cidade2);

  printf("Digite numero de habitantes da cidade: ");
  scanf("%lu", &populacao2);

  printf("Digite a area em quilometros quadrados: ");
  scanf("%f", &area2);

  printf("Digite produto interno bruto: ");
  scanf("%f", &Pib2);

  printf("Digite a quantidade de pontos turisticos da cidade: ");
  scanf("%d", &pontosTuristicos2);

  densidade2 = populacao2 / area2;
  PIBperCapita2 = Pib2 / populacao2;
  superpoder2 = populacao2 + area2 + Pib2 + pontosTuristicos2 + PIBperCapita2 + densidade2;

  printf("\n\n");

  // Menu de comparação das cartas

  printf("***Comparação da Cartas***\n");

  printf("Escolha os atributos para serem comparados, pode escolher duas opções:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Densidade\n");
  printf("5. Super Poder\n");
  printf("6. pontos Turisticos\n");
  printf("7. Pib per capita\n");
  printf("Primeira comparação:\n");
  scanf("%d", &atributo1);
//switch primeira carta escolhida
  switch (atributo1)
  {
  case 1:
    printf("Você escolheu comparar população!\n");
    strcpy(nomeAtributo1, "População");
    valorCarta1Atributo1 = populacao1;
    valorCarta2Atributo1 = populacao2;
    resultado1 = populacao1 > populacao2;

    break;
  case 2:
    printf("Você escolheu comparar Área!\n");
    strcpy(nomeAtributo1, "Área");
    valorCarta1Atributo1 = area1;
    valorCarta2Atributo1 = area2;
    resultado1 = area1 > area2;

    break;
  case 3:
    printf("Você escolheu comparar PIB!\n");
    strcpy(nomeAtributo1, "PIB");
    valorCarta1Atributo1 = Pib1;
    valorCarta2Atributo1 = Pib2;
    resultado1 = Pib1 > Pib2;

    break;
  case 4:
    printf("Você escolheu comparar Densidade!\n");
    strcpy(nomeAtributo1, "Densidade");
    valorCarta1Atributo1 = densidade1;
    valorCarta2Atributo1 = densidade2;
    resultado1 = densidade1 < densidade2;

    break;
  case 5:
    printf("Você escolheu comparar Super Poder!\n");
    strcpy(nomeAtributo1, "Super Poder");
    valorCarta1Atributo1 = superpoder1;
    valorCarta2Atributo1 = superpoder2;
    resultado1 = superpoder1 > superpoder2;

    break;
  case 6:
    printf("Você escolheu comparar Pontos Turisticos!\n");
    strcpy(nomeAtributo1, "Pontos Turisticos");
    valorCarta1Atributo1 = pontosTuristicos1;
    valorCarta2Atributo1 = pontosTuristicos2;
    resultado1 = pontosTuristicos1 > pontosTuristicos2;

    break;
  case 7:
    printf("Você escolheu comparar Pib per capita!\n");
    strcpy(nomeAtributo1, "Pib per capita");
    valorCarta1Atributo1 = pontosTuristicos1;
    valorCarta2Atributo1 = pontosTuristicos2;
    resultado1 = PIBperCapita1 > PIBperCapita2;

    break;

  default:
    printf("Opção inválida, tente novamente!\n");
    break;
  }
  // Escolha do segundo atributo, excluindo a primeira opção

  printf("Escolha segundo atributo para comparar\n");

  if (atributo1 != 1)
    printf("1 - População\n");
  if (atributo1 != 2)
    printf("2 - Área\n");
  if (atributo1 != 3)
    printf("3 - PIB\n");
  if (atributo1 != 4)
    printf("4 - Densidade\n");
  if (atributo1 != 5)
    printf("5 - Super Poder\n");
  if (atributo1 != 6)
    printf("6 - Pontos Turísticos\n");
  if (atributo1 != 7)
    printf("7 - Pib per capita\n");
  scanf("%d", &atributo2);
//switch segunda carta escolhida
  switch (atributo2)
  {
  case 1:
    printf("Você escolheu comparar população!\n");
    strcpy(nomeAtributo2, "População");
    valorCarta1Atributo2 = populacao1;
    valorCarta2Atributo2 = populacao2;
    resultado2 = populacao1 > populacao2;
    break;
  case 2:
    printf("Você escolheu comparar Área!\n");
    strcpy(nomeAtributo2, "Área");
    valorCarta1Atributo2 = area1;
    valorCarta2Atributo2 = area2;
    resultado2 = area1 > area2;
    break;
  case 3:
    printf("Você escolheu comparar PIB!\n");
    strcpy(nomeAtributo2, "PIB");
    valorCarta1Atributo2 = Pib1;
    valorCarta2Atributo2 = Pib2;
    resultado2 = Pib1 > Pib2;
    break;
  case 4:
    printf("Você escolheu comparar Densidade!\n");
    strcpy(nomeAtributo2, "Densidade");
    valorCarta1Atributo2 = densidade1;
    valorCarta2Atributo2 = densidade2;
    resultado2 = densidade1 < densidade2;
    break;
  case 5:
    printf("Você escolheu comparar Super Poder!\n");
    strcpy(nomeAtributo2, "Super Poder");
    valorCarta1Atributo2 = superpoder1;
    valorCarta2Atributo2 = superpoder2;
    resultado2 = superpoder1 > superpoder2;
    break;
  case 6:
    printf("Você escolheu comparar Pontos Turisticos!\n");
    strcpy(nomeAtributo2, "Pontos Turisticos");
    valorCarta1Atributo2 = pontosTuristicos1;
    valorCarta2Atributo2 = pontosTuristicos2;
    resultado2 = pontosTuristicos1 > pontosTuristicos2;
    break;
  case 7:
    printf("Você escolheu comparar Pib per capita!\n");
    strcpy(nomeAtributo2, "Pib per capita");
    valorCarta1Atributo1 = pontosTuristicos1;
    valorCarta2Atributo2 = pontosTuristicos2;
    resultado2 = PIBperCapita1 > PIBperCapita2;

    break;
  default:
    printf("Opção de jogo inválida, tente novamente!\n");
    break;
  }
  // Soma dos resultados das cartas

  somaCarta1 = valorCarta1Atributo1 + valorCarta1Atributo2;
  somaCarta2 = valorCarta2Atributo1 + valorCarta2Atributo2;

  // Resultado

  printf("\n===== Resultado =====\n");
  printf("Cartas: %s VS %s\n", cidade1, cidade2);
  printf("Atributos Usados: %s e %s\n\n", nomeAtributo1, nomeAtributo2);

  printf("Valores da Carta 1 (%s):\n", cidade1);
  printf(" - %s: %.2f\n", nomeAtributo1, valorCarta1Atributo1);
  printf(" - %s: %.2f\n", nomeAtributo2, valorCarta2Atributo1);
  printf(" - SOMA DOS ATRIBUTOS: %.2f\n\n", somaCarta1);

  printf("Valores da Carta 2 (%s):\n", cidade2);
  printf(" - %s: %.2f\n", nomeAtributo1, valorCarta1Atributo2);
  printf(" - %s: %.2f\n", nomeAtributo2, valorCarta2Atributo2);
  printf(" - SOMA DOS ATRIBUTOS: %.2f\n", somaCarta2);
  // DEFINIÇÃO DO VENCEDOR PELA SOMA
  if (somaCarta1 > somaCarta2)
  {
    printf("Resultado Final: %s (Carta 1) VENCEU!\n", cidade1);
  }
  else if (somaCarta2 > somaCarta1)
  {
    printf("Resultado Final: %s (Carta 2) VENCEU!\n", cidade2);
  }
  else
  {
    printf("Resultado Final: Empate!\n");
  }
  return 0;
}