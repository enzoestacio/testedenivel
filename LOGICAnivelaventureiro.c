#include <stdio.h>
int main (){
    // \  ( " " ) Nominando Variáveis.
    int pop, pop2;      // populacao
    int ptsturisticos, ptsturisticos2;

    char estado, estado2;
    char cidade[50], cidade2[50];
    char codcarta[4], codcarta2[4];
    char tema[10] = "Países";// Neste programa, é possível alterar o tema do jogo!

    float area, area2;
    float PIB, PIB2;
    float densidadep, densidadep2;
    float pibp, pibp2;

//Iniciando impressão de mensagem incial

printf("Olá, seja bem vindo ao jogo SUPERTRUNFO de cartas!\n");
printf("Como você já deve conhecer, o SUPERTRUNFO é um jogo de cartas com um tema predefinido que é desenvolvido por meio da comparação entre duas cartas.\n");
printf("Hoje, nosso tema será: %s!\n", tema);
printf("Para começarmos, eu vou precisar que você cadastre duas cartas, então vou fazer algumas perguntas, ok?\n");

//Coletando dados do usuario abaixo:

printf("Primeiramente, escolha uma cidade e a digite abaixo: \n");
    scanf("%s", cidade);

printf("Boa escolha, qual a primeira letra do estado da cidade escolhida?\n");
    scanf(" %c", &estado);

printf("Ok, agora cadastre o codgigo da sua carta. O código é composto pela primeira letra do estado e um numero de 01 a 04 (EX: S02)\n");
    scanf("%s", codcarta);

printf("Estamos prosseguindo, qual a área em KM2 dessa cidade?\n");
    scanf("%f", &area);

printf("Uau, qual a população dessa cidade?\n");
    scanf("%d", &pop);

printf("Qual o PIB dessa cidade(Em Milhões)?\n");  
    scanf("%f", &PIB);

printf("Para finalizar, quantos pontos turisticos tem nessa cidade?\n");
    scanf("%d", &ptsturisticos);

//Cálculo Densidade populacional

densidadep = pop / area;
pibp = PIB / pop; 

//Imprimindo dados colhidos

printf("Sua Carta foi cadastrada com sucesso!\n");
printf("Carta 01:\n");
printf("Cidade: %s\n", cidade);
printf("Estado: %c\n", estado);
printf("Codigo da carta: %s\n", codcarta);
printf("Area: %f\n", area);
printf("População: %d\n", pop);
printf("PIB: %f\n", PIB);
printf("Pontos Turísticos: %d\n", ptsturisticos);
printf("Densidade populacional: %.2f hab/km²\n", densidadep);
printf("PIB per capita: %.2f reais\n", pibp);
//Introduzindo ao usuario a segunda carta

printf("Iniciaremos agora o cadastro de uma segunda carta, beleza? Vamos la!\n");

//Iniciando a coleta de dados

printf("Primeiramente, escolha uma cidade e a digite abaixo: \n");
scanf("%s", cidade2);

printf("Boa escolha, qual a primeira letra do estado da cidade escolhida?\n");
    scanf(" %c", &estado2);

printf("Ok, agora cadastre o codgigo da sua carta. O código é composto pela primeira letra do estado e um numero de 01 a 04 (EX: S02)\n");
    scanf("%s", codcarta2);

printf("Estamos prosseguindo, qual a área em KM2 dessa cidade?\n");
    scanf("%f", &area2);

printf("Uau, qual a população dessa cidade?\n");
    scanf("%d", &pop2);

printf("Qual o PIB dessa cidade(Em Milhões)?\n");  
    scanf("%f", &PIB2);

printf("Para finalizar, quantos pontos turisticos tem nessa cidade?\n");
    scanf("%d", &ptsturisticos2);

// Calculando Densidade Populacional e PIB per capita

densidadep2 = pop2 / area2;
pibp2 = PIB2 / pop2; 

//Imprimindo resultados da carta2

printf("Sua carta foi cadastrada com sucesso!\n");
printf("Carta 02:\n");
printf("Cidade: %s\n", cidade2);
printf("Estado: %c\n", estado2);
printf("Codigo da carta: %s\n", codcarta2);
printf("Area: %f\n", area2);
printf("População: %d\n", pop2);
printf("PIB: %f\n", PIB2);
printf("Pontos Turísticos: %d\n", ptsturisticos2);
printf("Densidade populacional: %.2f hab/km²\n", densidadep2);
printf("PIB per capita: %.2f reais\n", pibp2);








return 0;
}
