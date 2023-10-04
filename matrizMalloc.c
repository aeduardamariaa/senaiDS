#include <stdio.h>
#define COLUNAS 3
#define LINHAS 2
int main(){

    int **matriz;

    printf("Insira valores pra matriz 3x2:\n");

    matriz = (int ** ) malloc(LINHAS * sizeof(int * ));

    for(int i = 0; i < LINHAS; i++){
        matriz[i] = (int * ) malloc(COLUNAS * sizeof(int));

        for(int j = 0; j < COLUNAS; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < LINHAS; i++)
    {
        printf("\n");
       for (int j = 0; j < COLUNAS; j++)
       {
        printf(" %d |", matriz[i][j]);
       }
       
    }
    

    for(int i = 0; i < COLUNAS; i++){
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}