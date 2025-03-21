// codigo nivel mestre XADREZ em C
#include <stdio.h>

//Movimentação da torre
void movertorre(int casas) 
{
    if(casas > 0) 
    {
        printf("Torre foi para a Direita \n");
        movertorre(casas - 1); //A cada impressão se retira 1 casa até que chegue em 0, e pare o loop
    }
}

//Movimentação do bispo

void moverbispo(int casas) 
{
    if(casas > 0)
    {
        printf("Bispo foi para Cima, Direita \n"); 
        moverbispo(casas - 1); //A cada impressão se retira 1 casa até que chegue em 0, e pare o loop
    }

}

//Movimentação da rainha
void moverrainha(int casas)
{
    if(casas > 0)
    {
        printf("Rainha foi para a Esquerda \n");
        moverrainha(casas - 1); //A cada impressão se retira 1 casa até que chegue em 0, e pare o loop
    }
}

//Iniciando o código no main
int main() {


/* As variáveis abaixo foram utilizadas no código ANTES 
da criação da função VOID, portanto, nao utilizei mais algumas delas*/

    int torre = 0, bispo = 0, rainha = 0, cavalo = 0;
    int movimentocavalo = 1;


    printf("\n\n MOVIMENTACAO TORRE \n\n");

   movertorre(5); // Iniciando o void movertorre com o valor 5, subtraindo 1 até que chegue no zero e o loop pare
    
    printf("\n\n MOVIMENTACAO RAINHA \n\n");
    
    moverrainha(8); // Iniciando o void moverrainha com o valor 8, subtraindo 1 até que chegue no zero e o loop pare

    printf("\n\n MOVIMENTACAO BISPO \n\n");

    moverbispo(5); // Iniciando o void moverbispo com o valor 5, subtraindo 1 até que chegue no zero e o loop pare


// Movimentação do cavalo
    printf("\n\n MOVIMENTACAO CAVALO\n\n"); 

    while(movimentocavalo--) /* A variável movimento cavalo tem valor 1, entao decrementamos em 1
                                para que a mesma inicie a função em loop alinhado adiante */
    {
        for (cavalo = 0; cavalo < 2; cavalo++)
        {
            printf("Baixo \n");
        }
        printf("Esquerda \n");
    }
    
    printf("\n\n"); //Adicionando espaço ao fim do programa



return 0;
}
