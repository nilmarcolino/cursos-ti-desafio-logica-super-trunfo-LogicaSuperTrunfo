#include <locale.h> // Para corrigir caracteres especiais.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Para usar valores como "true" e "false"

int main()
{

    setlocale(LC_ALL, "pt_PT.UTF-8"); // Configura o locale com base no sistema operacional

    
    // Recebendo os dados da carta de Recife.
    char estado1[] = "Pernambuco";
    char codigoDaCarta1[] = "A01";
    char cidade1[] = "Recife";
    int populacao1 = 1490000; // Representando 1.490.000
    float area1 = 218.400f;   // Área em km²
    float PIB1 = 55000.00;    // PIB em R$
    int pontoTuristico1 = 35; // Número de pontos turísticos

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

        float densidadeDemografica1 = (float)populacao1 / area1; // Recife
        printf("Densidade Demográfica de Recife: %.2f hab/km²\n", densidadeDemografica1);

        float densidadeDemografica2 = (float)populacao2 / area2; // Salvador
        printf("Densidade Demográfica de Salvador: %.2f hab/km²\n", densidadeDemografica2);

        //PIB per capita:
        float PIBperCapita1 = (PIB1 * 1000000) / (float)populacao1; // Recife
        printf("PIB per capita de Recife em R$: %.2f\n", PIBperCapita1);

        float PIBperCapita2 = (PIB2 * 1000000) / (float)populacao2; // Salvador
        printf("PIB per capita de Salvador em R$: %.2f\n", PIBperCapita2);

        printf(" Super Trunfo - Tema 2 - NIVEL NOVATO\n"); // NIVEL NOVATO ************

        //1. Comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if-else.
        //Com base em um único atributo: População.

        if(populacao1 > populacao2)
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

        //2.Calcular  e exibir densidade demográfica e PIB per capita: Recife e Salvador. 
        //Densidade Demográfica:
    
        printf("Densidade Demográfica de Recife: %.2f hab/km²\n", densidadeDemografica1);

        printf("Densidade Demográfica de Salvador: %.2f hab/km²\n", densidadeDemografica2);

        //PIB per capita:
    
        printf("PIB per capita de Recife em R$: %.2f\n", PIBperCapita1);

        printf("PIB per capita de Salvador em R$: %.2f\n", PIBperCapita2);

        //3.Comparar um atributo escolhido: PIB per capita: Recife e Salvador.
        //4 Determinar a Carta vencedora do atributo escolhido: PIB per capita.
        if (PIBperCapita1 > PIBperCapita2)
        {
        printf("Recife tem maior PIB per capita que Salvador: Recife é a vencedora!\n");
        }
        else if (PIBperCapita1 < PIBperCapita2)
        {
        printf("Salvador tem maior PIB per capita que Recife: Salvador é a vencedora!\n");
        }
        else
        {
        printf("Empate! Recife e Salvador têm o mesmo PIB per capita.\n");
        }

        /*5. Exibir o resultado da comparação: carta vencedora, atributo utilizado na comparação 
         e os valores das duas cartas para aquele atributo.*/

        if (PIBperCapita1 > PIBperCapita2)
        {
        printf("\nResultado: Recife venceu!\n");
        } 
        else if (PIBperCapita2 < PIBperCapita1)
        {
        printf("\nResultado: Salvador venceu!\n");
        } 
        else
        {
        printf("\nResultado: Empate!\n");
        }

        //Comparação de cartas: PIB per capita
        printf("Carta 1 - Recife (PE): %.2f\n", PIBperCapita1);
        printf("Carta 2 - Salvador (BA): %.2f\n", PIBperCapita2);

    
        printf("==========================================\n");
        printf("Super Trunfo - Tema 2 - NÍVEL AVENTUREIRO\n"); //Nível Aventureiro.

        /*1. Menu interativo usando a estrutura switch que permite ao jogador escolher
         qual atributo será usado para comparar as cartas.*/
    int atributo;
        printf("==============================================\n");
        printf("Escolha um atributo para comparar as cartas:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - Regra do jogo.\n");
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
        printf("Regra do jogo: O jogador escolhe um atributo para comparar as cartas.\n");
        printf("A carta com maior valor vence. Exceto em Densidade Demográfica: o menor valor vence.\n");
        break;
        default:
        printf("Opção inválida! Tente outra vez.\n");
        break;
        }   
  
        printf ("======================================================\n");
        printf("Super Trunfo - Tema 2 - NÍVEL MESTRE\n"); // Nível Mestre.	

        //1.Escolha de dois atributos numéricos diferentes para comparação das cartas.

    int atributoPrimeiro = 0;
    int atributoSegundo = 0;
    
        printf("\nEscolha o primeiro atributo para comparar as cartas:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - Regras do Jogo\n");

    
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
    while (!valido) {

        // Escolha do segundo atributo
        printf("\nEscolha o segundo atributo para comparar as cartas ou digite 0 para sair:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - Regras do Jogo\n");
        scanf("%d", &atributoSegundo);

       
        // Verifica se o segundo atributo é diferente do primeiro
        if (atributoSegundo < 1 || atributoSegundo > 6) // Se a escolha for inválida
        {
            printf("Opção inválida! Escolha um número entre 1 e 6.\n");
        }
        else if (atributoSegundo == atributoPrimeiro) // Se a escolha for igual ao primeiro atributo
        {
            printf("Escolha um atributo diferente do primeiro!\n");
        }
        else // Se a escolha for válida
        {
            valido = true; // A escolha é válida
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
        // Exibir o resultado da comparação dos pontos turísticos.
        printf("Densidade Demográfica de Recife: %.2f\n", densidadeDemografica1);
        printf("Densidade Demográfica de Salvador: %.2f\n", densidadeDemografica2);
        break;
    
        return 0;
        }
        
        printf("Chegou na parte de calcular a soma total dos atributos.\n");
        printf("========================================================\n");
        
        // 6. Calcular e exibir a soma total dos atributos da carta vencedora.

        // Variável para somar os atributos vencedores
       float somaVencedor = 0;

       // Contadores de vitórias para cada cidade
       int vitoriasRecife = 0, vitoriasSalvador = 0;

       // Comparar o primeiro atributo escolhido
    switch (atributoPrimeiro)
        {
    case 1: // População
        if (populacao1 > populacao2)
        {
            somaVencedor += populacao1;
            vitoriasRecife++;
        }
        else if
         (populacao1 < populacao2) 
         {
            somaVencedor += populacao2;
            vitoriasSalvador++;            
        }
        break;
    case 2: // Área
        if (area1 > area2)
        {
            somaVencedor += area1;
            vitoriasRecife++;
        }
        else if (area1 < area2)
        {
            somaVencedor += area2;
            vitoriasSalvador++;
        }
        break;
    case 3: // PIB
        if (PIB1 > PIB2) 
        {
            somaVencedor += PIB1;
            vitoriasRecife++;
        } 
        else if (PIB1 < PIB2) 
        {
            somaVencedor += PIB2;
            vitoriasSalvador++;
        }
        break;
    case 4: // Pontos Turísticos
        if (pontoTuristico1 > pontoTuristico2) 
        {
            somaVencedor += pontoTuristico1;
            vitoriasRecife++;
        } 
        else if (pontoTuristico1 < pontoTuristico2) 
        {
            somaVencedor += pontoTuristico2;
            vitoriasSalvador++;
        }
        else
        {
            printf("Empate! Recife e Salvador têm a mesma quantidade de pontos turísticos.\n");
        }
        break;
    case 5: // Densidade Demográfica (menor valor vence)
        if (densidadeDemografica1 < densidadeDemografica2) 
        {
            somaVencedor += densidadeDemografica1;
            vitoriasRecife++;
        } 
        else if (densidadeDemografica1 > densidadeDemografica2)
        {
            somaVencedor += densidadeDemografica2;
            vitoriasSalvador++;
        }
        break;
}

     // Comparar o segundo atributo escolhido
switch (atributoSegundo) {
    case 1: // População
        if (populacao1 > populacao2) {
            somaVencedor += populacao1;
            vitoriasRecife++;
        } else if (populacao1 < populacao2) {
            somaVencedor += populacao2;
            vitoriasSalvador++;
        }
        break;
    case 2: // Área
        if (area1 > area2) {
            somaVencedor += area1;
            vitoriasRecife++;
        } else if (area1 < area2) {
            somaVencedor += area2;
            vitoriasSalvador++;
        }
        break;
    case 3: // PIB
        if (PIB1 > PIB2) {
            somaVencedor += PIB1;
            vitoriasRecife++;
        } else if (PIB1 < PIB2) {
            somaVencedor += PIB2;
            vitoriasSalvador++;
        }
        break;
    case 4: // Pontos Turísticos
        if (pontoTuristico1 > pontoTuristico2) {
            somaVencedor += pontoTuristico1;
            vitoriasRecife++;
        } else if (pontoTuristico1 < pontoTuristico2) {
            somaVencedor += pontoTuristico2;
            vitoriasSalvador++;
        }
        break;
    case 5: // Densidade Demográfica (menor valor vence)
        if (densidadeDemografica1 < densidadeDemografica2) {
            somaVencedor += densidadeDemografica1;
            vitoriasRecife++;
        } else if (densidadeDemografica1 > densidadeDemografica2) {
            somaVencedor += densidadeDemografica2;
            vitoriasSalvador++;
        }
        break;
}

    // Exibir o vencedor geral com base nas duas categorias escolhidas
    printf("Soma total dos atributos da carta vencedora: %.2f\n", somaVencedor);
    if (vitoriasRecife > vitoriasSalvador)
    {
    printf("Recife é a cidade vencedora com %d vitórias!\n", vitoriasRecife);
    } 
    else if (vitoriasSalvador > vitoriasRecife) 
    {
    printf("Salvador é a cidade vencedora com %d vitórias!\n", vitoriasSalvador);
    } 
    else
    {
    printf("Empate! Recife e Salvador têm o mesmo número de vitórias (%d cada).\n", vitoriasRecife);
    }

    
    }
    return 0;
    
    }

    