#include <locale.h> // Para corrigir caracteres especiais.
#include <stdio.h>

int main()
{

    setlocale(LC_ALL, "pt_PT.UTF-8"); // Corrige caracteres especiais.

    printf("======NÍVEL BÁSICO =========================\n");
    
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


    printf("======NÌVEL AVENTUREIRO================================ \n");

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


    printf("========== NÍVEL MESTRE ======================== \n");   

    // Calcular Densidade Demográfica e PIB per capita de Recife.
    densidadeDemografica1 = (float)populacao1 / area1;
    PIBperCapita1 = (PIB1 * 1000000) / (float)populacao1;

    printf("Densidade Demográfica de Recife: %.2f\n", densidadeDemografica1);
    printf("PIB per capita de Recife em R$: %.2f\n", PIBperCapita1);
   
   
    // Calcular Densidade Demográfica e PIB per capita de Salvador.
   densidadeDemografica2 = (unsigned long int)populacao2 / area2; // População usando 'unsigned long int' para acomodar números maiores.
   PIBperCapita2 = (PIB2 * 1000000) / (unsigned long int)populacao2;

   printf("Densidade Demográfica de Salvador: %.2f\n", densidadeDemografica2);
   printf("PIB per capita de Salvador em R$: %.2f\n", PIBperCapita2);
   
   
   //Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos e exiba o resultado.
   //Declarando superPoder1 e superPoder2 como float para armazenar valores decimais.
    float superPoder1 = populacao1 + area1 + PIB1 + pontoTuristico1 + (1/densidadeDemografica1) + PIBperCapita1;
    printf("O valor do superPoder1 é: %.2f\n", superPoder1);

    float superPoder2 = populacao2 + area2 + PIB2 + pontoTuristico2 + (1/densidadeDemografica2) + PIBperCapita2;  
    printf("O valor do superPoder2 é: %.2f\n", superPoder2);

   
    //Comparar atributos: População, Área, PIB, Pontos Turísticos, Densidade Demográfica, PIB per capita e Super Poder.
    //A carta com o maior valor vence, exceto para Densidade Demográfica, onde o menor valor ganha.
    //Exibir o resultado da comparação dos atributos.

    // Comparar População.
    int resultado = populacao1 > populacao2;
    printf("O resultado da comparação é: %d\n", resultado); // Exibir o resultado da comparação.
    printf("Se o resultado for 0 (zero) populacão2 ganhou: %d\n", resultado);

    // Comparar Área.
    resultado = area1 > area2;
    printf("O resultado da comparação (area1 > area2) é: %d\n", resultado);
    printf("Se o resultado for 0 (zero) área2 ganhou: %d\n", resultado);
    
    // Comparar atributo: PIB.
    resultado = PIB1 > PIB2;
    printf("O resultado da comparação (PIB1 > PIB2) é: %d\n", resultado);
    printf("Se o resultado for 0 (zero) PIB2 ganhou: %d\n", resultado);

    // Comparar atributo: Pontos Turísticos.
    resultado = pontoTuristico1 > pontoTuristico2;
    printf("O resultado da comparação (pontoTuristico1 > pontoTuristico2) é: %d\n", resultado);
    printf("Se o resultado for 0 (zero) pontoTuristico2 ganhou: %d\n", resultado);

    // Comparar atributo: Densidade Demográfica.
    resultado = densidadeDemografica1 < densidadeDemografica2;  
    printf("O resultado da comparação (densidadeDemografica1 < densidadeDemografica2) é: %d\n", resultado);
    printf("Se o resultado for 0 (zero) densidadeDemografica2 ganhou: %d\n", resultado);

    // Comparar atributo: PIB per capita.
    resultado = PIBperCapita1 > PIBperCapita2;
    printf("O resultado da comparação (PIBperCapita1 > PIBperCapita2) é: %d\n", resultado);
    printf("Se o resultado for 1 (um) PIBperCapita2 ganhou: %d\n", resultado);

    // Comparar atributo: Super Poder.
    resultado = superPoder1 > superPoder2;
    printf("O resultado da comparação (superPoder1 > superPoder2) é: %d\n", resultado);
    printf("Se o resultado for 0 (zero) superPoder2 ganhou: %d\n", resultado);

      return 0;
}

   

 
  
