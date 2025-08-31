#include <stdio.h>

 int main(){ 
    //dados das váriaveis da primeira carta
    int populacao1, pontos_turisticos1;
    char estado1[4], codigo1[4], nome_cidade1[30];
    float area1, PIB1;

    //dados das váriaveis da segunda carta
    int populacao2, pontos_turisticos2;
    char estado2[4], codigo2[4], nome_cidade2[30];
    float area2, PIB2;

 //cabeçario do projeto

 printf ("\n    Jogo Super Trunfo \n\n");
 printf("A seguir digite as informações das cartas! \n");
 
    //entrada de dados das cartas
      //primeira carta

      printf(" Carta número 1: \n\n");
      printf(" digite uma letra de 'A' a 'H' para representar o estado): \n");
      scanf(" %s", &estado1);
      printf(" Digite um código para o estado, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
      scanf(" %s", &codigo1);
      printf(" Digite o nome de uma cidade: \n");
      scanf(" %s", &nome_cidade1);
      printf(" Digite o número de habitantes: \n");
      scanf(" %i", &populacao1);
      printf(" Digite a área da cidade em quilômetros quadrados: \n");
      scanf(" %f", &area1);
      printf(" Digite o Produto Interno Bruto da cidades (PIB): \n");
      scanf(" %f", &PIB1);
      printf(" Digite o número de pontos turísticos da cidade: \n");
      scanf(" %i", &pontos_turisticos1);

      //segunda carta

      printf("\n Carta número 2: \n\n");
      printf(" Digite uma letra de 'A' a 'H' para representar o estado): \n");
      scanf(" %s", &estado2);
      printf(" Digite um código para o estado, a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
      scanf(" %s", &codigo2);
      printf(" Digite o nome de uma cidade: \n");
      scanf(" %s", &nome_cidade2);
      printf(" Digite o número de habitantes:\n");
      scanf(" %i", &populacao2);
      printf(" Digite a área da cidade em quilômetros quadrados: \n");
      scanf(" %f", &area2);
      printf(" Digite o Produto Interno Bruto da cidades (PIB): \n");
      scanf(" %f", &PIB2);
      printf(" Digite o número de pontos turísticos da cidade: \n");
      scanf(" %i", &pontos_turisticos2);


   //imprimindo resultados da entrada de dados das cartas
      //primeira carta

      printf("\nCarta número 1: \n");
      printf(" Letra: %s\n", estado1);
      printf(" Codigo: %s\n", codigo1);
      printf(" Nome da cidade: %s\n", nome_cidade1);
      printf(" População: %i\n", populacao1);
      printf(" Área: %.2f (km²)\n", area1);
      printf(" PIB: %.2f Reais\n", PIB1);
      printf(" Pontos turísticos: %i\n", pontos_turisticos1);


      //segunda carta

      printf("\nCarta número 2: \n");
      printf(" Letra: %s\n", estado2);
      printf(" Codigo: %s\n", codigo2);
      printf(" Nome da cidade: %s\n", nome_cidade2);
      printf(" População: %i\n", populacao2);
      printf(" Área: %.2f (km²)\n", area2);
      printf(" PIB: %.2f Reais\n", PIB2);
      printf(" Pontos turísticos: %i\n", pontos_turisticos2);


      printf("\n   Seu jogo chegou ao fim!!! \n");


return 0;
 }