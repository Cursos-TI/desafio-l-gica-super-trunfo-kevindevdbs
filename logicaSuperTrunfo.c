#include <stdio.h> // Biblioteca padrão para entrada e saída

int main()
{

    // Declaração de variáveis para a Carta 1
    char estado, estado1;
    char codigodacarta[50], codigodacarta1[50];
    char nomedacidade[50], nomedacidade1[50];
    int populacao, populacao1;
    float areaemkm, areaemkm1;
    float pib, pib1;
    float pibpercapita, pibpercapita1, densidadepopulacional, densidadepopulacional1;
    int pontosturisticos, pontosturisticos1;
    float superpoder, superpoder1;

    // Introdução ao jogo
    printf("Bem Vindo ao Jogo SuperTrufo, Você precisa cadastrar duas cartas: Carta 1 e Carta 2.\n");
    printf("Vamos começar pela Carta 1, insira os dados solicitados a seguir.\n\n");

    // Entrada de dados da Carta 1
    printf("Digite a Primeira letra de Um Estado de 'A' a 'H' :\n");
    scanf(" %c", &estado); // Espaço antes do %c evita leitura de '\n' deixado no buffer

    printf("Digite o numero de pontos turisticos da cidade : \n");
    scanf("%d", &pontosturisticos);

    printf("Digite o Codigo da Carta (Que é a letra do estado seguida de um numero de 01 a 04) :\n");
    scanf("%s", codigodacarta);

    printf("Digite o nome da Cidade que deseja daquele estado: \n");
    scanf("%s", nomedacidade);

    printf("Digite o numero de habitantes da cidade (Não utilize pontos para separação) : \n");
    scanf("%d", &populacao);

    printf("Digite a area em km² da cidade (Não utilize pontos para separação) :  \n");
    scanf("%f", &areaemkm);

    printf("O PIB da cidade é de Quantos Bilhões : \n");
    scanf("%f", &pib);

    printf("\n");

    // Cálculos da Carta 1
    pibpercapita = (pib * 1000000000) / populacao; // PIB dividido pela população
    densidadepopulacional = populacao / areaemkm;  // População por área
    superpoder = (float)populacao + areaemkm + pib + (float)pontosturisticos + pibpercapita + (1 - densidadepopulacional);

    // Entrada de dados da Carta 2
    printf("Agora vamos cadastrar a Carta 2. Vamos começar!\n\n");

    printf("Digite a Primeira letra de Um Estado de 'A' a 'H' :\n");
    scanf(" %c", &estado1);

    printf("Digite o numero de pontos turisticos da cidade : \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite o Codigo da Carta (Que é a letra do estado seguida de um numero de 01 a 04) :\n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da Cidade que deseja daquele estado: \n");
    scanf("%s", nomedacidade1);

    printf("Digite o numero de habitantes da cidade (Não utilize pontos para separação) : \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km² da cidade (Não utilize pontos para separação) : \n");
    scanf("%f", &areaemkm1);

    printf("O PIB da cidade é de Quantos Bilhões : \n");
    scanf("%f", &pib1);

    printf("\n");

    // Cálculos da Carta 2
    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    densidadepopulacional1 = populacao1 / areaemkm1;
    superpoder1 = (float)populacao1 + areaemkm1 + pib1 + (float)pontosturisticos1 + pibpercapita1 + (1 - densidadepopulacional1);

    // exibição dos dados das duas cartas para comparação
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", areaemkm);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
    printf("Superpoder: %.2f\n\n", superpoder);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaemkm1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("Superpoder: %.2f\n\n", superpoder1);

    // Comparação das Cartas

    int opcao1, opcao2;
    int resultado1populacao, resultado2populacao, resultado1area, resultado2area, resultado1pib, resultado2pib, resultado1pontos, resultado2pontos, resultado1pibpercapita, resultado2pibpercapita, resultado1densidade, resultado2densidade, resultado1superpoder, resultado2superpoder;

    //Entrada da primeira opção


    printf("Escolha o primeiro atributo para comparar as cartas! (você poderá escolher 2 atributos)\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. PIB Per Capita\n");
    printf("6. Densidade Populacional\n");
    printf("7. Superpoder\n");
    scanf("%d", &opcao1);

    //Escolha da primeira opção

    switch (opcao1)
    {
    case 1:
        printf("Você escolheu a População!\n");
        resultado1populacao = populacao > populacao1 ? 1 : 0;
        break;

    case 2:
        printf(" Vocé escolheu a Area!\n");
        resultado1area = areaemkm > areaemkm1 ? 1 : 0;
        break;

    case 3:
        printf(" Vocé escolheu o PIB!\n");
        resultado1pib = pib > pib1 ? 1 : 0;
        break;

    case 4:
        printf(" Vocé escolheu os Pontos Turísticos!\n");
        resultado1pontos = pontosturisticos > pontosturisticos1 ? 1 : 0;
        break;

    case 5:
        printf(" Vocé escolheu o PIB Per Capita!\n");
        resultado1pibpercapita = pibpercapita > pibpercapita1 ? 1 : 0;
        break;

    case 6:
        printf(" Vocé escolheu a Densidade Populacional!\n");
        resultado1densidade = densidadepopulacional < densidadepopulacional1 ? 1 : 0;
        break;

    case 7:
        printf(" Vocé escolheu o Superpoder!\n");
        resultado1superpoder = superpoder > superpoder1 ? 1 : 0;
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    //Entrada da segunda opção

    printf("Escolha o Segundo atributo para comparar as cartas! (você poderá escolher 2 atributos)\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. PIB Per Capita\n");
    printf("6. Densidade Populacional\n");
    printf("7. Superpoder\n");
    scanf("%d", &opcao2);

    //Escolha da segunda opção

    switch (opcao2)
    {
    case 1:
        opcao2 == opcao1 ? printf("Vocé escolheu a mesma opção!\n\n") : printf(" Vocé escolheu a População!\n\n");
        resultado2populacao = populacao1 > populacao ? 1 : 0;
        break;

    case 2:
        opcao2 == opcao1 ? printf("Vocé escolheu a mesma opção!\n\n") : printf(" Vocé escolheu a Area!\n\n");
        resultado2area = areaemkm1 > areaemkm ? 1 : 0;
        break;

    case 3:
        opcao2 == opcao1 ? printf("Vocé escolheu a mesma opção!\n\n") : printf(" Vocé escolheu o PIB!\n\n");
        resultado2pib = pib1 > pib ? 1 : 0;
        break;

    case 4:
        opcao2 == opcao1 ? printf("Vocé escolheu a mesma opção!\n\n") : printf(" Vocé escolheu os Pontos Turísticos!\n\n");
        resultado2pontos = pontosturisticos1 > pontosturisticos ? 1 : 0;
        break;

    case 5:
        opcao2 == opcao1 ? printf("Vocé escolheu a mesma opção!\n\n") : printf(" Vocé escolheu o PIB Per Capita!\n\n");
        resultado2pibpercapita = pibpercapita1 > pibpercapita ? 1 : 0;
        break;

    case 6:
        opcao2 == opcao1 ? printf("Vocé escolheu a mesma opção!\n\n") : printf(" Vocé escolheu a Densidade Populacional!\n\n");
        resultado2densidade = densidadepopulacional1 < densidadepopulacional ? 1 : 0;
        break;

    case 7:
        opcao2 == opcao1 ? printf("Vocé escolheu a mesma opção!\n\n") : printf(" Vocé escolheu o Superpoder!\n\n");
        resultado2superpoder = superpoder1 > superpoder ? 1 : 0;
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    //Comparação das cartas das duas opções

    switch (opcao1)
    {
    case 1:
        if (resultado1populacao > resultado2populacao)
        {
            printf("Carta 1 (%s) venceu em População com %d habitantes!\n", nomedacidade, populacao);
        }
        else if (resultado1populacao < resultado2populacao)
        {
            printf("Carta 2 (%s) venceu em População com %d habitantes!\n", nomedacidade1, populacao1);
        }
        else
        {
            printf(" população : Empatou com %d habitantes!\n" , populacao);
        }
        break;

    case 2:
        if (resultado1area > resultado2area)
        {
            printf("Carta 1 (%s) venceu em Área com %.2f Km2!\n", nomedacidade, areaemkm);
        }
        else if (resultado1area < resultado2area)
        {
            printf("Carta 2 (%s) venceu em Área com %.2f Km2!\n", nomedacidade1, areaemkm1);
        }
        else
        {
            printf(" area : Empatou com %.2f Km2!\n" , areaemkm);
        }
        break;

    case 3:
        if (resultado1pib > resultado2pib)
        {
            printf("Carta 1 (%s) venceu em PIB com R$ %.2f!\n", nomedacidade, pib);
        }
        else if (resultado1pib < resultado2pib)
        {
            printf("Carta 2 (%s) venceu em PIB com R$ %.2f!\n", nomedacidade1, pib1);
        }
        else
        {
            printf(" pib : Empatou com R$ %.2f Bilhões!\n" , pib);
        }
        break;

    case 4:
        if (resultado1pontos > resultado2pontos)
        {
            printf("Carta 1 (%s) venceu em Pontos Turísticos com %d pontos!\n", nomedacidade, pontosturisticos);
        }
        else if (resultado1pontos < resultado2pontos)
        {
            printf("Carta 2 (%s) venceu em Pontos Turísticos com %d pontos!\n", nomedacidade1, pontosturisticos1);
        }
        else
        {
            printf(" pontosturisticos : Empatou com %d pontos!\n" , pontosturisticos);
        }
        break;

    case 5:
        if (resultado1pibpercapita > resultado2pibpercapita)
        {
            printf("Carta 1 (%s) venceu em PIB Per Capita com R$ %.2f!\n", nomedacidade, pibpercapita);
        }
        else if (resultado1pibpercapita < resultado2pibpercapita)
        {
            printf("Carta 2 (%s) venceu em PIB Per Capita com R$ %.2f!\n", nomedacidade1, pibpercapita1);
        }
        else
        {
            printf(" pibpercapita : Empatou com R$ %.2f!\n" , pibpercapita);
        }
        break;

    case 6:
        if (resultado1densidade > resultado2densidade)
        {
            printf("Carta 1 (%s) venceu em Densidade Populacional com %.2f habitantes por Km2!\n", nomedacidade, densidadepopulacional);
        }
        else if (resultado1densidade < resultado2densidade)
        {
            printf("Carta 2 (%s) venceu em Densidade Populacional com %.2f habitantes por Km2!\n", nomedacidade1, densidadepopulacional1);
        }
        else
        {
            printf(" Densidade Populacional : Empatou com %.2f habitantes por Km2!\n" , densidadepopulacional);
        }
        break;

    case 7:
        if (resultado1superpoder > resultado2superpoder)
        {
            printf("Carta 1 (%s) venceu em Superpoder com %.2f pontos!\n", nomedacidade, superpoder);
        }
        else if (resultado1superpoder < resultado2superpoder)
        {
            printf("Carta 2 (%s) venceu em Superpoder com %.2f pontos!\n", nomedacidade1, superpoder1);
        }
        else
        {
            printf(" Superpoder : Empatou com %.2f pontos!\n" , superpoder);
        }
        break;

    }


    switch (opcao2)
    {
    case 1:
        if (resultado1populacao > resultado2populacao)
        {
            printf("Carta 1 (%s) venceu em População com %d habitantes!\n", nomedacidade, populacao);
        }
        else if (resultado1populacao < resultado2populacao)
        {
            printf("Carta 2 (%s) venceu em População com %d habitantes!\n", nomedacidade1, populacao1);
        }
        else
        {
            printf(" população : Empatou com %d habitantes!\n" , populacao);
        }
        break;

    case 2:
        if (resultado1area > resultado2area)
        {
            printf("Carta 1 (%s) venceu em Área com %.2f Km2!\n", nomedacidade, areaemkm);
        }
        else if (resultado1area < resultado2area)
        {
            printf("Carta 2 (%s) venceu em Área com %.2f Km2!\n", nomedacidade1, areaemkm1);
        }
        else
        {
            printf("Área : Empatou! com %.2f Km2\n" , areaemkm);
        }
        break;

    case 3:
        if (resultado1pib > resultado2pib)
        {
            printf("Carta 1 (%s) venceu em PIB com R$ %.2f!\n", nomedacidade, pib);
        }
        else if (resultado1pib < resultado2pib)
        {
            printf("Carta 2 (%s) venceu em PIB com R$ %.2f!\n", nomedacidade1, pib1);
        }
        else
        {
            printf(" PIB : Empatou com R$ %.2f Bilhões!\n" , pib);
        }
        break;

    case 4:
        if (resultado1pontos > resultado2pontos)
        {
            printf("Carta 1 (%s) venceu em Pontos Turísticos com %d pontos!\n", nomedacidade, pontosturisticos);
        }
        else if (resultado1pontos < resultado2pontos)
        {
            printf("Carta 2 (%s) venceu em Pontos Turísticos com %d pontos!\n", nomedacidade1, pontosturisticos1);
        }
        else
        {
            printf(" Pontos Turísticos : Empatou com %d pontos!\n" , pontosturisticos);
        }
        break;

    case 5:
        if (resultado1pibpercapita > resultado2pibpercapita)
        {
            printf("Carta 1 (%s) venceu em PIB Per Capita com R$ %.2f!\n", nomedacidade, pibpercapita);
        }
        else if (resultado1pibpercapita < resultado2pibpercapita)
        {
            printf("Carta 2 (%s) venceu em PIB Per Capita com R$ %.2f!\n", nomedacidade1, pibpercapita1);
        }
        else
        {
            printf(" PIB Per Capita : Empatou com R$ %.2f!\n" , pibpercapita);
        }
        break;

    case 6:
        if (resultado1densidade > resultado2densidade)
        {
            printf("Carta 1 (%s) venceu em Densidade Populacional com %.2f habitantes por Km2!\n", nomedacidade, densidadepopulacional);
        }
        else if (resultado1densidade < resultado2densidade)
        {
            printf("Carta 2 (%s) venceu em Densidade Populacional com %.2f habitantes por Km2!\n", nomedacidade1, densidadepopulacional1);
        }
        else
        {
            printf(" Densidade Populacional : Empatou com %.2f habitantes por Km2!\n" , densidadepopulacional);
        }
        break;

    case 7:
        if (resultado1superpoder > resultado2superpoder)
        {
            printf("Carta 1 (%s) venceu em Superpoder com %.2f pontos!\n", nomedacidade, superpoder);
        }
        else if (resultado1superpoder < resultado2superpoder)
        {
            printf("Carta 2 (%s) venceu em Superpoder com %.2f pontos!\n", nomedacidade1, superpoder1);
        }
        else
        {
            printf(" Superpoder : Empatou com %.2f pontos!\n " , superpoder);
        }
        break;
    }
    // Finaliza o programa
    return 0;
}

