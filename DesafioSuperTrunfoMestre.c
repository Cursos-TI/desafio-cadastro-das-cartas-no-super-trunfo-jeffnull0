#include <stdio.h>

 int main(){ 
    //dados das váriaveis da primeira carta
    int pontos_turisticos1;
    char estado1[4], codigo1[4], nome_cidade1[30];
    float area1, PIB1, densidade1, percapita1;
    unsigned long int populacao1, super_poder1;

    //dados das váriaveis da segunda carta
    int pontos_turisticos2;
    char estado2[4], codigo2[4], nome_cidade2[30];
    float area2, PIB2, densidade2, percapita2;
    unsigned long int populacao2, super_poder2;

    //variaveis comparação
    int R_pontosTuristicos;
    unsigned long int R_area, R_PIB, R_densidadePopulacional, R_percapita, R_superPoder;
    unsigned long int R_populacao;

 //cabeçario do projeto

 printf ("\n    Jogo Super Trunfo \n\n");
 printf("A seguir digite as informações das cartas! \n");
 
    //entrada de dados das cartas
      //primeira carta

      printf(" Carta Número 1: \n\n");

      printf("Digite uma letra de 'A' a 'H' para representar o estado): \n");
      scanf(" %s", &estado1);

      printf("Digite um código para o estado, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
      scanf(" %s", &codigo1);

      printf("Digite o nome de uma cidade: \n");
      scanf(" %s", &nome_cidade1);

      printf("Digite o número de habitantes: \n");
      scanf(" %lu", &populacao1);

      printf("Digite a área da cidade em quilômetros quadrados: \n");
      scanf(" %f", &area1);
      densidade1 = (unsigned long int) populacao1 / area1;

      printf("Digite o Produto Interno Bruto da cidades (PIB): \n");
      scanf(" %f", &PIB1);
      percapita1 = (unsigned long int) PIB1 / populacao1;

      printf("Digite o número de pontos turísticos da cidade: \n");
      scanf(" %d", &pontos_turisticos1);

      super_poder1 = (double)populacao1 + (double)area1 + (double)PIB1 + (double)pontos_turisticos1 +(double) percapita1 +(double)densidade1;
      
      //segunda carta

      printf("\n Carta Número 2: \n\n");

      printf("Digite uma letra de 'A' a 'H' para representar o estado): \n");
      scanf(" %s", &estado2);

      printf("Digite um código para o estado, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
      scanf(" %s", &codigo2);

      printf("Digite o nome de uma cidade: \n");
      scanf(" %s", &nome_cidade2);

      printf("Digite o número de habitantes:\n");
      scanf(" %lu", &populacao2);

      printf("Digite a área da cidade em quilômetros quadrados: \n");
      scanf(" %f", &area2);
      densidade2 = (unsigned long int) populacao2 / area2;

      printf("Digite o Produto Interno Bruto da cidades (PIB): \n");
      scanf(" %f", &PIB2);
      percapita2 = (unsigned long int) PIB2 / populacao2;

      printf("Digite o número de pontos turísticos da cidade: \n");
      scanf(" %d", &pontos_turisticos2);

      super_poder2 = (double)populacao2 + (double)area2 + (double)PIB2 + (double)pontos_turisticos2 +(double) percapita2 +(double)densidade2;

   //saída de dados
   //imprimindo resultados da entrada de dados das cartas
      //primeira carta

      printf("\nCarta Número 1: \n");
      printf("Letra: %s\n", estado1);
      printf("Codigo: %s\n", codigo1);
      printf("Nome da Cidade: %s\n", nome_cidade1);
      printf("População: %.2lu\n", populacao1);
      printf("Área: %.3f (km²)\n", area1);
      printf("PIB: %.3f Reais\n", PIB1);
      printf("Pontos Turísticos: %d\n", pontos_turisticos1);
      printf("Densidade Populacional: %.2f (hab/km²)\n", densidade1);
      printf("PIB per Capita: %.2f Reais\n", percapita1);
      printf("Super Poder da Carta: %.2lu\n", super_poder1);

      //segunda carta

      printf("\nCarta Número 2: \n");
      printf("Letra: %s\n", estado2);
      printf("Codigo: %s\n", codigo2);
      printf("Nome da Cidade: %s\n", nome_cidade2);
      printf("População: %.2lu\n", populacao2);
      printf("Área: %.3f (km²)\n", area2);
      printf("PIB: %.3f Reais\n", PIB2);
      printf("Pontos Turísticos: %d\n", pontos_turisticos2);
      printf("Densidade Populacional: %.2f (hab/km²)\n", densidade2);
      printf("PIB per Capita: %.2f Reais\n", percapita2);
      printf("Super Poder da Carta: %.2lu\n", super_poder2);


   //calculando  o poder das cartas

      R_populacao = 2 - (populacao1 > populacao2);
      R_area = 2 - (area1 > area2);
      R_PIB = 2 - (PIB1 > PIB2);
      R_pontosTuristicos = 2 - (pontos_turisticos1 > pontos_turisticos2);
      R_densidadePopulacional = 2 - (densidade1 > densidade2);
      R_percapita = 2 - (percapita1 > percapita2);
      R_superPoder = 2 - (super_poder1 > super_poder2);

   //Comparação de Cartas
      printf("\nCarta mais forte:\n");
      printf("População: Carta %lu Venceu (%lu)\n", R_populacao, (populacao1 > populacao2));
      printf("Área: Carta %lu Venceu (%lu)\n", R_area, (area1 > area2));
      printf("PIB: Carta %lu Venceu (%lu)\n", R_PIB, (PIB1 > PIB2));
      printf("Pontos Turísticos: Carta %d Venceu (%lu)\n", R_pontosTuristicos, (pontos_turisticos1 > pontos_turisticos2));
      printf("Densidade Populacional: Carta %lu Venceu (%lu)\n", R_populacao, (densidade1 < densidade2));
      printf("PIB per Capita: Carta %lu Venceu (%lu)\n", R_percapita, (percapita1 > percapita2));
      printf("Super Poder: Carta %lu Venceu (%lu)\n", R_superPoder, (super_poder1 > super_poder2));


      printf("\n   Seu jogo chegou ao fim!!! \n");


return 0;
 }