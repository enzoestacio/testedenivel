#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main (){

    int tabuleiro [10] [10];
    
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Registrando a margem de colunas do tabuleiro

    int navio[3] = {3,3,3};

    // Imprimindo as letras do superior do tabuleiro.
     
    // Registrando e imprimindo as margens do tabuleiro

    for ( int i = 0 ; i < LINHAS ; i++)
{
    for (int j = 0 ; j < COLUNAS ; j++)
    {
        tabuleiro[i][j] = 0; // Inicializando (mas ainda não imprimindo) tabuleiro com água.
        
    }
    printf("\n");
};

// Registrando coordenadas de inicio e tamanho dos navios!

    int navio_horizontal_linha = 2;   // Linha onde o navio horizontal começa
    int navio_horizontal_coluna = 3;  // Coluna onde o navio horizontal começa

    int navio_vertical_linha = 5;     // Linha onde o navio vertical começa
    int navio_vertical_coluna = 1;   // Coluna onde o navio vertical começa

    int tamanho_navio = 3;           // Tamanho dos navios

// Registrando e imprimindo o navio vertical

// Navio Horizontal

for ( int j = navio_horizontal_coluna; j < navio_horizontal_coluna + tamanho_navio; j++)
{
    tabuleiro[navio_horizontal_linha][j] = 3; // Adiciona o navio
}

// Navio Vertical

for ( int i = navio_vertical_linha; i < navio_vertical_linha + tamanho_navio; i++)
{
    tabuleiro[i][navio_vertical_coluna] = 3; // Adiciona o navio
}
    
// Imprime as letras das colunas
printf("  ");
for (int j = 0; j < COLUNAS; j++) {
    printf("%c ", letras[j]);
}
printf("\n");

    for (int i = 0; i < LINHAS; i++) 
    {
        printf("%d ", i + 1);  // Imprime o número da linha

            for (int j = 0; j < COLUNAS; j++) 
            {
                printf("%d ", tabuleiro[i][j]);
            }
            
        printf("\n");
    }

    return 0;
    }
