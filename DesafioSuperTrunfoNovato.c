#include <stdio.h>

 int main(){ 
    //dados das váriaveis da primeira carta
    int pontos_turisticos1;
    char estado1[4], codigo1[4], nome_cidade1[30];
    float populacao1, area1, PIB1, densidade1, ppc1;

    //dados das váriaveis da segunda carta
    int pontos_turisticos2;
    char estado2[4], codigo2[4], nome_cidade2[30];
    float populacao2, area2, PIB2, densidade2, ppc2;

 //cabeçario do projeto

 printf ("\n    Jogo Super Trunfo \n\n");
 printf("A seguir digite as informações das cartas! \n");
 
    //entrada de dados das cartas
      //primeira carta

      printf(" Carta número 1: \n\n");

      printf("Digite uma letra de 'A' a 'H' para representar o estado): \n");
      scanf(" %s", &estado1);

      printf("Digite um código para o estado, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
      scanf(" %s", &codigo1);

      printf("Digite o nome de uma cidade: \n");
      scanf(" %s", &nome_cidade1);

      printf("Digite o número de habitantes: \n");
      scanf(" %f", &populacao1);

      printf("Digite a área da cidade em quilômetros quadrados: \n");
      scanf(" %f", &area1);
      densidade1 = (float) populacao1 / area1;

      printf("Digite o Produto Interno Bruto da cidades (PIB): \n");
      scanf(" %f", &PIB1);
      ppc1 = (float) PIB1 / populacao1;

      printf("Digite o número de pontos turísticos da cidade: \n");
      scanf(" %d", &pontos_turisticos1);

      //segunda carta

      printf("\n Carta número 2: \n\n");

      printf("Digite uma letra de 'A' a 'H' para representar o estado): \n");
      scanf(" %s", &estado2);

      printf("Digite um código para o estado, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
      scanf(" %s", &codigo2);

      printf("Digite o nome de uma cidade: \n");
      scanf(" %s", &nome_cidade2);

      printf("Digite o número de habitantes:\n");
      scanf(" %f", &populacao2);

      printf("Digite a área da cidade em quilômetros quadrados: \n");
      scanf(" %f", &area2);
      densidade2 = (float) populacao2 / area2;

      printf("Digite o Produto Interno Bruto da cidades (PIB): \n");
      scanf(" %f", &PIB2);
      ppc2 = (float) PIB2 / populacao2;

      printf("Digite o número de pontos turísticos da cidade: \n");
      scanf(" %d", &pontos_turisticos2);


   //imprimindo resultados da entrada de dados das cartas
      //primeira carta

      printf("\nCarta número 1: \n");
      printf("Letra %s\n", estado1);
      printf("Codigo: %s\n", codigo1);
      printf("Nome da cidade: %s\n", nome_cidade1);
      printf("População: %.2f\n", populacao1);
      printf("Área: %.3f (km²)\n", area1);
      printf("PIB: %.3f Reais\n", PIB1);
      printf("Pontos turísticos: %d\n", pontos_turisticos1);
      printf("Densidade populacional: %.2f (hab/km²)\n", densidade1);
      printf("PIB per capita: %.2f reais\n", ppc1);

      //segunda carta

      printf("\nCarta número 2: \n");
      printf("Letra %s\n", estado2);
      printf("Codigo: %s\n", codigo2);
      printf("Nome da cidade: %s\n", nome_cidade2);
      printf("População: %.2f\n", populacao2);
      printf("Área: %.3f (km²)\n", area2);
      printf("PIB: %.3f Reais\n", PIB2);
      printf("Pontos turísticos: %d\n", pontos_turisticos2);
      printf("Densidade populacional: %.2f (hab/km²)\n", densidade2);
      printf("PIB per capita: %.2f Reais\n", ppc2);



      printf("\n   Seu jogo chegou ao fim!!! \n");


return 0;
 }