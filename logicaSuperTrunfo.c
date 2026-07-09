#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char letra;
    char codigo[4];
    char estado[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float Pib1, Pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float PIBperCapita1, PIBperCapita2;
    int populacao, area, pontosturisticos, pib, densidade, superpoder, opcao;

    
    // Cadastro das Cartas:

        printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &letra);

    printf("Digite um numero de 1 a 4: ");
    scanf("%s", codigo);

    printf("Digite nome da cidade: ");
    scanf("%s", estado);

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

    printf("\n\n");

    printf("Carta 1:\n");
    printf("Estado:%c\n", letra);
    printf("codigo:%c%s\n", letra, codigo);
    printf("Nome da cidade:%s\n", estado);
    printf("População:%lu\n", populacao1);
    printf("Área:%.2f km²\n", area1);
    printf("PIB:%.2f bilhões de reais\n", Pib1);
    printf("Numero de pontos turisticos:%d\n", pontosTuristicos1);
    printf("Densidade População: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);

    printf("\n\n");

    printf("--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &letra);

    printf("Digite um numero de 01 a 04: ");
    scanf("%s", codigo);

    printf("Digite nome da cidade: ");
    scanf("%s", estado);

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

    printf("\n\n");

    printf("Carta 2:\n");
    printf("Estado:%c\n", letra);
    printf("codigo:%c%s\n", letra, codigo);
    printf("Nome da cidade:%s\n", estado);
    printf("População:%lu\n", populacao2);
    printf("Área:%.2f km²\n", area2);
    printf("PIB:%.2f bilhões de reais\n", Pib2);
    printf("Numero de pontos turisticos:%d\n", pontosTuristicos2);
    printf("Densidade População: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

    printf("\n\n");

    // Comparação de Cartas:

     printf("Comparação da Cartas:\n");

  printf("Escolha um atributo para comparar:\n");
  printf("1. Comparar População\n");
  printf("2. Comparar Área\n");
  printf("3. Comparar PIB\n");
  printf("4. Comparar Densidade\n");
  printf("5. Comparar Super Poder\n");
  printf("6. Comparar pontos Turisticos\n");
  scanf("%d", &opcao);
   

    // Exibição dos Resultados:
   switch (opcao)
  {
  case 1:
    if (populacao1 > populacao2)
    {
      printf("População: Carta 1 venceu (1) - Valor:%lu Mil Habitantes\n", populacao1);
    }
    else
    {
      printf("População: Carta 2 venceu (0) - Valor:%lu Mil Habitantes\n", populacao2);
    }
    break;
  case 2:
    if (area1 > area2)
    {
      printf("Área: Carta 1 venceu (1) - Valor:%lu Km²\n", populacao1);
    }
    else
    {
      printf("Área: Carta 1 venceu (0) - Valor:%lu Km²\n", populacao2);
    }
    break;
  case 3:
    if ((Pib1 > Pib2))
    {
      printf("PIB: Carta 1 venceu (1) - Valor:%.2f reais\n", Pib1);
    }
    else
    {
      printf("PIB: Carta 2 venceu (0) - Valor:%.2f reais\n", Pib2);
    }
    break;
  case 4:
    if (densidade1 < densidade2)
    {
      printf("Densidade Populacional: Carta 1 venceu (1) - Valor:%.2f hab/km²\n", densidade1);
    }
    else
    {
      printf("Densidade Populacional: Carta 2 venceu (0) - Valor:%.2f hab/km²\n", densidade2);
    }
    break;
  case 5:
    if (densidade1 < densidade2)
    {
      printf("Super Poder: Carta 1 venceu (1) - Valor:%.2f \n", densidade1);
    }
    else
    {
      printf("Super Poder: Carta 2 venceu (0) - Valor:%.2f \n", densidade2);
    }
    break;
  case 6:
    if (pontosTuristicos1 > pontosTuristicos2)
    {
      printf("Pontos turísticos: Carta 1 venceu (1) - Valor:%d\n", pontosTuristicos1);
    }
    else
    {
      printf("Pontos turísticos: Carta 2 venceu (0) - Valor:%d\n", pontosTuristicos2);
    }
    break;

  default:
    printf("Opção invalida, tente novamente!\n");
    break;
  }

    return 0;
}
