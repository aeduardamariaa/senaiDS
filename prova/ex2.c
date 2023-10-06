/*Crie uma matriz 5x5 de inteiros e insira valores em cada uma das posições. 
Você deverá localizar os valores pares e colocar em um outro array para fazer a exibição.*/

#include<stdio.h>
#include<stdlib.h>
#define LINHA 5
#define COLUNA 5

void preencheMatriz(int matriz[LINHA][COLUNA])
{
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
    }
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
    printf("\n\n");
}

void testaPares(int matriz[LINHA][COLUNA], int * pares)
{
    int x = 0;

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {   
                pares[x] = matriz[i][j];
                x = x+1;
            }
            
        }
    }

    printf("\n\nValores pares:\n ");
    for (int i = 0; i < x; i++)
    {
        printf("[ %d ]", pares[i]);
    }
    
}


int main()
{
    
    int matriz[LINHA][COLUNA];
    int *pares = (int *) malloc(25 * sizeof(int));

    printf("Preencha a matriz: ");
    preencheMatriz(matriz);

    system("cls");
    imprimeMatriz(matriz);

    testaPares(matriz, &pares);

    free(pares);
    
    return 0;
}
