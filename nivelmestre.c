#include <locale.h> // Para corrigir caracteres especiais.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Para usar valores como "true" e "false"

//>>>>>>>>>>>>>>>>>>>>>>>>>>>NÍVEL MESTRE - SUPER TRUNFO<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

int main() {
    setlocale(LC_ALL, "pt_PT.UTF-8"); // Para corrigir caracteres especiais.

    // Dados das cartas cadastradas no jogo Super Trunfo >>>>>>>>>>>>
    char estado1[] = "Pernambuco";
    char cidade1[] = "Recife";
    int populacao1 = 1490000;
    float area1 = 218.400f;
    float PIB1 = 55000.00;
    int pontoTuristico1 = 30;
    float densidadeDemografica1 = populacao1 / area1;
    float PIBperCapita1 = (PIB1 * 1000000) / populacao1;

    char estado2[] = "Bahia";
    char cidade2[] = "Salvador";
    int populacao2 = 2420000;
    float area2 = 693.400f;
    float PIB2 = 62694.00;
    int pontoTuristico2 = 30;
    float densidadeDemografica2 = populacao2 / area2;
    float PIBperCapita2 = (PIB2 * 1000000) / populacao2;

    // Exibição das cartas >>>>>>>>>>>>>>>>>>>>>>
    printf("=== Carta de Recife ===\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB em R$: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontoTuristico1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidadeDemografica1);
    printf("PIB per Capita: R$ %.2f\n", PIBperCapita1);

    printf("\n=== Carta de Salvador ===\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB em R$: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontoTuristico2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidadeDemografica2);
    printf("PIB per Capita: R$ %.2f\n", PIBperCapita2);

    
    // Escolha dos atributos para comparação >>>>>>>>>>>>>>>>>>>>>>
    int atributo1, atributo2;
    printf("\nEscolha o primeiro atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Regras do Jogo\n");
    scanf("%d", &atributo1);

    // Comparação do primeiro atributo usando switch e if/else
    switch (atributo1) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Recife tem maior população que Salvador: Recife é a vencedora!\n");
            } else if (populacao1 < populacao2) {
                printf("Salvador tem maior população que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm a mesma população.\n");
            }
            //Exibir o resultado da comparação da população.
            printf("População de Recife: %d\n", populacao1);
            printf("População de Salvador: %d\n", populacao2);
            break;
        case 2:
            if (area1 > area2) {
                printf("Recife tem maior área que Salvador: Recife é a vencedora!\n");
            } else if (area1 < area2) {
                printf("Salvador tem maior área que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm a mesma área.\n");
            }
            //Exibir o resultado da comparação da área.
            printf("Área de Recife em km²: %.2f\n", area1);
            printf("Área de Salvador em km²: %.2f\n", area2);
            break;
        case 3:
            if (PIB1 > PIB2) {
                printf("Recife tem maior PIB que Salvador: Recife é a vencedora!\n");
            } else if (PIB1 < PIB2) {
                printf("Salvador tem maior PIB que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm o mesmo PIB.\n");
            }
            //Exibir o resultado da comparação do PIB.
            printf("PIB de Recife R$: %.2f\n", PIB1);
            printf("PIB de Salvador R$: %.2f\n", PIB2);
            break;
        case 4:
            if (pontoTuristico1 > pontoTuristico2) {
                printf("Recife tem mais pontos turísticos que Salvador: Recife é a vencedora!\n");
            } else if (pontoTuristico1 < pontoTuristico2) {
                printf("Salvador tem mais pontos turísticos que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm a mesma quantidade de pontos turísticos.\n");
            }
            //Exibir o resultado da comparação dos pontos turísticos.
            printf("Pontos Turísticos de Recife: %d\n", pontoTuristico1);
            printf("Pontos Turísticos de Salvador: %d\n", pontoTuristico2);
            break;
        case 5:
            if (densidadeDemografica1 < densidadeDemografica2) {
                printf("Recife tem menor densidade demográfica que Salvador: Recife é a vencedora!\n");
            } else if (densidadeDemografica1 > densidadeDemografica2) {
                printf("Salvador tem menor densidade demográfica que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm a mesma densidade demográfica.\n");
            }
            //Exibir o resultado da comparação da densidade demográfica.
            printf("Densidade Demográfica de Recife: %.2f hab/km²\n", densidadeDemografica1);
            printf("Densidade Demográfica de Salvador: %.2f hab/km²\n", densidadeDemografica2);
           
            break;
        case 6:
            printf("Regras do jogo: Compare os atributos e o maior valor vence, com exceção da densidade demográfica, onde o menor valor ganha!\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
// Loop para garantir que o segundo atributo seja diferente do primeiro
bool valido = false;
while (!valido) {
    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Regras do Jogo\n");
    scanf("%d", &atributo2);

     // Verifica se o segundo atributo é diferente do primeiro
     if (atributo2 != atributo1) {
        valido = true; // A escolha é válida
    } else {
        printf("Você já escolheu este atributo na primeira vez! Escolha outro.\n");
    }
}
    // Comparação do segundo atributo usando switch e if/else
    switch (atributo2) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Recife tem maior população que Salvador: Recife é a vencedora!\n");
            } else if (populacao1 < populacao2) {
                printf("Salvador tem maior população que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm a mesma população.\n");
            }
            //Exibir o resultado da comparação da população.
            printf("População de Recife: %d\n", populacao1);
            printf("População de Salvador: %d\n", populacao2);
            break;
        case 2:
            if (area1 > area2) {
                printf("Recife tem maior área que Salvador: Recife é a vencedora!\n");
            } else if (area1 < area2) {
                printf("Salvador tem maior área que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm a mesma área.\n");
            }
            //Exibir o resultado da comparação da área.
            printf("Área de Recife em km²: %.2f\n", area1);
            printf("Área de Salvador em km²: %.2f\n", area2);
            break;
        case 3:
            if (PIB1 > PIB2) {
                printf("Recife tem maior PIB que Salvador: Recife é a vencedora!\n");
            } else if (PIB1 < PIB2) {
                printf("Salvador tem maior PIB que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm o mesmo PIB.\n");
            }
            //Exibir o resultado da comparação do PIB.
            printf("PIB de Recife R$: %.2f\n", PIB1);
            printf("PIB de Salvador R$: %.2f\n", PIB2);
            break;
        case 4:
            if (pontoTuristico1 > pontoTuristico2) {
                printf("Recife tem mais pontos turísticos que Salvador: Recife é a vencedora!\n");
            } else if (pontoTuristico1 < pontoTuristico2) {
                printf("Salvador tem mais pontos turísticos que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm a mesma quantidade de pontos turísticos.\n");
            }   
            //Exibir o resultado da comparação dos pontos turísticos.
            printf("Pontos Turísticos de Recife: %d\n", pontoTuristico1);
            printf("Pontos Turísticos de Salvador: %d\n", pontoTuristico2);
            break;
        case 5:
            if (densidadeDemografica1 < densidadeDemografica2) {
                printf("Recife tem menor densidade demográfica que Salvador: Recife é a vencedora!\n");
            } else if (densidadeDemografica1 > densidadeDemografica2) {
                printf("Salvador tem menor densidade demográfica que Recife: Salvador é a vencedora!\n");
            } else {
                printf("Empate! Recife e Salvador têm a mesma densidade demográfica.\n");
            }
            //Exibir o resultado da comparação da densidade demográfica.
            printf("Densidade Demográfica de Recife: %.2f hab/km²\n", densidadeDemografica1);
            printf("Densidade Demográfica de Salvador: %.2f hab/km²\n", densidadeDemografica2);
            break;
        case 6:
            printf("Regras do jogo: Compare os atributos e o maior valor vence, com exceção da densidade demográfica, onde o menor valor ganha!\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

