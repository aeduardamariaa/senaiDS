/*Crie um programa que compare o valor absoluto de duas matrizes e imprima qual é a maior matriz. (2,0)*/

#include<stdio.h>

#define LINHA 4
#define COLUNA 4

int valorAbsoluto(int mat[][COLUNA])
{
    int abs = 0;

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            abs = abs + mat[i][j];
        }
    }
    return abs;
}

void imprimirMatriz(int mat[][COLUNA])
{
    for (int i = 0; i < LINHA; i++)
    {
        printf("\n");
        for (int j = 0; j < COLUNA; j++)
        {
            printf("[ %d ]", mat[i][j]);
        }
    }
}

int main(void)
{
    int mat1[LINHA][COLUNA] = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    int mat2[LINHA][COLUNA] = {{2, 2, 2, 2}, {2, 2, 2, 2}, {2, 2, 2, 2}, {2, 2, 2, 2}};
    int abs1 = 0, abs2 = 0;

    abs1 = valorAbsoluto(mat1);
    abs2 = valorAbsoluto(mat2);

    (abs1 > abs2) ? imprimirMatriz(mat1) : imprimirMatriz(mat2);

    return 0;
}