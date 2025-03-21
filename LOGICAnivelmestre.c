#include <stdio.h>
int main (){
    // \  ( " " ) Nominando Variáveis.
    unsigned long int pop, pop2;      // populacao
    int ptsturisticos, ptsturisticos2;

    char estado, estado2;
    char cidade[50], cidade2[50];
    char codcarta[4], codcarta2[4];
    char tema[10] = "Países";// Neste programa, é possível alterar o tema do jogo!

    float area, area2;
    float PIB, PIB2;
    float densidadep, densidadep2;
    float pibp, pibp2;
    float superpoder, superpoder2;

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
    scanf("%lu", &pop);

printf("Qual o PIB dessa cidade?\n");  
    scanf(" %f", &PIB);

printf("Para finalizar, quantos pontos turisticos tem nessa cidade?\n");
    scanf("%d", &ptsturisticos);

//Cálculo Densidade populacional

densidadep = pop / area;
pibp = PIB / pop;

// Calculando superpoder

superpoder = (float) pop + area + PIB + ptsturisticos + pibp + (1/densidadep);

//Imprimindo dados colhidos

printf("Sua Carta foi cadastrada com sucesso!\n");
printf("Carta 01:\n");
printf("Cidade: %s\n", cidade);
printf("Estado: %c\n", estado);
printf("Codigo da carta: %s\n", codcarta);
printf("Area: %f\n", area);
printf("População: %lu\n", pop);
printf("PIB: %f\n", PIB);
printf("Pontos Turísticos: %d\n", ptsturisticos);
printf("Densidade populacional: %.2f hab/km²\n", densidadep);
printf("PIB per capita: %.2f reais\n", pibp);
printf("Super Poder: %f \n", superpoder);
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
    scanf("%lu", &pop2);

printf("Qual o PIB dessa cidade?\n");  
    scanf(" %f", &PIB2);

printf("Para finalizar, quantos pontos turisticos tem nessa cidade?\n");
    scanf("%d", &ptsturisticos2);

// Calculando Densidade Populacional e PIB per capita

densidadep2 = pop2 / area2;
pibp2 = PIB2 / pop2;

// Calculando superpoder

superpoder2 = (float) pop2 + area2 + PIB2 + ptsturisticos2 + pibp2 + (1/densidadep2);

//Imprimindo resultados da carta2

printf("Sua carta foi cadastrada com sucesso!\n");
printf("Carta 02:\n");
printf("Cidade: %s\n", cidade2);
printf("Estado: %c\n", estado2);
printf("Codigo da carta: %s\n", codcarta2);
printf("Area: %f\n", area2);
printf("População: %lu\n", pop2);
printf("PIB: %f\n", PIB2);
printf("Pontos Turísticos: %d\n", ptsturisticos2);
printf("Densidade populacional: %.2f hab/km²\n", densidadep2);
printf("PIB per capita: %.2f reais\n", pibp2);
printf("Super Poder: %f \n", superpoder2);
printf("\n");

// Comparação entre as duas cartas

printf("Comparação de cartas: \n");
printf("Para cada comparação, se o resultado for 1, A carta 01 ganhou. Se o Resultado for 0, a Carta 02 ganhou! \n");
printf("Area: %f\n", (int)area >area2);
printf("População: %lu \n", pop>pop2);
printf("PIB: %f \n", (int)PIB > PIB2);
printf("Pontos Turísticos: %d \n", ptsturisticos>ptsturisticos2);
printf("PIB per capita: %f \n", (int)pibp>pibp2);
printf("Densidade populacional: %f \n", (int)densidadep<densidadep2);
printf("Super Poder: %f \n", (int)superpoder>superpoder2);

// 
int opcao;
int resultado1;

printf("\n\n\nAgora avaliado essas condições, peço que selecione uma das categorias abaixo para a comparação entre as cartas.\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
scanf("%d", &opcao);

switch (opcao){
case 1:
resultado1 = pop > pop2 ? 1 : 0;
printf("CARTA 1: %s\n", cidade);
    printf("População Carta 1: %lu\n", pop);
printf("CARTA 02: %s\n", cidade2);
    printf("População Carta 2: %lu\n", pop2);
    if(pop > pop2){ printf("Carta 1 ganhou em População\n");
    }
    else if(pop<pop2){ printf("Carta 2 ganhou em População\n");
    }
    else{ printf("As duas cidades empataram em relação a População!\n");
    }
break;
case 2:
resultado1 = area > area2 ? 1 : 0;
printf("CARTA 1: %s\n", cidade);
    printf("Área Carta 1: %f\n", area);
printf("CARTA 02: %s\n", cidade2);
    printf("Área Carta 2: %f\n", area2);
    if(area > area2){ 
        printf("A cidade 1 ganhou em Área!\n");
    } else if(area<area2){
        printf("A cidade 2 ganhou em Área\n");
    } else { printf("As duas cidades empataram em relação a Área!\n");
    }
break;
case 3:
resultado1 = PIB > PIB2 ? 1 : 0;
printf("CARTA 1: %s\n", cidade);
    printf("PIB Carta 1: %f\n", PIB);
printf("CARTA 02: %s\n", cidade2);
    printf("PIB Carta 2: %f\n", PIB2);
    if(PIB>PIB2){
        printf("A cidade 1 ganhou em PIB!\n");
    } else if(PIB<PIB2){
        printf("A cidade 2 ganhou em PIB!\n");
    } else{ 
        printf("As duas cidades empataram em relação ao PIB!");
    }
break;
case 4:
resultado1 = ptsturisticos > ptsturisticos2 ? 1 : 0;
printf("CARTA 1: %s\n", cidade);
    printf("Pontos Turísticos Carta 1: %d\n", ptsturisticos);
printf("CARTA 02: %s\n", cidade2);
    printf("Pontos Turísticos carta 2: %d\n", ptsturisticos2);
    if(ptsturisticos>ptsturisticos2){
        printf("A cidade 1 ganhou em número pontos turísticos!\n");
    } else if (ptsturisticos<ptsturisticos2){
        printf("A cidade 2 ganhou em número de pontos turísticos!\n");
    } else { 
        printf("As duas cidades empataram em relação ao número de pontos turísticos!\n");
    }
break;
case 5:
resultado1 = densidadep < densidadep2 ? 1 : 0;
printf("CARTA 1: %s\n", cidade);
    printf("Densidade Populacional Carta 1: %f\n", densidadep);
printf("CARTA 02: %s\n", cidade2);
    printf("Densidade Populacional Carta 2: %f\n", densidadep2);
    if(densidadep<densidadep2){
        printf("A cidade 1 ganhou em densidade demográfica!\n");
    } else if(densidadep>densidadep2){
        printf("A cidade 2 ganhou em densidade demográfica!\n");
    } else { 
        printf("As duas cidades empataram em relação ao número de pontos turísticos!\n");
    }
break;
default:
    printf("A opção escolhida não cumpre nenhuma das alternativas apresentadas.\n");
}


int opcao2;
int resultado2;

printf("Agora, vamos para uma segunda rodada para definir o jogador, belezinha?\n");
printf("Escolha um atributo diferente do anterior:  \n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
scanf("%d", &opcao2);

// Sistema de lógica para cada atributo escolhido

if(opcao2 == opcao){ //Para caso o jogador utilize o mesmo atributo do anterior.
    printf("Você não pode escolher o mesmo atributo duas vezes.\n");
} else { switch(opcao2)
{
case 1:
resultado2 = pop > pop2 ? 1 : 0;
printf("CARTA 1: %s\n", cidade);
    printf("População Carta 1: %lu\n", pop);
printf("CARTA 02: %s\n", cidade2);
    printf("População Carta 2: %lu\n", pop2);
    if(pop > pop2){ printf("Carta 1 ganhou em População\n");
    }
    else if(pop<pop2){ printf("Carta 2 ganhou em População\n");
    }
    else{ printf("As duas cidades empataram em relação a População!\n");
    }
break;
case 2:
resultado2 = area > area2 ? 1 : 0;
printf("CARTA 1: %s\n", cidade);
    printf("Área Carta 1: %f\n", area);
printf("CARTA 02: %s\n", cidade2);
    printf("Área Carta 2: %f\n", area2);
    if(area > area2){ 
        printf("A cidade 1 ganhou em Área!\n");
    } else if(area<area2){
        printf("A cidade 2 ganhou em Área\n");
    } else { printf("As duas cidades empataram em relação a Área!\n");
    }
break;
case 3:
resultado2 = PIB > PIB2 ? 1 : 0;
printf("CARTA 1: %s\n", cidade);
    printf("PIB Carta 1: %f\n", PIB);
printf("CARTA 02: %s\n", cidade2);
    printf("PIB Carta 2: %f\n", PIB2);
    if(PIB>PIB2){
        printf("A cidade 1 ganhou em PIB!\n");
    } else if(PIB<PIB2){
        printf("A cidade 2 ganhou em PIB!\n");
    } else{ 
        printf("As duas cidades empataram em relação ao PIB!");
    }
break;
case 4:
resultado2 = ptsturisticos > ptsturisticos2 ? 1 : 0;
printf("CARTA 1: %s\n", cidade);
    printf("Pontos Turísticos Carta 1: %d\n", ptsturisticos);
printf("CARTA 02: %s\n", cidade2);
    printf("Pontos Turísticos carta 2: %d\n", ptsturisticos2);
    if(ptsturisticos>ptsturisticos2){
        printf("A cidade 1 ganhou em número pontos turísticos!\n");
    } else if (ptsturisticos<ptsturisticos2){
        printf("A cidade 2 ganhou em número de pontos turísticos!\n");
    } else { 
        printf("As duas cidades empataram em relação ao número de pontos turísticos!\n");
    }
 break;
 case 5:
 resultado2 = densidadep < densidadep2 ? 1 : 0;
printf("CARTA 1: %s\n", cidade);
    printf("Densidade Populacional Carta 1: %f\n", densidadep);
printf("CARTA 02: %s\n", cidade2);
    printf("Densidade Populacional Carta 2: %f\n", densidadep2);
    if(densidadep<densidadep2){
        printf("A cidade 1 ganhou em densidade demográfica!\n");
    } else if(densidadep>densidadep2){
        printf("A cidade 2 ganhou em densidade demográfica!\n");
    } else { 
        printf("As duas cidades empataram em relação ao número de pontos turísticos!\n");
    }
break;
default:
    printf("A opção escolhida não cumpre nenhuma das alternativas apresentadas.\n");
}
}


printf("Dadas os resultados anteriores, concluimos que: \n");

if(resultado1 = 1 && resultado2 == 1)
{
    printf("A CARTA 1 GANHOU NOS DOIS ATRIBUTOS!\n");
} else if (resultado1 != resultado2){
printf("As duas cartas somaram o mesmo número de pontos, portanto, houve um EMPATE!\n");
} else {
    printf("A CARTA 2 GANHOU NOS DOIS ATRIBUTOS!\n");
}


return 0;
}
