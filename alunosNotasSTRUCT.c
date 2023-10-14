/*3.Crie uma estrutura representando os alunos de um determinado curso. A
estrutura deve conter a matrícula do aluno, nome, nota da primeira prova,
nota da segunda prova e nota da terceira prova.

(a) Permita ao usuario entrar com os dados de 5 alunos.

(b) Encontre o aluno com maior nota da primeira prova.

(c) Encontre o aluno com maior media geral.

(d) Encontre o aluno com menor media geral

(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o
valor 6 para aprovac¸ao.*/

#include <stdio.h>
#include <stdlib.h>
#define QTDE 2

typedef struct {
    char nome[50];
    char matricula[10];
    float p1, p2, p3;
} Aluno;

void preencherInfo(Aluno *alunos) {
    int i;

    for (i = 0; i < QTDE; i++) {
        printf("\nInforme o nome: ");
        scanf(" %s", alunos[i].nome);
        printf("\nInforme a matricula: ");
        scanf(" %s", alunos[i].matricula);
        printf("\nInforme a P1: ");
        scanf("%f", &alunos[i].p1);
        printf("\nInforme a P2: ");
        scanf("%f", &alunos[i].p2);
        printf("\nInforme a P3: ");
        scanf("%f", &alunos[i].p3);
    }
    system("cls");
}

void imprimirNotas(Aluno *alunos, char * aprovacao) {
    int i;

    for (i = 0; i < QTDE; i++) {
        printf("\nNOME: %s \t\tP1: %.1f \t\tP2: %.1f \t\tP3: %.1f \t\t SITUAÇÃO: %c", alunos[i].nome, alunos[i].p1, alunos[i].p2, alunos[i].p3, aprovacao[i]);
    }
}

int encontraMaior(Aluno *alunos) {
    int i;
    int maior = 0;

    for (i = 0; i < QTDE; i++) {
        if (alunos[i].p1 >= alunos[maior].p1) {
            maior = i;
        }
    }
    return maior;
}

void calculaMediaAluno(float *medias, Aluno *alunos) {
    int i;

    for (i = 0; i < QTDE; i++) {
        medias[i] = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3;
    }
}

int menorMediaGeral(float * medias)
{
	int i;
	int menor = 0;
	
	for (i = 0; i < QTDE; i++) 
	{
        if (medias[i] <= medias[menor]) 
		{
            menor = i;
        }
    }
    return menor;
}

int maiorMediaGeral(float *medias) {
    int i;
    int maior = 0;

    for (i = 0; i < QTDE; i++) {
        if (medias[i] >= medias[maior]) {
            maior = i;
        }
    }
    return maior;
}

void testaAprovacao(float * medias, char * aprovacao)
{
	int i;
	
	for (i = 0; i < QTDE; i++) 
	{
		aprovacao[i] = (medias[i] >= 6) ? 'A' :'R';
	}
}

int main(void) {
    Aluno alunos[QTDE];
    float medias[QTDE];
    int maiorP1, maior_media_aluno, menor_media;
    char aprovacao[QTDE];

    preencherInfo(alunos);
    calculaMediaAluno(medias, alunos);
    testaAprovacao(medias, aprovacao);
    imprimirNotas(alunos, aprovacao);

    maiorP1 = encontraMaior(alunos);
    printf("\nA maior nota da primeira prova eh do aluno %s que foi: %.2f", alunos[maiorP1].nome, alunos[maiorP1].p1);

    calculaMediaAluno(medias, alunos);

    maior_media_aluno = maiorMediaGeral(medias);
	printf("\nA maior media geral eh da %s que foi: %.2f", alunos[maior_media_aluno].nome, medias[maior_media_aluno]);

    menor_media = menorMediaGeral(medias);
	printf("\nA menor media geral eh da %s que foi: %.2f", alunos[menor_media].nome, medias[menor_media]);
	
	
    return 0;
}
