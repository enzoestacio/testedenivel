#include <stdio.h>

// Definindo as dimensões mais tarde usadas como valor fixo.
#define LINHAS 10
#define COLUNAS 10

//CONE
void cone(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna, int altura)
{
    for ( int i = 0 ; i < altura; i++)
    {
        int linhaAtual = linha + i; // Avança para baixo.
        int inicio = coluna - i;
        int fim = coluna + i; 

        for ( int j = inicio ; j <= fim ; j++)
        {
            if ( linhaAtual >= 0 && linhaAtual < LINHAS && j >= 0 && j < COLUNAS )
            {
                tabuleiro[linhaAtual][j] = 3 ; // Marca cone!
            }
        }
    }
}
//CRUZ
void aplicarCruz(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna) 
{
    // Marca centro
    if (linha >= 0 && linha < LINHAS && coluna >= 0 && coluna < COLUNAS)
        tabuleiro[linha][coluna] = 3;

    // Linha horizontal da cruz
    for (int j = coluna - 2; j <= coluna + 2; j++) 
    {
        if (j >= 0 && j < COLUNAS)
            tabuleiro[linha][j] = 3;
    }

    // Coluna vertical da cruz
    for (int i = linha - 2; i <= linha + 2; i++) 
    {
        if (i >= 0 && i < LINHAS)
            tabuleiro[i][coluna] = 3;
    }
}
//OCTAEDRO
void aplicarOctaedro(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna, int alcance)
{
    for (int i = linha - alcance; i <= linha + alcance; i++)
    {
        for (int j = coluna - alcance; j <= coluna + alcance; j++)
        {
            if (i >= 0 && i < LINHAS && j >= 0 && j < COLUNAS)
            {
                int distancia = ((i >= linha) ? (i - linha) : (linha - i)) + ((j >= coluna) ? (j - coluna) : (coluna - j));

                if (distancia <= alcance)
                {
                    tabuleiro[i][j] = 3;
                }
            }
        }
    }
}

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

    int navio_horizontal_linha = 0;   // Linha onde o navio horizontal começa
    int navio_horizontal_coluna = 2;  // Coluna onde o navio horizontal começa

    int navio_vertical_linha = 1;     // Linha onde o navio vertical começa
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

int navio_diagonal2_linha = 7;
int navio_diagonal2_coluna = 7;

    for ( int i = 0; i < tamanho_navio ; i++) // quando i for 3(tamanho do navio), o loop para!
    {
        for(int j = navio_diagonal2_coluna ; j < navio_diagonal2_coluna + tamanho_navio; j++) // j é incrementado para pular coluna
        {
            if ( i + j == 9)
            {   
                    
                tabuleiro[i][j] = 3;

            }
        }
    }

    // Criando o Cone
    int origemLinha = 4;
    int origemColuna = 4;
    int alturaCone = 3;

    cone(tabuleiro, origemLinha, origemColuna, alturaCone);

    //Criando Cruz

    int origemlinha_cruz = 2;
    int origemcoluna_cruz = 5;

    aplicarCruz(tabuleiro, origemlinha_cruz, origemcoluna_cruz);

    //Criando Octaedro

    
    int origemlinha_octaedro = 8;
    int origemcoluna_octaedro = 8;
    int alcance_octaedro = 1;

    aplicarOctaedro(tabuleiro, origemlinha_octaedro, origemcoluna_octaedro, alcance_octaedro);

    
//Imprimindo inicio do jogo

printf("***BATALHA NAVAL EM C***\n\n");


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
