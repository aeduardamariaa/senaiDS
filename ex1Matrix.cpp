/*1- Receba valores em cada posição de uma matriz e identifique a posição e o valor que está o maior deles.*/

#include <stdio.h>
#define LINHA 2
#define COLUNA 2

void preencheMatriz(int mat[LINHA][COLUNA]){

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Informe valor para a linha %i e coluna %i: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void imprimeMatriz(int mat[LINHA][COLUNA])
{
    for (int i = 0; i < LINHA; i++)
    {
        printf("\n");

        for (int j = 0; j < COLUNA; j++)
        {
            printf(" %d ", mat[i][j]);
        }
        
    }
}
void testaMaior(int mat[LINHA][COLUNA], int * maior, int * linha, int * coluna)
{
	for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
           	if(mat[i][j] > *maior)
           	{
           		*maior = mat[i][j];
           		*linha = i;
           		*coluna = j;
			}
        }
        
    }
}

int main(void)
{	
	int matriz[LINHA][COLUNA];
	int maior = 0, linha_maior = 0, coluna_maior = 0;
	
	preencheMatriz(matriz);
	imprimeMatriz(matriz);
	testaMaior(matriz, &maior, &linha_maior, &coluna_maior);
	
	printf("\nO maior eh: %i \nLinha: %i \nColuna: %i", maior, linha_maior, coluna_maior);
}
