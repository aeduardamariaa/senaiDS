#include<stdio.h>

int main()
{
    char matriz[5][10];
    char letra[] = {'a', 'b', 'c','d'};
    int sorteador=0;

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
        sorteador = rand() % 4;
           matriz[i][j] = letra[sorteador];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        for (int j = 0; j < 10; j++)
        {
            printf(" %c ", matriz[i][j]);
        }
    }
}