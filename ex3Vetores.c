/*3- Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 5 alunos. Leia também um vetor 
de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. Seu programa deverá comparar as respostas de cada candidato 
com o gabarito e emitir um vetor denominado resultado, contendo a pontuação correspondente a cada aluno.*/

#include<stdio.h>

int main()
{
    char matriz[5][10];
    char letra[] = {'a', 'b', 'c','d'};
    char gabarito[] = {'a', 'b', 'd', 'c', 'b', 'c', 'd', 'd', 'c', 'b'};
    int sorteador=0, nota=0;
    int resultado[5];

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
            printf("[ %c ]", matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        nota = 0;
        for (int j = 0; j < 10; j++)
        {
            if (matriz[i][j] == gabarito[j])
            {
                nota++;
            }
        }
        resultado[i] = nota;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n\nA nota do alunos %d eh %d!\n", i, resultado[i]);
    }
    
    
}
