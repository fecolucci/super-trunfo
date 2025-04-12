#include <stdio.h> //Biblioteca padrão
#include <string.h> //Biblioteca necessária para usar strcspn

int main(){

    // Variáveis carta 1
    char estado1, codigo1[4], cidade1[50]; 
    int pontos_turisticos1;
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_percapta1, super_poder1;

    // Variáveis carta 2
    char estado2, codigo2[4], cidade2[50]; 
    int pontos_turisticos2;
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_percapta2, super_poder2;

    // Variáveis de comparação das cartas

    int comparacao;

        // // //Entrada de dados do usuário com orientações

        // // //Carta 1

        // printf ("*****CARTA 1*****\n");

        // printf ("Insira o Estado: \n");
        // scanf (" %c", &estado1);

        // printf ("Insira o Código da Carta: \n");
        // scanf ("%s", codigo1);

        // getchar(); //Limpa o buffer antes do fgets

        // printf ("Insira o Nome da Cidade: \n");
        // fgets(cidade1, sizeof(cidade1), stdin); //Permite a inclusão de uma linha inteira na entrada de dados
        // cidade1[strcspn(cidade1, "\n")] = 0; //Remove a quebra de linha

        // printf ("Insira a População: \n");
        // scanf ("%lu", &populacao1);

        // printf ("Insira a Área em km²: \n");
        // scanf ("%f", &area1);

        // printf ("Insira o PIB: \n");
        // scanf ("%f", &pib1);

        // printf ("Insira o Número de Pontos Turísticos: \n");
        // scanf ("%d", &pontos_turisticos1);

        //calculos após entradas

        // densidade1 = (float) populacao1 / area1;
        // pib_percapta1 = (float) pib1 / populacao1;
        // super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_percapta1 + (1 / densidade1);

        // printf("\n"); //Espaço

        // //Carta 2
        
        // printf ("*****CARTA 2*****\n");

        // printf ("Insira o Estado: \n");
        // scanf (" %c", &estado2);

        // printf ("Insira o Código da Carta: \n");
        // scanf ("%s", codigo2);

        // getchar(); //Limpa o buffer antes do fgets

        // printf ("Insira o Nome da Cidade: \n");
        // fgets(cidade2, sizeof(cidade2), stdin);
        // cidade2[strcspn(cidade2, "\n")] = 0;

        // printf ("Insira a População: \n");
        // scanf ("%lu", &populacao2);

        // printf ("Insira a Área em km²: \n");
        // scanf ("%f", &area2);

        // printf ("Insira o PIB: \n");
        // scanf ("%f", &pib2);

        // printf ("Insira o Número de Pontos Turísticos: \n");
        // scanf ("%d", &pontos_turisticos2);

        //calculos após entradas

        // densidade2 = (float) populacao2 / area2;
        // pib_percapta2 = (float) pib2 / populacao2;
        // super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_percapta2 + (1 / densidade2);



        //#######################--ENTRADAS PARA TESTES--####################

            // Atribuições carta 1
            estado1 = 'A';
            strcpy(codigo1, "A01");
            strcpy(cidade1, "São Paulo");
            populacao1 = 12325000;
            area1 = 1521.11;
            pib1 = 699280000000;
            pontos_turisticos1 = 50;
            densidade1 = (float) populacao1 / area1;
            pib_percapta1 = (float) pib1 / populacao1;
            super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_percapta1 + (1 / densidade1);

            // Atribuições carta 2
            estado2 = 'B';
            strcpy(codigo2, "B02");
            strcpy(cidade2, "Rio de Janeiro");
            populacao2 = 6748000;
            area2 = 1200.25;
            pib2 = 300500000000;
            pontos_turisticos2 = 30;
            densidade2 = (float) populacao2 / area2;
            pib_percapta2 = (float) pib2 / populacao2;
            super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_percapta2 + (1 / densidade2);       

    //##############################################
           

        //Saída de dados de forma estruturada e organizada

        printf("\n"); //Espaço

        //Carta 1

        printf ("*****CARTA 1*****\n");

        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("1. População: %lu\n", populacao1);
        printf("2. Área: %.2f km²\n", area1);
        printf("3. PIB: R$ %.2f bilhões\n", pib1 / 1e9);
        printf("4. Número de Pontos Turísticos: %d\n", pontos_turisticos1);
        printf("5. Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("6. PIB per Capta: R$ %.2f\n", pib_percapta1);
        printf("7. Super poder: %.f\n", super_poder1);

        //Linha de separação

        printf("\n");
        printf("---------------------------------------\n");
        printf("\n");

        //Carta 2

        printf ("*****CARTA 2*****\n");

        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("1. População: %lu\n", populacao2);
        printf("2. Área: %.2f km²\n", area2);
        printf("3. PIB: R$ %.2f bilhões\n", pib2 / 1e9);
        printf("4. Número de Pontos Turísticos: %d\n", pontos_turisticos2);
        printf("5. Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("6. PIB per Capta: R$ %.2f\n", pib_percapta2);
        printf("7. Super poder: %.f\n", super_poder2);


        //Comparação das cartas

        printf("\n");
        printf ("Comparação de Cartas\n");
        printf ("%s x %s\n", cidade1, cidade2);
        printf("\n");
        printf("Escolha o número do atributo: \n");
        scanf("%d", &comparacao);
        
        switch (comparacao)
        {
        case 1:
            printf("Atributo População:\n");
            printf("Carta 1 - São Paulo (SP): %lu\n", populacao1);
            printf("Carta 2 - Rio de Janeiro (RJ): %lu\n", populacao2);

            if (populacao1 > populacao2)
            {
                printf("%s venceu!\n", cidade1);
            } else if (populacao1 < populacao2) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Deu empate!\n");
            }            
            break;
        case 2:
            printf("Atributo Área:\n");
            printf("Carta 1 - São Paulo (SP): %.2f km²\n", area1);
            printf("Carta 2 - Rio de Janeiro (RJ): %.2f km²\n", area2);

            if (area1 > area2)
            {
                printf("%s venceu!\n", cidade1);
            } else if (area1 < area2) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Deu empate!\n");
            }            
            break;
        case 3:
            printf("Atributo PIB:\n");
            printf("Carta 1 - São Paulo (SP): R$ %.2f bilhões\n", pib1 / 1e9);
            printf("Carta 2 - Rio de Janeiro (RJ): R$ %.2f bilhões\n", pib2 / 1e9);

            if (pib1 > pib2)
            {
                printf("%s venceu!\n", cidade1);
            } else if (pib1 < pib2) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Deu empate!\n");
            }            
            break;
        case 4:
            printf("Atributo Pontos Turísticos:\n");
            printf("Carta 1 - São Paulo (SP): %d\n", pontos_turisticos1);
            printf("Carta 2 - Rio de Janeiro (RJ): %d\n", pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2)
            {
                printf("%s venceu!\n", cidade1);
            } else if (pontos_turisticos1 < pontos_turisticos2) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Deu empate!\n");
            }            
            break;
        case 5:
            printf("Atributo Densidade Populacional:\n");
            printf("Carta 1 - São Paulo (SP): %.2f hab/km²\n", densidade1);
            printf("Carta 2 - Rio de Janeiro (RJ): %.2f hab/km²\n", densidade2);

            if (densidade1 < densidade2)
            {
                printf("%s venceu!\n", cidade1);
            } else if (densidade1 > densidade2) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Deu empate!\n");
            }            
            break;
        case 6:
            printf("Atributo PIB per Capta:\n");
            printf("Carta 1 - São Paulo (SP): R$ %.2f\n", pib_percapta1);
            printf("Carta 2 - Rio de Janeiro (RJ): R$ %.2f\n", pib_percapta2);

            if (pib_percapta1 > pib_percapta2)
            {
                printf("%s venceu!\n", cidade1);
            } else if (pib_percapta1 < pib_percapta2) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Deu empate!\n");
            }            
            break;
        case 7:
            printf("Atributo Super Poder:\n");
            printf("Carta 1 - São Paulo (SP): %.f\n", super_poder1);
            printf("Carta 2 - Rio de Janeiro (RJ): %.f\n", super_poder2);

            if (super_poder1 > super_poder2)
            {
                printf("%s venceu!\n", cidade1);
            } else if (super_poder1 < super_poder2) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Deu empate!\n");
            }            
            break;
        
        default:
            printf("Opção inválida!");
            break;
        }  

        printf("\n\n");
        printf ("**************FIM DO JOGO**************\n");

        return 0;

}