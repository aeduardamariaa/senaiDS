/*Faça a leitura de todos os valores em posições de duas matrizes 4x4. 
Calcule a multiplicação do valor absoluto das duas e exiba o resultado.
*/

#include<stdio.h>
#include<stdlib.h>
#define LINHA 4
#define COLUNA 4

// void preencheMatriz(int matriz[LINHA][COLUNA])
// {
//     for (int i = 0; i < LINHA; i++)
//     {
//         for (int j = 0; j < COLUNA; j++)
//         {
//             scanf("%i", &matriz[i][j]);
//         }
//     }
// }

int absoluto(int matriz[LINHA][COLUNA])
{
    int absoluto = 0;

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            absoluto = absoluto + matriz[i][j];
        }
    }

    return absoluto;
}

void imprimeMatriz(int matriz[LINHA][COLUNA])
{
    for (int i = 0; i < LINHA; i++)
    {
        printf("\n");

        for (int j = 0; j < COLUNA; j++)
        {
            printf("[ %d ]", matriz[i][j]);
        }
    }
}

int main()
{
    int mat1[LINHA][COLUNA] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    int mat2[LINHA][COLUNA] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};    

    // printf("\nPreencha a matriz 1: \n");
    // preencheMatriz(mat1);

    // printf("\nPreencha a matriz 2: \n");
    // preencheMatriz(mat2);

    // system("cls");

    printf("MATRIZES PREENCHIDAS: \n\n");
    imprimeMatriz(mat1);
    printf("\n");
    imprimeMatriz(mat2);

    printf("\n\nA multiplicação dos valores absolutos das matrizes é: %d", (absoluto(mat1)*absoluto(mat2)));

    return 0;
}