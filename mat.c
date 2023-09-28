/*Crie um programa que armazene em uma tabela informações de alunos,
onde será inserido notas de disciplinas.*/

#include <stdio.h> 
#define LINHA 3
#define COLUNA 3

void preencheMatriz(int mat[LINHA][COLUNA]){

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Informe a media do aluno %i na materia %i: ", i, j);
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

int main(void)
{
    int matriz [LINHA][COLUNA];

    preencheMatriz(matriz);

    imprimeMatriz(matriz);

    return 0;
}