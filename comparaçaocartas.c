#include<stdio.h>
int main(){
    int carta01, carta02, populacao01, populacao02, pontosturisticos01, pontosturisticos02;  
    char pais01[20],pais02[20], estado01, estado02, codigocarta01, codigocarta02, cidade01, cidade02;
    float area01,area02, pib01, pib02;

    printf ("Desafio - Super Trunfo Paises\n");
   
    printf("Carta 01\n");  // Informações Primeira Carta
 
    printf("Nome do Pais - ");
    printf("Brasil\n");
    printf("Estado - ");
    printf("São Paulo\n");
    printf("codigo da Carta - ");
    printf("A01\n");
    printf("Cidade - ");
    printf("Araraquara\n");
    printf("População - ");
    printf("252.318 Mil Habitantes\n");
    printf("Área - ");
    printf("1.003.625 Km²\n");
    printf("PIB - ");
    printf("11.953,237 milhões.\n");
    printf("Pontos Turisticos - ");
    printf("30\n");
    
    printf("Carta 02\n");  // Informações Segunda Carta
 
     printf("Nome do Pais - ");
     printf("Brasil\n");
     printf("Estado - ");
     printf("São Paulo\n");
     printf("codigo da Carta - ");
     printf("A02\n");
     printf("Cidade - ");
     printf("Campinas\n");
     printf("População - ");
     printf("1.185.977 Mil Habitantes\n");
     printf("Área - ");
     printf("794.571Km²\n");
     printf("PIB - ");
     printf("72.946,774 milhões.\n");
     printf("Pontos Turisticos - ");
     printf("31\n");
 
     printf ("digite a populaçao01:\n"); // primeiro jogador digita
     scanf ("%s", &populacao01);
     printf ("digite a populaçao02:\n"); // segundo jogardor digita
     scanf ("%s", &populacao02);

     printf ("digite a area01:\n"); // primeiro jogador digita
     scanf ("%s", &area01);
     printf ("digite a area02:\n"); // segundo jogardor digita
     scanf ("%s", &area02); 

     printf ("digite a pib01:\n"); // primeiro jogador digita
     scanf ("%s", &pib01);
     printf ("digite a pib02:\n"); // segundo jogardor digita
     scanf ("%s", &pib02);

     printf ("digite a pontosturisticos01:\n"); // primeiro jogador digita
     scanf ("%f", &pontosturisticos01);
     printf ("digite a pontosturisticos02:\n"); // segundo jogardor digita
     scanf ("%f", &pontosturisticos02);


 if (populacao01 < populacao02) {
     printf ("a carta 01 venceu\n"); // vence a carta com menas populaçao
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


if (populacao01 < populacao02, area01 > area02, pib01 > pib02, pontosturisticos01 > pontosturisticos02) {
    printf ("CARTA 01 VENCEDORA\n");
}else{
    printf ("CARTA 02 VENCEDORA\n");
}
        //resultado da carta vencedora
 }