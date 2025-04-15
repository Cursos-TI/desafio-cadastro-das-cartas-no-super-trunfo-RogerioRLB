#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){

    int carta01, carta02;
    unsigned long int populacao01, populacao02; 
    int pontosturisticos01, pontosturisticos02;  
    char estado01[10], estado02[10], codigocarta01[5], codigocarta02[5], cidade01[50], cidade02 [50];
    float area01, area02, pib01, pib02;
    float pibpercapita01, pibpercapita02, densidadepopulacional01, densidadepopulacional02;
    float superpoder01, superpoder02, invdensidade01, invdensidade02;
    int atributo1, atributo2, opcao;
    
   
    
    printf("### Desafio - Super Trunfo Paises ###\n");  // Menu de opções inicio do jogo.

    printf("Menu Principal:\n");
    printf("1. Inciar Jogo:\n");
    printf("2. Ver Regras:\n");
    printf("3. Sair do Jogo:\n");
    printf("Escolha uma opçao:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
        printf("***Inciando o Jogo***\n");
        break;
        case 2:
        printf("As regras do jogo consiste em voce escolher um atributo que seja maior do que o da\n");
        printf("carta adversario,menos a densidade populacional que vence a carta que seja de menor valor.\n");
        printf("\n");

        printf("Menu Principal:\n");
        printf("1. Inciar Jogo:\n");
        printf("2. Ver Regras:\n");
        printf("3. Sair do Jogo:\n");
        printf("Escolha uma opçao:\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 3:
        printf("Saindo do jogo");

        return 0;

            break; 
        }
       
        break;
        case 3:
        printf("Saindo do Jogo\n");
        return 0;

        break;
    default:
    printf("opçao invalida\n");
        break;
    }
    printf("\n");
    
    printf("### Digite os Dados das Cartas ###\n");
    printf("\n");

    // ENTRADA DE DADOS DA CARTA 1

    printf("\nDigite o Estado da carta 1: (A-H) \n");
    scanf("%s", estado01);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta01);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade01);
    
    printf("Digite a quantidade da População da cidade: \n");
    scanf("%ld", &populacao01);
    
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area01);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib01);
    
    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos01);

    // Calculo Densidade Populacional, Pib Per Capita e Super Poder da carta 1.

    pibpercapita01 = pib01 / populacao01;
    densidadepopulacional01 =  populacao01 / area01;
    invdensidade01 = 1 / densidadepopulacional01;
    superpoder01 = (float)populacao01 + area01 + pib01 + pontosturisticos01 + pibpercapita01 + invdensidade01;

    
    // ENTRADA DE DADOS DA CARTA 2

    printf("\nDigite o Estado da carta 2: (A-H) \n");
    scanf("%s", estado02);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta02);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade02);
    
    printf("Digite a quantidade da População da cidade: \n");
    scanf("%ld", &populacao02);
    
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area02);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib02);
    
    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos02);

    // Calculo Densidade Populacional, Pib Per Capita e Super Poder da  carta 2.

    pibpercapita02 = pib02 / populacao02;
    densidadepopulacional02 =  populacao02 / area02;
    invdensidade02 = 1 / densidadepopulacional02;
    superpoder02 = (float)populacao02 + area02 + pib02 + pontosturisticos02 + pibpercapita02 + invdensidade02;

    
    // SAIDA DE DADOS DA CARTA 1
    
    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado01);
    printf("Código: %s%s\n", estado01, codigocarta01);
    printf("Nome da Cidade: %s \n", cidade01);
    printf("População: %ld \n", populacao01);
    printf("Área: %.2f km² \n", area01);
    printf("PIB: %.2f Bilhões de reais \n", pib01);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos01);
    printf("PIB per Capita: %.2f reais\n", pibpercapita01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional01);
    printf("Super Poder: %.2f\n", superpoder01);
    
    // SAIDA DE DADOS DA CARTA 2

    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado02);
    printf("Código: %s%s\n", estado02, codigocarta02);
    printf("Nome da Cidade: %s \n", cidade02);
    printf("População: %ld \n", populacao02);
    printf("Área: %.2f km² \n", area02);
    printf("PIB: %.2f Bilhões de reais \n", pib02);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos02);
    printf("PIB per Capita: %.2f reais\n", pibpercapita02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional02);
    printf("Super Poder: %.2f\n", superpoder02);

    printf("\n");

  
    printf("***Comparação dos Atributos***");  // Menu de Comparação do primeiro atributo.
    printf("\n");

    printf("***Escolha o Primeiro Atributo:***\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Pib per capita\n");
        printf("6. Densidade Populacional\n");
        printf("7. Super Poder\n");
        printf("Escolha a Comparação:\n ");
        scanf("%d", &atributo1);

        printf("\n");

        switch (atributo1)
        {
        case 1:
            printf("Você escolheu o atributo população-\n");        //Vence a carta com maior valor.

            if(populacao01 > populacao02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("População da Carta 01: %ld\n", populacao01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("População da Carta 02: %ld\n", populacao02);

                printf("Carta 01 Venceu!\n");

            } else if(populacao01 < populacao02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("População da Carta 01: %ld\n", populacao01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("População da Carta 02: %ld\n", populacao02);

                printf("Carta 02 Venceu!\n");
    
            } else {
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("População da Carta 01: %ld\n", populacao01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("População da Carta 02: %ld\n", populacao02);

                printf("Empatou!\n");
            }
            break;

        case 2:
            printf("Você escolheu o atributo Area-\n");     //Vence a carta com maior valor.
            
            if(area01 > area02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Area da Carta 01: %.2f\n", area01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Area da Carta 02: %.2f\n", area02);

                printf("Carta 01 Venceu!\n");

            } else if(area01 < area02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Area da Carta 01: %.2f\n", area01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Area da Carta 02: %.2f\n", area02);

                printf("Carta 02 Venceu!\n");
    
            } else {
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Area da Carta 01: %.2f\n", area01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Area da Carta 02: %.2f\n", area02);

                printf("Empatou!\n");
            }
            break;

        case 3:
                printf("Você escolheu o atributo PIB-\n");      //Vence a carta com maior valor.
                
                if(pib01 > pib02){
                    printf("Nome da Cidade 01: %s\n", cidade01);
                    printf("PIB da Carta 01: %.2f\n", pib01);
    
                    printf("Nome da Cidade 02: %s\n", cidade02);
                    printf("PIB da Carta 02: %.2f\n", pib02);
    
                    printf("Carta 01 Venceu!\n");
    
                } else if(pib01 < pib02){
                    printf("Nome da Cidade 01: %s\n", cidade01);
                    printf("PIB da Carta 01: %.2f\n", pib01);
    
                    printf("Nome da Cidade 02: %s\n", cidade02);
                    printf("PIB da Carta 02: %.2f\n", pib02);
    
                    printf("Carta 02 Venceu!\n");
        
                } else {
                    printf("Nome da Cidade 01: %s\n", cidade01);
                    printf("PIB da Carta 01: %.2f\n", pib01);
    
                    printf("Nome da Cidade 02: %s\n", cidade02);
                    printf("PIB da Carta 02: %.2f\n", pib02);
    
                    printf("Empatou!\n");
                }
            break;

        case 4:
            printf("Você escolheu o atributo Pontos Turisticos-\n");    //Vence a carta co maior valor.
            
            if(pontosturisticos01 > pontosturisticos02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Pontos turisticos da Carta 01: %d\n", pontosturisticos01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Pontos turisticos da Carta 02: %d\n", pontosturisticos02);

                printf("Carta 01 Venceu!\n");

            } else if(pontosturisticos01 < pontosturisticos02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Pontos turisticos da Carta 01: %d\n", pontosturisticos01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Pontos turisticos da Carta 02: %d\n", pontosturisticos02);

                printf("Carta 02 Venceu!\n");
    
            } else {
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Pontos turisticos da Carta 01: %d\n", pontosturisticos01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Pontos turisticos da Carta 02: %d\n", pontosturisticos02);

                printf("Empatou!\n");
            }
            break;
            
        case 5:
            printf("Você escolheu o atributo PIB per Capita-\n");       //Vence a carta com maior valor.
            
            if(pibpercapita01 > pibpercapita02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("PIB Per Capita da Carta 01: %.2f\n", pibpercapita01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("PIB Per Capita da Carta 02: %.2f\n", pibpercapita02);

                printf("Carta 01 Venceu!\n");

            } else if(pibpercapita01 < pibpercapita02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("PIB Per Capita da Carta 01: %.2f \n", pibpercapita01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("PIB Per Capita da Carta 02: %.2f \n", pibpercapita02);

                printf("Carta 02 Venceu!\n");
    
            } else {
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("PIB Per Capitao da Carta 01: %.2f \n", pibpercapita01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("PIB Per Capita da Carta 02: %.2f \n", pibpercapita02);

                printf("Empatou!\n");
            }
            break;

        case 6:
            printf("Você escolheu o atributo Densidade Populacional-\n");       //Vence a carta com menor valor.
        
            if(densidadepopulacional01 > densidadepopulacional02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Densidade Populacional da Carta 01: %.2f\n", densidadepopulacional01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Densidade Populacional da Carta 02: %.2f\n", densidadepopulacional02);

                printf("Carta 02 Venceu!\n");

            } else if(densidadepopulacional01 < densidadepopulacional02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Densidade Populacional da Carta 01: %.2f\n", densidadepopulacional01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Densidade Populacional da Carta 02: %.2f\n", densidadepopulacional02);

                printf("Carta 01 Venceu!\n");
    
            } else {
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Densidade Populacional da Carta 01: %.2f\n", densidadepopulacional01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Densidade Populacional da Carta 02: %.2f\n", densidadepopulacional02);

                printf("Empatou!\n");
            }
            break;

        case 7:
                printf("Você escolheu o atributo Super Poder-\n");      //Vence a carta com maior valor.
                
            if(superpoder01 > superpoder02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Super Poder da Carta 01: %.2f\n", superpoder01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Super Poder da Carta 02: %.2f\n", superpoder02);

                printf("Carta 01 Venceu!\n");

            } else if(superpoder01 < superpoder02){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Super Poder da Carta 01: %.2f\n", superpoder01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Super Poder da Carta 02: %.2f\n", superpoder02);

                printf("Carta 02 Venceu!\n");

            } else {
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Super Poder da Carta 01: %.2f\n", superpoder01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Super Poder da Carta 02: %.2f\n", superpoder02);

                printf("Empatou!\n");
            }
            break;

        default:
                printf("Opçao Invalida!");
            break;
            }

                printf("\n");


            printf("***Escolha o Segundo Atributo:***\n"); // Menu de comparação do segundo atributo.
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Pib per capita\n");
            printf("6. Densidade Populacional\n");
            printf("7. Super Poder\n");
            printf("Escolha o Atributo:\n ");
            scanf("%d", &atributo2);

            // Teste da escolha do atributo.

        if(atributo1 == atributo2) {
            printf("Você escolheu o mesmo Atributo!\n");
            printf("Escolha outro atributo:\n");
            scanf("%d", &atributo2);
        }
       
        switch (atributo2)
        {
        case 1:
            printf("Você escolheu o atributo população-\n");        //Vence a carta com maior valor.
            
            if(populacao02 > populacao01){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("População da Carta 01: %ld \n", populacao01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("População da Carta 02: %ld \n", populacao02);

                printf("Carta  02 Venceu!\n");

            } else if(populacao02 < populacao01){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("População da Carta 01: %ld\n", populacao01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("População da Carta 02: %ld\n", populacao02);

                printf("Carta 01 Venceu!\n");
    
            } else {
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("População da Carta 01: %ld\n", populacao01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("População da Carta 02: %ld\n", populacao02);

                printf("Empatou!\n");
            }
            break;

        case 2:
            printf("Você escolheu o atributo Area-\n");     //Vence a cara com maior valor.
            
            if(area02 > area01){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Area da Carta 01: %.2f\n", area01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Area da Carta 02: %.2f\n", area02);

                printf("Carta  02 Venceu!\n");

            } else if(area02 < area01){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Area da Carta 01: %.2f\n", area01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Area da Carta 02: %.2f\n", area02);

                printf("Carta 01 Venceu!\n");
    
            } else {
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Area da Carta 01: %.2f\n", area01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Area da Carta 02: %.2f\n", area02);

                printf("Empatou!\n");
            }
            break;

        case 3:
                printf("Você escolheu o atributo PIB-\n");      //Vence a carta com maior valor.
                
                if(pib02 > pib01){
                    printf("Nome da Cidade 01: %s\n", cidade01);
                    printf("PIB da Carta 01: %.2f\n", pib01);
    
                    printf("Nome da Cidade 02: %s\n", cidade02);
                    printf("PIB da Carta 02: %.2f\n", pib02);
    
                    printf("Carta  02 Venceu!\n");
    
                } else if(pib02 < pib01){
                    printf("Nome da Cidade 01: %s\n", cidade01);
                    printf("PIB da Carta 01: %.2f\n", pib01);
    
                    printf("Nome da Cidade 02: %s\n", cidade02);
                    printf("PIB da Carta 02: %.2f\n", pib02);
    
                    printf("Carta 01 Venceu!\n");
        
                } else {
                    printf("Nome da Cidade 01: %s\n", cidade01);
                    printf("PIB da Carta 01: %.2f\n", pib01);
    
                    printf("Nome da Cidade 02: %s\n", cidade02);
                    printf("PIB da Carta 02: %.2f\n", pib02);
    
                    printf("Empatou!\n");
                }
            break;

        case 4:
            printf("Você escolheu o atributo Pontos Turisticos-\n");        //Vence a carta com maior valor.
            
            if(pontosturisticos02 > pontosturisticos01){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Pontos turisticos da Carta 01: %d\n", pontosturisticos01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Pontos turisticos da Carta 02: %d\n", pontosturisticos02);

                printf("Carta  02 Venceu!\n");

            } else if(pontosturisticos02 < pontosturisticos01){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Pontos turisticos da Carta 01: %d\n", pontosturisticos01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Pontos turisticos da Carta 02: %d\n", pontosturisticos02);

                printf("Carta 01 Venceu!\n");
    
            } else {
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Pontos turisticos da Carta 01: %d\n", pontosturisticos01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Pontos turisticos da Carta 02: %d\n", pontosturisticos02);

                printf("Empatou!\n");
            }
            break;
            
        case 5:
            printf("Você escolheu o atributo PIB per Capita-\n");       // vence a carta com maior valor.
            
            if(pibpercapita02 > pibpercapita01){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("PIB Per Capita da Carta 01: %.2f\n", pibpercapita01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("PIB Per Capita da Carta 02: %.2f\n", pibpercapita02);

                printf("Carta  02 Venceu!\n");

            } else if(pibpercapita02 < pibpercapita01){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("PIB Per Capita da Carta 01: %.2f\n", pibpercapita01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("PIB Per Capita da Carta 02: %.2f\n", pibpercapita02);

                printf("Carta 01 Venceu!\n");
    
            } else {
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("PIB Per Capitao da Carta 01: %.2f\n", pibpercapita01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("PIB Per Capita da Carta 02: %.2f\n", pibpercapita02);

                printf("Empatou!\n");
            }
            break;

        case 6:
            printf("Você escolheu o atributo Densidade Populacional-\n");   // Vence a carta com menor valor.
            
            if(densidadepopulacional02 > densidadepopulacional01){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Densidade Populacional da Carta 01: %.2f\n", densidadepopulacional01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Densidade Populacional da Carta 02: %.2f\n", densidadepopulacional02);

                printf("Carta  01 Venceu!\n");

            } else if(densidadepopulacional02 < densidadepopulacional01){
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Densidade Populacional da Carta 01: %.2f\n", densidadepopulacional01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Densidade Populacional da Carta 02: %.2f\n", densidadepopulacional02);

                printf("Carta 02 Venceu!\n");
    
            } else {
                printf("Nome da Cidade 01: %s\n", cidade01);
                printf("Densidade Populacional da Carta 01: %.2f\n", densidadepopulacional01);

                printf("Nome da Cidade 02: %s\n", cidade02);
                printf("Densidade Populacional da Carta 02: %.2f\n", densidadepopulacional02);

                printf("Empatou!\n");
            }
            break;

        case 7:
        printf("Você escolheu o atributo Super Poder-\n");   // Vence a carta com o maior valor.
    
        if(superpoder02 > superpoder01){
            printf("Nome da Cidade 01: %s\n", cidade01);
            printf("Super Poder da Carta 01: %.2f\n", superpoder01);

            printf("Nome da Cidade 02: %s\n", cidade02);
            printf("Super Poder da Carta 02: %.2f\n", superpoder02);

            printf("Carta  02 Venceu!\n");

        } else if(superpoder02 < superpoder01){             
            printf("Nome da Cidade 01: %s\n", cidade01);
            printf("Super Poder da Carta 01: %.2f\n", superpoder01);

            printf("Nome da Cidade 02: %s\n", cidade02);
            printf("Super Poder da Carta 02: %.2f\n", superpoder02);

            printf("Carta 01 Venceu!\n");

        } else {
            printf("Nome da Cidade 01: %s\n", cidade01);
            printf("Super Poder da Carta 01: %.2f\n", superpoder01);

            printf("Nome da Cidade 02: %s\n", cidade02);
            printf("Super Poder da Carta 02: %.2f\n", superpoder02);

            printf("Empatou!\n");
        }
        break;

        default:
                printf("Opçao Invalida!");
            break;
            }

        printf("\n");

        // Resultado da comparação de todos atributos.

        printf("****Comparaçao das Cartas****\n");
        printf("***Comparação de todos os Atributos***\n");
        printf("\n");

    if (populacao01 > populacao02) {
        printf("População: "); // Vence a Carta com maior População.
        printf("Carta 01 Venceu!\n");
    }else if (populacao01 < populacao02){
        printf("População: ");
        printf ("Carta 02 Venceu!\n"); 
    }else{
        printf("População da carta 01: %ld\n", populacao01); // Quando der empate vai apresentar os dois valores.
        printf("População da carta 02: %ld\n", populacao02);
        printf("Empatou!\n");
    }
        printf("\n");
    if (area01 > area02){
        printf("Área: "); //Vence a Carta com maior Área.
        printf ("Carta 01 Venceu!\n"); 
    }else if (area01 < area02){
        printf("Área: ");
        printf("Carta 02 Venceu!\n");
    }else{
        printf("A Área da Carta 01: %.2f\n", area01); // Quando der empate vai apresentar os dois valores.
        printf("A Área da Carta 02: %.2f\n", area02);
        printf("Empatou!\n");
    }
        printf("\n");
    if (pib01 > pib02) {
        printf("PIB: ");  // Vence a Carta com maior PIB.
        printf ("Carta 01 Venceu!\n"); 
    }else if(pib01 < pib02){
        printf("PIB: ");
        printf ("Carta 02 venceu!\n");
    }else {
        printf("O PIB da Carta 01: %.2f\n", pib01);// Quando der empate vai apresentar os dois valores.
        printf("O PIB da Carta 02: %.2f\n", pib02);
        printf("Empatou!\n");
    }
        printf("\n");
    if (pontosturisticos01 > pontosturisticos02) {
        printf("Pontos Turisticos: "); // Vence a carta com mais Pontos Turisticos.
        printf ("Carta 01 Venceu!\n");  
    }else if(pontosturisticos01 < pontosturisticos02){
        printf("Pontos Turisticos: ");
        printf ("Carta 02 venceu!\n");
    }else{
        printf("Os Pontos Turisticos da Carta 01: %d\n", pontosturisticos01);// Quando der empate vai apresentar os dois valores.
        printf("Os Pontos Turisticos da Carta 02: %d\n", pontosturisticos02);
        printf("Empatou!\n");
    }
        printf("\n");
    if (pibpercapita01 > pibpercapita02) {
        printf("Pib Per Capita: "); // Vence a Carta com maior Pib Per Capita.
        printf ("Carta 01 Venceu!\n"); 
    }else if(pibpercapita01 < pibpercapita02){
        printf("Pib Per Capita: ");
        printf ("Carta 02 Venceu!\n");
    }else{
        printf("O Pib Per Capita da Carta 01: %.2f\n", pibpercapita01);// Quando der empate vai apresentar os dois valores.
        printf("O Pib Per Capita da Carta 02: %.2f\n", pibpercapita02);
        printf("Empatou!\n");
    }
        printf("\n");
    if (densidadepopulacional01 < densidadepopulacional02) {
        printf("Densidade Populacional: ");  // Vence a Carta com menor Densidade Populacional.
        printf ("Carta 01 Venceu!\n");  
    }else if (densidadepopulacional02 < densidadepopulacional01){
        printf("Densidade Populacional: ");
        printf ("Carta 02 venceu!\n");
    } else{
        printf("A Densidade Populacional da Carta 01: %.2f\n", densidadepopulacional01);// Quando der empate vai apresentar os dois valores.
        printf("A Densidade Populacional da Carta 02: %.2f\n", densidadepopulacional02);
        printf("Empatou!\n");
    }
        printf("\n");
    if(superpoder01 > superpoder02){
        printf("Super Poder: "); // Vence a Carta com maior Super Poder.
        printf("Carta 01 Venceu!\n");
    }else if(superpoder01 < superpoder02){
        printf("Super poder: ");
        printf("Carta 02 Venceu!\n");
    }else{
        printf("Super Poder da Carta 01: %.2f\n", superpoder01); // Quando der empate vai apresentar os dois valores.
        printf("Super poder da Carta 02: %.2f\n", superpoder02);
        printf("Empatou!\n");

    }
        printf("\n");
    if (populacao01 > populacao02, area01 > area02, pib01 > pib02, pontosturisticos01 > pontosturisticos02, 
        pibpercapita01 > pibpercapita02, densidadepopulacional01 < densidadepopulacional02, superpoder01 > superpoder02) {
        printf ("***CARTA 01 VENCEU***\n");
    }else{
        printf ("***CARTA 02 VENCEU***\n");
    }

    return 0;
}
