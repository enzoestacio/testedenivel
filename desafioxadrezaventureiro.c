#include <stdio.h>
int main(){
// Nomeando variaveis e iniciando a posição atual com 0 (0/8) de acordo com o lugar de um tabuleiro de xadrez
    char torre;
    char bispo;
    char rainha;
    int cima = 0, baixo = 0, esquerda = 0, direita = 0;
    int movimentocompleto = 1;

    printf("***SEJA MUITO BEM VINDO AO SIMULADOR DE XADREZ***\n");
    printf("Iniciando jogo:\n\n");

    while (cima <= 4){
        printf ("Torre está no bloco %d da posição cima, movendo torre uma casa para frente.\n", cima);
    cima++;
        printf("\nAgora, torre está na casa %d\n\n", cima);
    }

    for (direita, cima = 0; direita, cima <= 4; direita++,cima++){
        printf("O bispo está no bloco %d da posção direita e %d da posição direita.\n", direita, cima);
        printf("Movendo o %c para uma casa para frente e para a direita!\n", bispo);
    }
    printf("Agora o bispo está na posição direita %d e cima %d\n", direita, cima);




    do{
        printf("\n A rainha está na posição esquerda %d\n", esquerda);
        printf("Movendo a um bloco para esquerda...\n" );

        esquerda++;
    
        printf("a peça rainha está agora na posição esquerda : %d\n",  esquerda);

    } while (esquerda <= 4);


    while (movimentocompleto--)
    { printf("\n\nMovimento Cavalo\n");
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n"); //Imprime "Baixo" duas vezes.
        }

    printf("Direita\n"); // Imprime "Direita" uma vez
    }

    return 0;
    
} // este codigo está errado!!!!!!!!!!!!
    
