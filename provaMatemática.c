#include <stdio.h>
#include <stdlib.h>

/*1.Faça uma prova de matemática para crianças que estão aprendendo a
somar números inteiros menores do que 100. Escolha números aleatórios
entre 1 e 100 e mostre na tela a pergunta: "Qual é a soma de a + b?", onde a
e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao
aluno e mostre para ele as perguntas e as respostas corretas, além de
quantas vezes o aluno acertou dentro de um arquivo .txt*/

int main(){

    FILE * arquivo;

    int a, b, resposta, pontos = 0;

    srand(time(NULL));

    arquivo = fopen("resultado.txt", "w");

    for (int i=0;i<=4;i++){

        a = rand() % 100;
        b = rand() % 100;

        printf("Qual a soma de %d e %d? ", a, b);
        scanf("%d", &resposta);

        if (resposta == (a+b)){
            printf("Você acertou!\n");
            pontos = pontos + 1;
        }else{
            printf("Você errou!\n");
        }
    }

    fprintf(arquivo, "Sua pontuação foi: %i",pontos);
    printf("\n\nSua pontuação é: %d", pontos);

    fclose(arquivo);

}
