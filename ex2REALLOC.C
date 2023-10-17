/*2.Construa uma estrutura aluno com nome, numero de matrícula e curso.
Leia do usuário a informação de 5 alunos, armazene em vetor dessa
estrutura e imprima os dados na tela.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[1000];
    char matricula[10];
    char curso[50];
}Aluno;

void cadastrarAlunos(Aluno * alunos, int quantidade_alunos)
{
    for (int i = 0; i < quantidade_alunos; i++)
    {
        printf("\nInforme o nome do aluno: ");
        scanf(" %s", &alunos->nome[i]);
        printf("\nInforme a matricula: ");
        scanf(" %s", &alunos->matricula[i]);
        printf("\nInforme o curso: ");
        scanf(" %s", &alunos->curso[i]);
    }
}

int main(void)
{
    int quantidade_alunos;

    printf("\nInforme a quantidade de alunos: ");
    scanf("%d", &quantidade_alunos);

    Aluno * alunos = (Aluno*) malloc(quantidade_alunos * sizeof(Aluno));

    cadastrarAlunos(alunos, quantidade_alunos);

    return 0;
}