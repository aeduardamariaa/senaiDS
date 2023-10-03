/*4-Fa�a um programa para corrigir uma prova com 10 quest�es de m�ltipla escolha (a, b, c, d), em uma turma com 3 alunos. 
Cada quest�o vale 1 ponto. Leia o gabarito, e para cada aluno leia sua matricula (n�mero inteiro) e suas respostas. Calcule 
e escreva: Para cada aluno, escreva sua matr�cula, suas respostas, e sua nota. O percentual de aprova��o, assumindo m�dia 7.0.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ALUNOS 3
#define QUESTOES 10

void imprime(char matriz[ALUNOS][QUESTOES])
{
    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < QUESTOES; j++)
        {
            printf("[ %c ]", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char matriz[ALUNOS][QUESTOES];
    char letra[] = {'a', 'b', 'c', 'd'};
    char gabarito[] = {'a', 'b', 'd', 'c', 'b', 'c', 'd', 'd', 'c', 'b'};

    srand(time(NULL)); // Inicializa o gerador de n�meros aleat�rios com o tempo atual

    // Gerar respostas aleat�rias para os alunos
    for (int i = 0; i < ALUNOS; i++)
    {
        for (int j = 0; j < QUESTOES; j++)
        {
            int sorteador = rand() % 4;
            matriz[i][j] = letra[sorteador];
        }
    }

    imprime(matriz);

    // Calcular notas dos alunos
    int notas[ALUNOS] = {0};

    for (int i = 0; i < ALUNOS; i++)
    {
        for (int j = 0; j < QUESTOES; j++)
        {
            if (matriz[i][j] == gabarito[j])
            {
                notas[i]++;
            }
        }
    }

    printf("\nNotas dos Alunos:\n");
    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Aluno %d: Nota %d\n", i + 1, notas[i]);
    }

    // Calcular o percentual de aprova��o
    int aprovados = 0;
    for (int i = 0; i < ALUNOS; i++)
    {
        if (notas[i] >= 7)
        {
            aprovados++;
        }
    }

    float percentualAprovacao = (float)aprovados / ALUNOS * 100;
    printf("Percentual de Aprova��o: %.2f%%\n", percentualAprovacao);

    return 0;
}
