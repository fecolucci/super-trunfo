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

    int atributo1, atributo2;
    int resultado1, resultado2;


    //calculos

    densidade1 = (float) populacao1 / area1;
    pib_percapta1 = (float) pib1 / populacao1;
    super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_percapta1 + (1 / densidade1);

    
    densidade2 = (float) populacao2 / area2;
    pib_percapta2 = (float) pib2 / populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_percapta2 + (1 / densidade2);


        // //Entrada de dados do usuário com orientações

        // //Carta 1

        printf ("*****CARTA 1*****\n");

        printf ("Insira o Estado: \n");
        scanf (" %c", &estado1);

        printf ("Insira o Código da Carta: \n");
        scanf ("%s", codigo1);

        getchar(); //Limpa o buffer antes do fgets

        printf ("Insira o Nome da Cidade: \n");
        fgets(cidade1, sizeof(cidade1), stdin); //Permite a inclusão de uma linha inteira na entrada de dados
        cidade1[strcspn(cidade1, "\n")] = 0; //Remove a quebra de linha

        printf ("Insira a População: \n");
        scanf ("%lu", &populacao1);

        printf ("Insira a Área em km²: \n");
        scanf ("%f", &area1);

        printf ("Insira o PIB: \n");
        scanf ("%f", &pib1);

        printf ("Insira o Número de Pontos Turísticos: \n");
        scanf ("%d", &pontos_turisticos1);

        printf("\n"); //Espaço

        //Carta 2
        
        printf ("*****CARTA 2*****\n");

        printf ("Insira o Estado: \n");
        scanf (" %c", &estado2);

        printf ("Insira o Código da Carta: \n");
        scanf ("%s", codigo2);

        getchar(); //Limpa o buffer antes do fgets

        printf ("Insira o Nome da Cidade: \n");
        fgets(cidade2, sizeof(cidade2), stdin);
        cidade2[strcspn(cidade2, "\n")] = 0;

        printf ("Insira a População: \n");
        scanf ("%lu", &populacao2);

        printf ("Insira a Área em km²: \n");
        scanf ("%f", &area2);

        printf ("Insira o PIB: \n");
        scanf ("%f", &pib2);

        printf ("Insira o Número de Pontos Turísticos: \n");
        scanf ("%d", &pontos_turisticos2);

        //#######################--ENTRADAS PARA TESTES--####################

            // Atribuições carta 1
            // estado1 = 'A';
            // strcpy(codigo1, "A01");
            // strcpy(cidade1, "São Paulo");
            // populacao1 = 12325000;
            // area1 = 1521.11;
            // pib1 = 699280000000;
            // pontos_turisticos1 = 50;
            // densidade1 = (float) populacao1 / area1;
            // pib_percapta1 = (float) pib1 / populacao1;
            // super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_percapta1 + (1 / densidade1);

            // // Atribuições carta 2
            // estado2 = 'B';
            // strcpy(codigo2, "B02");
            // strcpy(cidade2, "Rio de Janeiro");
            // populacao2 = 6748000;
            // area2 = 1200.25;
            // pib2 = 300500000000;
            // pontos_turisticos2 = 30;
            // densidade2 = (float) populacao2 / area2;
            // pib_percapta2 = (float) pib2 / populacao2;
            // super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_percapta2 + (1 / densidade2);       

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
        printf("Escolha o número do primeiro atributo: \n");
        scanf("%d", &atributo1);
        
        switch (atributo1)
        {
        case 1:
            printf("Atributo População:\n");
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Atributo Área:\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Atributo PIB:\n");
            printf("Carta 1 - %s: R$ %.2f bilhões\n", cidade1, pib1 / 1e9);
            printf("Carta 2 - %s: R$ %.2f bilhões\n", cidade2, pib2 / 1e9);
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Atributo Pontos Turísticos:\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
            break;
        case 5:
            printf("Atributo Densidade Populacional:\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
            resultado1 = densidade1 < densidade2 ? 1 : 0;           
            break;
        case 6:
            printf("Atributo PIB per Capta:\n");
            printf("Carta 1 - %s: R$ %.2f\n", cidade1, pib_percapta1);
            printf("Carta 2 - %s: R$ %.2f\n", cidade2, pib_percapta2);
            resultado1 = pib_percapta1 > pib_percapta2 ? 1 : 0;            
            break;
        case 7:
            printf("Atributo Super Poder:\n");
            printf("Carta 1 - %s: %.f\n", cidade1, super_poder1);
            printf("Carta 2 - %s: %.f\n", cidade2, super_poder2);
            resultado1 = super_poder1 > super_poder2 ? 1 : 0;
            break;      
        default:
            printf("Opção inválida!");
            break;
        }

        printf("\n");
        printf("Escolha o número do segundo atributo.\n");
        printf("Atenção: escolha um atributo diferente do primeiro!\n");
        printf("Segundo atributo: \n");
        scanf("%d", &atributo2);

        if (atributo1 == atributo2) {
            printf("Você escolheu o mesmo atributo!\n");
        } else {
            switch (atributo2)
        {
            case 1:
            printf("Atributo População:\n");
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Atributo Área:\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Atributo PIB:\n");
            printf("Carta 1 - %s: R$ %.2f bilhões\n", cidade1, pib1 / 1e9);
            printf("Carta 2 - %s: R$ %.2f bilhões\n", cidade2, pib2 / 1e9);
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Atributo Pontos Turísticos:\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
            break;
        case 5:
            printf("Atributo Densidade Populacional:\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
            resultado1 = densidade1 < densidade2 ? 1 : 0;           
            break;
        case 6:
            printf("Atributo PIB per Capta:\n");
            printf("Carta 1 - %s: R$ %.2f\n", cidade1, pib_percapta1);
            printf("Carta 2 - %s: R$ %.2f\n", cidade2, pib_percapta2);
            resultado1 = pib_percapta1 > pib_percapta2 ? 1 : 0;            
            break;
        case 7:
            printf("Atributo Super Poder:\n");
            printf("Carta 1 - %s: %.f\n", cidade1, super_poder1);
            printf("Carta 2 - %s: %.f\n", cidade2, super_poder2);
            resultado1 = super_poder1 > super_poder2 ? 1 : 0;
            break;       
        default:
            printf("Opção inválida!");
            break;
        }

        // Comparação 2 atributos

        if (resultado1 && resultado2) {
            printf("\n");
            printf("**Carta 1 - %s venceu!!!**\n", cidade1);
        } else if (resultado1 != resultado2) {
            printf("\n");
            printf("**Empatou!!!**\n");
        } else {
            printf("\n");
            printf("**Carta 2 - %s venceu!!!**\n", cidade2);
        }
    }


        printf("\n");
        printf ("**************FIM DO JOGO**************\n");

        return 0;

}