#include <locale.h> // Para corrigir caracteres especiais.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Para usar valores como "true" e "false"

int main()
{

    setlocale(LC_ALL, "pt_PT.UTF-8"); // Configura o locale com base no sistema operacional

    // Nível Novato: Cadastrar cartas.
    
    // Recebendo os dados da carta de Recife.
    char estado1[] = "Pernambuco";
    char codigoDaCarta1[] = "A01";
    char cidade1[] = "Recife";
    int populacao1 = 1490000; // Representando 1.490.000
    float area1 = 218.400f;   // Área em km²
    float PIB1 = 55000.00;    // PIB em R$
    int pontoTuristico1 = 30; // Número de pontos turísticos

    // Recebendo os dados da carta de Salvador.
    char estado2[] = "Bahia";
    char codigoDaCarta2[] = "B01";
    char cidade2[] = "Salvador";
    int populacao2 = 2420000; // Representando 2.420.000
    float area2 = 693.400f;   // Área em km²
    float PIB2 = 62694.00;    // PIB em R$
    int pontoTuristico2 = 30; // Número de pontos turísticos

   // Dados para exibição da carta de Recife.
    printf("=== Carta de Recife ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigoDaCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB em R$: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontoTuristico1);

    // Dados para exibição da carta de Salvador.
    printf("=== Carta de Salvador ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB em R$: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontoTuristico2);

    // Calcular Densidade Demográfica e PIB per capita de Recife.
    float densidadeDemografica1 = (float)populacao1 / area1;
    float PIBperCapita1 = (PIB1 * 1000000) / (float)populacao1;

    printf("Densidade Demográfica de Recife: %.2f\n", densidadeDemografica1);
    printf("PIB per capita de Recife em R$: %.2f\n", PIBperCapita1);

    // Calcular Densidade Demográfica e PIB per capita de Salvador.
    float densidadeDemografica2 = (float)populacao2 / area2;
    float PIBperCapita2 = (PIB2 * 1000000) / (float)populacao2;

    printf("Densidade Demográfica de Salvador: %.2f\n", densidadeDemografica2);
    printf("PIB per capita de Salvador em R$: %.2f\n", PIBperCapita2);

    // Comparar a Densidade Demográfica entre Recife e Salvador.
    if (densidadeDemografica1 > densidadeDemografica2)
    {
        printf("Recife tem maior densidade demografica que Salvador\n");
    }
    else
    {
        printf("Salvador tem maior densidade demografica que Recife\n");
    }

    /*Determinar a carta vencedora para os atributos: População, Área, PIB e Pontos Turísticos.
    A carta com o maior valor vence.*/

    // População.
    if (populacao1 > populacao2)
    {
        printf("Recife tem maior população que Salvador: Recife é a vencedora!\n");
    }
    else
    {
        printf("Salvador tem maior população que Recife: Salvador é a vencedora!\n");
    }
    // Área em km².
    if (area1 > area2)
    {
        printf("Recife tem maior área que Salvador: Recife é a vencedora!\n");
    }
    else
    {
        printf("Salvador tem maior área que Recife: Salvador é a vencedora!\n");
    }
    // PIB em R$.
    if (PIB1 > PIB2)
    {
        printf("Recife tem maior PIB que Salvador: Recife é a vencedora!\n");
    }
    else
    {
        printf("Salvador tem maior PIB que Recife: Salvador é a vencedora!\n");
    }
    // Pontos Turísticos.
    if (pontoTuristico1 > pontoTuristico2)
    {
        printf("Recife tem mais pontos turísticos que Salvador: Recife é a vencedora!\n");
    }
    else
    {
        printf("Salvador tem mais pontos turísticos que Recife: Salvador é a vencedora!\n");
    }
    // Comparar A Densidade Demográfica. A carta com a menor Densidade Demográfica vence.
    if (densidadeDemografica1 < densidadeDemografica2)
    {
        printf("Recife tem menor densidade demográfica que Salvador: Recife é a vencedora!\n");
    }
    else
    {
        printf("Salvador tem menor densidade demográfica que Recife: Salvador é a vencedora!\n");
    }
    // Exibir resultado da comparação da Densidade Populacional.
    printf("Densidade demográfica de Recife(PE): %.2f\n", densidadeDemografica1);
    printf("Densidade demográfica de Salvador(BA): %.2f\n", densidadeDemografica2);

    printf("======================================================\n");
    printf("DESAFIO NÍVEL AVENTUREIRO\n"); // Desafio Nível Aventureiro.
    // Permitir que o jogador escolha um atributo neste jogo.

    int atributo;
    printf("==============================================\n");
    printf("Escolha um atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Regra do jogo.\n");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            printf("Recife tem maior população que Salvador: Recife é a vencedora!\n");
        }
        else if (populacao1 < populacao2)
        {
            printf("Salvador tem maior população que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador tem a mesma população.\n");
        }
        // Exibir o resultado da comparação da população.
        printf("População de Recife: %d\n", populacao1);
        printf("População de Salvador: %d\n", populacao2);
        break;

    case 2:
        if (area1 > area2)
        {
            printf("Recife tem maior área que Salvador: Recife é a vencedora!\n");
        }
        else if (area1 < area2)
        {
            printf("Salvador tem maior área que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador tem a mesma área. \n");
        }
        // Exibir o resultado da comparação da área.
        printf("Área de Recife em km²: %.2f\n", area1);
        printf("Área de Salvador em km²: %.2f\n", area2);
        break;
    case 3:
        if (PIB1 > PIB2)
        {
            printf("Recife tem maior PIB que Salvador: Recife é a vencedora!\n");
        }
        else if (PIB1 < PIB2)
        {
            printf("Salvador tem maior PIB que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador tem o mesmo PIB.\n");
        }
        // Exibir o resultado da comparação do PIB.
        printf("PIB de Recife R$: %.2f\n", PIB1);
        printf("PIB de Salvador R$: %.2f\n", PIB2);
        break;
    case 4:
        if (pontoTuristico1 > pontoTuristico2)
        {
            printf("Recife tem mais pontos turísticos que Salvador: Recife é a vencedora!\n");
        }
        else if (pontoTuristico1 < pontoTuristico2)
        {
            printf("Salvador tem mais pontos turísticos que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador têm a mesma quantidade de pontos turísticos!\n");
        }
        // Exibir o resultado da comparação dos pontos turísticos.
        printf("Pontos Turísticos de Recife: %d\n", pontoTuristico1);
        printf("Pontos Turísticos de Salvador: %d\n", pontoTuristico2);
        break;
    case 5:
        printf("Regra do jogo: O jogador escolhe um atributo para comparar as cartas. A carta com o maior valor vence.\n");
        break;
    default:
        printf("Opção inválida! Tente outra vez.\n");
        break;
    }

    //  Escolha dos atributos para comparação
    printf ("======================================================\n");
    printf("NÍVEL MESTRE - SUPER TRUNFO\n"); // NÍVEL MESTRE - SUPER TRUNFO

    int atributoPrimeiro;
    int atributoSegundo;

    printf("\nEscolha o primeiro atributo para comparar as cartas ou digite 0 para sair:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Regras do Jogo\n");

    // Verifica se o jogador quer sair
    if (atributoPrimeiro == 0)
    {
        printf("Jogo encerrado. Obrigado por participar!\n");

        return 0; // Sai do programa
    }
    // Comparação do primeiro atributo usando switch e if/else
    scanf("%d", &atributoPrimeiro);
    switch (atributoPrimeiro)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            printf("Recife tem maior população que Salvador: Recife é a vencedora!\n");
        }
        else if (populacao1 < populacao2)
        {
            printf("Salvador tem maior população que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador têm a mesma população.\n");
        }
        // Exibir o resultado da comparação da população.
        printf("População de Recife: %d\n", populacao1);
        printf("População de Salvador: %d\n", populacao2);
        break;
    case 2:
        if (area1 > area2)
        {
            printf("Recife tem maior área que Salvador: Recife é a vencedora!\n");
        }
        else if (area1 < area2)
        {
            printf("Salvador tem maior área que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador têm a mesma área.\n");
        }
        // Exibir o resultado da comparação da área.
        printf("Área de Recife em km²: %.2f\n", area1);
        printf("Área de Salvador em km²: %.2f\n", area2);
        break;
    case 3:
        if (PIB1 > PIB2)
        {
            printf("Recife tem maior PIB que Salvador: Recife é a vencedora!\n");
        }
        else if (PIB1 < PIB2)
        {
            printf("Salvador tem maior PIB que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador têm o mesmo PIB.\n");
        }
        // Exibir o resultado da comparação do PIB.
        printf("PIB de Recife R$: %.2f\n", PIB1);
        printf("PIB de Salvador R$: %.2f\n", PIB2);
        break;
    case 4:
        if (pontoTuristico1 > pontoTuristico2)
        {
            printf("Recife tem mais pontos turísticos que Salvador: Recife é a vencedora!\n");
        }
        else if (pontoTuristico1 < pontoTuristico2)
        {
            printf("Salvador tem mais pontos turísticos que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador têm a mesma quantidade de pontos turísticos.\n");
        }
        // Exibir o resultado da comparação dos pontos turísticos.
        printf("Pontos Turísticos de Recife: %d\n", pontoTuristico1);
        printf("Pontos Turísticos de Salvador: %d\n", pontoTuristico2);
        break;
    case 5:
        if (densidadeDemografica1 < densidadeDemografica2)
        {
            printf("Recife tem menor densidade demográfica que Salvador: Recife é a vencedora!\n");
        }
        else if (densidadeDemografica1 > densidadeDemografica2)
        {
            printf("Salvador tem menor densidade demográfica que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador têm a mesma densidade demográfica.\n");
        }
        // Exibir o resultado da comparação da densidade demográfica.
        printf("Densidade Demográfica de Recife: %.2f hab/km²\n", densidadeDemografica1);
        printf("Densidade Demográfica de Salvador: %.2f hab/km²\n", densidadeDemografica2);

        break;
    case 6:
        printf("Regras do jogo: Compare os atributos e o maior valor vence, com exceção da densidade demográfica, onde o menor valor ganha!\n");
        break;
    default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    }
    // Loop para garantir que o segundo atributo seja diferente do primeiro
    bool valido = false;
    while (!valido)
    {
        // Escolha do segundo atributo
        printf("\nEscolha o segundo atributo para comparar as cartas ou digite 0 para sair:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - Regras do Jogo\n");
        scanf("%d", &atributoSegundo);

        // Verifica se o jogador quer sair
        if (atributoSegundo == 0)
        {
            printf("Jogo encerrado. Obrigado por participar!\n");
            return 0; // Sai do programa
        }
        // Verifica se o segundo atributo é diferente do primeiro
        if (atributoSegundo != atributoPrimeiro)
        {
            valido = true; // A escolha é válida
        }
        else
        {
            printf("Você já escolheu este atributo na primeira vez! Escolha outro.\n");
        }
    }
    // Comparação do segundo atributo usando switch e if/else
    switch (atributoSegundo)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            printf("Recife tem maior população que Salvador: Recife é a vencedora!\n");
        }
        else if (populacao1 < populacao2)
        {
            printf("Salvador tem maior população que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador têm a mesma população.\n");
        }
        // Exibir o resultado da comparação da população.
        printf("População de Recife: %d\n", populacao1);
        printf("População de Salvador: %d\n", populacao2);
        break;
    case 2:
        if (area1 > area2)
        {
            printf("Recife tem maior área que Salvador: Recife é a vencedora!\n");
        }
        else if (area1 < area2)
        {
            printf("Salvador tem maior área que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador têm a mesma área.\n");
        }
        // Exibir o resultado da comparação da área.
        printf("Área de Recife em km²: %.2f\n", area1);
        printf("Área de Salvador em km²: %.2f\n", area2);
        break;
    case 3:
        if (PIB1 > PIB2)
        {
            printf("Recife tem maior PIB que Salvador: Recife é a vencedora!\n");
        }
        else if (PIB1 < PIB2)
        {
            printf("Salvador tem maior PIB que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador têm o mesmo PIB.\n");
        }
        // Exibir o resultado da comparação do PIB.
        printf("PIB de Recife R$: %.2f\n", PIB1);
        printf("PIB de Salvador R$: %.2f\n", PIB2);
        break;
    case 4:
        if (pontoTuristico1 > pontoTuristico2)
        {
            printf("Recife tem mais pontos turísticos que Salvador: Recife é a vencedora!\n");
        }
        else if (pontoTuristico1 < pontoTuristico2)
        {
            printf("Salvador tem mais pontos turísticos que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador têm a mesma quantidade de pontos turísticos.\n");
        }
        // Exibir o resultado da comparação dos pontos turísticos.
        printf("Pontos Turísticos de Recife: %d\n", pontoTuristico1);
        printf("Pontos Turísticos de Salvador: %d\n", pontoTuristico2);
        break;
    case 5:
        if (densidadeDemografica1 < densidadeDemografica2)
        {
            printf("Recife tem menor densidade demográfica que Salvador: Recife é a vencedora!\n");
        }
        else if (densidadeDemografica1 > densidadeDemografica2)
        {
            printf("Salvador tem menor densidade demográfica que Recife: Salvador é a vencedora!\n");
        }
        else
        {
            printf("Empate! Recife e Salvador têm a mesma densidade demográfica.\n");
        }
        // Exibir o resultado da comparação da densidade demográfica.
        printf("Densidade Demográfica de Recife: %.2f hab/km²\n", densidadeDemografica1);
        printf("Densidade Demográfica de Salvador: %.2f hab/km²\n", densidadeDemografica2);
        break;
    case 6:
        printf("Regras do jogo: Compare os atributos e o maior valor vence, com exceção da densidade "
               " demográfica, onde o menor valor ganha!\n");
        break;
    default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    }

    return 0;
}
