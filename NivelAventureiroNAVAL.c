#include <stdio.h>

// Definindo as dimensões mais tarde usadas como valor fixo.
#define LINHAS 10
#define COLUNAS 10

int main (){

    int tabuleiro [LINHAS] [COLUNAS]; 
    
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Registrando a margem de colunas do tabuleiro

    int navio[3] = {3,3,3};
     
    // Registrando as margens do tabuleiro

    for ( int i = 0 ; i < LINHAS ; i++) // LOOP EXTERNO
{
        for (int j = 0 ; j < COLUNAS ; j++) //loop interno
        {   
        tabuleiro[i][j] = 0; // Inicializando (mas ainda não imprimindo) tabuleiro com água.
        
        }
    printf("\n"); // Pulando linha no loop externo após a execução de todo o loop interno.
};

// Registrando coordenadas de inicio e tamanho dos navios!

    int navio_horizontal_linha = 4;   // Linha onde o navio horizontal começa
    int navio_horizontal_coluna = 0;  // Coluna onde o navio horizontal começa

    int navio_vertical_linha = 5;     // Linha onde o navio vertical começa
    int navio_vertical_coluna = 0;   // Coluna onde o navio vertical começa

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

// Registrando NAVIO DIAGONAL 1

int navio_diagonal_linha = 0;
int navio_diagonal_coluna = 0;

for ( int i = 0; i <= 3; i++ ) // quando i for 3(tamanho do navio), o codigo para!
{
    for ( int j = 0 ; j <  navio_diagonal_coluna + tamanho_navio ; j++ ) // j é incrementado para pular coluna
    {
        if ( LINHAS == COLUNAS)
        {
            tabuleiro[navio_diagonal_linha++][j] = 3; //linha diagonal do navio é incrementada para pular linha
            i++; //Comando utilizado para o for primário parar assim que o código se repetir 3 vezes.
        }
    }
}


// Registrando NAVIO DIAGONAL 2

int navio_diagonal2_linha = 8;
int navio_diagonal2_coluna = 8;

    for ( int i = 0; i <= 3; i++) // quando i for 3(tamanho do navio), o loop para!
    {
        for(int j = 0; j < navio_diagonal2_coluna + tamanho_navio; j++) // j é incrementado para pular coluna
        {
            if ( LINHAS + COLUNAS == 9)
            {       
                tabuleiro[navio_diagonal2_linha++][j] = 3; //linha diagonal do navio é incrementada para pular linha
                i++; // comando utilizado para o for primário terminar quando o código se repetir 3 vezes.
            }

        }
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
