#include<stdio.h>

int main(){
    int populacao01, populacao02, pontosturisticos01, pontosturisticos02;  
    char estado01[5], estado02[5], codigocarta01[5], codigocarta02[5], cidade01[50], cidade02[50];
    float area01, area02, pib01, pib02;
    

   
   printf ("Desafio - Super Trunfo Paises\n");
   printf("\n");
   
   printf("  ***Carta 01***\n");  // Informações Primeira Carta
   printf("\n");

   printf("\nDigite o Estado da carta 1: (A-H) \n");
   scanf("%s", estado01);
   
   printf("Digite o código da carta: \n");
   scanf("%s", codigocarta01);
   
   printf("Digite o nome da Cidade: \n");
   scanf("%s", cidade01);
   
   printf("Digite a quantidade da População da cidade: \n");
   scanf("%d", &populacao01);
   
   printf("Digite a área da cidade em km²: \n");
   scanf("%f", &area01);
   
   printf("Digite o PIB da cidade: \n");
   scanf("%f", &pib01);
   
   printf("Digite o numero de pontos turísticos da cidade: \n");
   scanf("%d", &pontosturisticos01);
   

   printf("  ***Carta 02***\n");  // Informações Segunda Carta
   printf("\n");

    printf("\nDigite o Estado da carta 2: (A-H) \n");
    scanf("%s", estado02);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta02);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade02);
    
    printf("Digite a quantidade da População da cidade: \n");
    scanf("%d", &populacao02);
    
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area02);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib02);
    
    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos02);

    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado01);
    printf("Código: %s%s\n", estado01, codigocarta01);
    printf("Nome da Cidade: %s \n", cidade01);
    printf("População: %d \n", populacao01);
    printf("Área: %f km² \n", area01);
    printf("PIB: %f Bilhões de reais \n", pib01);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos01);


    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado02);
    printf("Código: %s%s\n", estado02, codigocarta02);
    printf("Nome da Cidade: %s \n", cidade02);
    printf("População: %d \n", populacao02);
    printf("Área: %f km² \n", area02);
    printf("PIB: %f Bilhões de reais \n", pib02);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos02);

   return 0;
}
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  
