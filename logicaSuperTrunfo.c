#include <stdio.h>

int main() {
        
    //Recebendo os dados da carta de Recife.
    char estado1[] = "Pernambuco";
    char codigoDaCarta1[] = "A01";
    char cidade1[] = "Recife";
    int populacao1 = 1490.000;
    float area1 = 218.400;
    float PIB1 = 55000.00;
    int pontoTuristico1 = 30;

 //Recebendo os dados da carta de Salvador.
    char estado2[] = "Bahia";
    char codigoDaCarta2[] = "B01";
    char cidade2[] = "Salvador";    
    int populacao2 = 2420.000;
    float area2 = 693.400;
    float PIB2 = 62694.00;
    int pontoTuristico2 = 30;

    //Dados para exibição da carta de Recife.
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigoDaCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB em R$: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontoTuristico1);

    //Dados para exibição da carta de Salvador.
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB em R$: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontoTuristico2);

   //Calcular Densidade Populacional e PIB per capita de Recife.
    float densidadePopulacional1 = populacao1 / area1;
    float PIBperCapita1 = PIB1 / populacao1;

    printf("Densidade Populacional de Recife: %.2f\n", densidadePopulacional1);
    printf("PIB per capita de Recife em R$: %.2f\n", PIBperCapita1);  

    //Calcular Densidade Populacional e PIB per capita de Salvador.
    float densidadePopulacional2 = populacao2 / area2;  
    float PIBperCapita2 = PIB2 / populacao2;
    
    printf("Densidade Populacional de Salvador: %.2f\n", densidadePopulacional2);
    printf("PIB per capita de Salvador em R$: %.2f\n", PIBperCapita2);  

    //Comparar a Densidade Populacional entre Recife e Salvador.
    if (densidadePopulacional1 > densidadePopulacional2) {
        printf("Recife tem maior densidade populacional que Salvador\n");
    } else {
        printf("Salvador tem maior densidade populacional que Recife\n");
    }
        
    /*Determinar a carta vencedora para os atributos: População, Área, PIB e Pontos Turísticos.
    A carta com o maior valor vence.*/

    //População.
    if (populacao1 > populacao2) {
        printf("Recife tem maior população que Salvador: Recife é a vencedora!\n");
    } else {
        printf("Salvador tem maior população que Recife: Salvador é a vencedora!\n");
    }
    //Área em km².
    if (area1 > area2) {
        printf("Recife tem maior área que Salvador: Recife é a vencedora!\n");
    } else {
        printf("Salvador tem maior área que Recife: Salvador é a vencedora!\n");
    }
    //PIB em R$.
    if (PIB1 > PIB2) {
        printf("Recife tem maior PIB que Salvador: Recife é a vencedora!\n");
    } else {
        printf("Salvador tem maior PIB que Recife: Salvador é a vencedora!\n");
    }
    //Pontos Turísticos.
    if (pontoTuristico1 > pontoTuristico2) {
        printf("Recife tem mais pontos turísticos que Salvador: Recife é a vencedora!\n");
    } else {
        printf("Salvador tem mais pontos turísticos que Recife: Salvador é a vencedora!\n");
    }

    //Comparar A Densidade Populacional. A carta com a menor Densidade Populacional vence.
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Recife tem menor densidade populacional que Salvador: Recife é a vencedora!\n");
    } else {
        printf("Salvador tem menor densidade populacional que Recife: Salvador é a vencedora!\n");

    }
     
    //Exibir resultado da comparação da Densidade Populacional.
    printf("Carta 1 - Recife(PE): %.2f\n", densidadePopulacional1);
    printf("Carta 2 - Salvador(BA): %.2f\n", densidadePopulacional2);

    //Códigos dos Estados e Cidades cadastradas.
     char codigoDePernambuco = 'A';
     char codigoDaBahia = 'B';
 
     char codigoRecife[] = "01";
     char codigoSalvador[] = "02";
 
     char codigoCarta1[3] = "A01";  
     char codigoCarta2[3] = "B02";

    return 0;
}


