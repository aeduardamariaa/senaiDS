/*2- Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posiçao das matrizes lidas.  */

#include <stdio.h>
#define LINHA 4
#define COLUNA 4

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
	printf("\nMatriz preenchida: \n\n");
	
    for (int i = 0; i < LINHA; i++)
    {
        printf("\n");

        for (int j = 0; j < COLUNA; j++)
        {
            printf(" %d ", mat[i][j]);
        }
        
    }
}

void matrizMaior(int mat1[LINHA][COLUNA], int mat2[LINHA][COLUNA], int mat_maior[LINHA][COLUNA]){
	
	for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
        	if(mat1[i][j] > mat2[i][j])
            	{
            		mat_maior[i][j] = mat1[i][j];
		}
		else if(mat2[i][j] > mat1[i][j])
		{
			mat_maior[i][j] = mat2[i][j];
		}
		else
		{
			mat_maior[i][j] = mat1[i][j];
		}
        }
    }
}

int main(void)
{
	int mat1[LINHA][COLUNA], mat2[LINHA][COLUNA], mat_maior[LINHA][COLUNA];
	
	printf("\nPreencha a tabela 1\n");
	preencheMatriz(mat1);
	imprimeMatriz(mat1);
	
	
	printf("\nPreenche a tabela 2\n");
	preencheMatriz(mat2);
	imprimeMatriz(mat2);
	
	matrizMaior(mat1, mat2, mat_maior);
	printf("\nMatriz com os maiores números: \n");
	imprimeMatriz(mat_maior);
	
}
