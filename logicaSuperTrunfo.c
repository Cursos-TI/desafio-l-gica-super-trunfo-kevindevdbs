#include <stdio.h> // Biblioteca padrão para entrada e saída

int main() {

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

    // Comparações entre os atributos das duas cartas
    // População
    if (populacao > populacao1) {
        printf("População: Carta 1 (%s) venceu com %d habitantes\n\n", nomedacidade, populacao);
    } else {
        printf("População: Carta 2 (%s) venceu com %d habitantes\n\n", nomedacidade1, populacao1);
    }

    // Área
    if (areaemkm > areaemkm1) {
        printf("Área: Carta 1 (%s) venceu com %.2f km²\n\n", nomedacidade, areaemkm);
    } else {
        printf("Área: Carta 2 (%s) venceu com %.2f km²\n\n", nomedacidade1, areaemkm1);
    }

    // PIB
    if (pib > pib1) {
        printf("PIB: Carta 1 (%s) venceu com %.2f Bilhões de Reais\n\n", nomedacidade, pib);
    } else {
        printf("PIB: Carta 2 (%s) venceu com %.2f Bilhões de Reais\n\n", nomedacidade1, pib1);
    }

    // Pontos Turísticos
    if (pontosturisticos > pontosturisticos1) {
        printf("Pontos Turísticos: Carta 1 (%s) venceu com %d pontos\n\n", nomedacidade, pontosturisticos);
    } else {
        printf("Pontos Turísticos: Carta 2 (%s) venceu com %d pontos\n\n", nomedacidade1, pontosturisticos1);
    }

    // PIB Per Capita
    if (pibpercapita > pibpercapita1) {
        printf("PIB Per Capita: Carta 1 (%s) venceu com %.2f reais\n\n", nomedacidade, pibpercapita);
    } else {
        printf("PIB Per Capita: Carta 2 (%s) venceu com %.2f reais\n\n", nomedacidade1, pibpercapita1);
    }

    // Densidade Populacional (quanto menor, melhor nesse contexto)
    if (densidadepopulacional < densidadepopulacional1) {
        printf("Densidade Populacional: Carta 1 (%s) venceu com %.2f hab/km²\n\n", nomedacidade, densidadepopulacional);
    } else {
        printf("Densidade Populacional: Carta 2 (%s) venceu com %.2f hab/km²\n\n", nomedacidade1, densidadepopulacional1);
    }

    // Superpoder
    if (superpoder > superpoder1) {
        printf("Superpoder: Carta 1 (%s) venceu com %.2f\n\n", nomedacidade, superpoder);
    } else {
        printf("Superpoder: Carta 2 (%s) venceu com %.2f\n\n", nomedacidade1, superpoder1);
    }

    // Finaliza o programa
    return 0;
}
