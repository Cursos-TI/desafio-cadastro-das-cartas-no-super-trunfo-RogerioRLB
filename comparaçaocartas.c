#include<stdio.h>
#include<stdlib.h>


int main(){
    int carta01, carta02, populacao01 = 252.318, populacao02 = 315.125; 
    int pontosturisticos01 = 30, pontosturisticos02 = 29;  
    char estado01, estado02, codigocarta01, codigocarta02, cidade01, cidade02 [10];
    float area01 = 798.145, area02 = 794.571, pib01 = 811.953, pib02 = 972.947;
    float pibpercapita01, pibpercapita02, densidadepopulacional01, densidadepopulacional02;


    printf("Desafio - Super Trunfo Paises\n");
    printf("\n");
   
    printf(" *** Carta 01 *** \n");  // Informações Primeira Carta
    printf("\n");
    printf("Pais Brasil\n");
    printf("Estado - ");
    printf("A\n");
    printf("codigo da Carta - ");
    printf("A01\n");
    printf("Cidade - ");
    printf("Araraquara\n");
    printf("População - %d Mil Habitantes\n", populacao01);
    printf("Area - %.2f Km²\n", area01);
    printf("PIB - %.2f Milhões\n", pib01);
    printf("Pontos turisticos - %d\n", pontosturisticos01);
    

     // calculo densidade populacional e pib per capita carta 1

     pibpercapita01 = pib01 / populacao01;
     densidadepopulacional01 =  populacao01 / area01;

     pibpercapita01 = (float) 811.953 / 252.318;
     printf("pibpercapita - %.2f Reais\n", pibpercapita01 );
     densidadepopulacional01 = (float) 252.318 / 798.145;
     printf("densidadepopulacional -  %.2f Hab km²\n", densidadepopulacional01);
     printf("\n");

    printf(" *** Carta 02 ***\n");  // Informações Segunda Carta
    printf("\n");
     printf("Pais Brasil\n");
     printf("Estado - ");
     printf("A\n");
     printf("codigo da Carta - ");
     printf("A02\n");
     printf("Cidade - ");
     printf("Campinas\n");
     printf("População - %d Mil Habitantes\n", populacao02);
     printf("Area - %.2f Km²\n", area02);
     printf("PIB - %.2f Milhões\n", pib02);
     printf("Pontos turisticos - %d\n", pontosturisticos02);
    
    
     // calculo densidade populacional e pib per capita carta 2

     pibpercapita02 = pib02 / populacao02;
     densidadepopulacional02 =  populacao02 / area02;

     pibpercapita02 = (float) 972.947 / 315.125;
     printf("pibpercapita - %.2f Reais\n", pibpercapita02 );
     densidadepopulacional02 = (float) 315.125 / 794.571;
     printf("densidadepopulacional -  %.2f Hab km²\n", densidadepopulacional02);
     printf("\n");

    if (populacao01 > populacao02) {
        printf ("a carta 01 venceu\n"); // vence a carta com maior populaçao vence
    }else{
       printf ("a carta 02 venceu\n"); 
    }
    if (area01 > area02){
        printf ("a carta 01 venceu\n"); // vence a carata com a maior area 
    }else{
        printf("a carta 02 venceu\n");
    }
    if (pib01 > pib02) {
        printf ("a carta 01 venceu\n"); //vence a carta com maior pib
    }else{
        printf ("a carta 02 venceu\n");
    }
    if (pontosturisticos01 > pontosturisticos02) {
       printf ("a carta 01 venceu\n");  //vence a carta com mais pontos turisticos
   }else{
       printf ("a carta 02 venceu\n");
   }
   if (pibpercapita01 > pibpercapita02) {
       printf ("a carta 01 venceu\n");  //vence a carta com mais pontos turisticos
   }else{
       printf ("a carta 02 venceu\n");
   }
   if (densidadepopulacional01 < densidadepopulacional02) {
       printf ("a carta 01 venceu\n");  //vence a carta com a densidade populacional menor vence
   }else{
       printf ("a carta 02 venceu\n");
   }
   
   
   if (populacao01 > populacao02, area01 > area02, pib01 > pib02, pontosturisticos01 > pontosturisticos02, 
       pibpercapita01 > pibpercapita02, densidadepopulacional01 < densidadepopulacional02) {
       printf ("***CARTA 01 VENCEDORA***\n");
   }else{
       printf ("***CARTA 02 VENCEDORA***\n");
   }
           //resultado da carta vencedora

           return 0;
    }
