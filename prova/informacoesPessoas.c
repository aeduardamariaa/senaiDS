/*Faça um programa que leia a quantidade de pessoas que o usuário deseja inserir para armazenar em um arquivo de texto essas informações.  usar struct e FILE. (2,0)*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[100];
    int idade;
}Pessoa;

void cadastrarPessoas(Pessoa * pessoa, int qtde)
{
    for (int i = 0; i < qtde; i++)
    {
        printf("Informe o nome da pessoa %i: \n", i+1);
        scanf(" %[^\n]", &pessoa[i].nome);
        printf("Informe a idade da pessoa %i: \n", i+1);
        scanf("%d", &pessoa[i].idade);
        system("cls");
    }
}

void escreveArquivo(Pessoa * pessoa, int qtde)
{
    FILE * arquivo;
    arquivo = fopen("pessoas.txt", "a+");

    for (int i = 0; i < qtde; i++)
    {
        fprintf(arquivo, "%s\t\t%i\n", pessoa[i].nome, pessoa[i].idade);
    }
    fclose(arquivo);
}

int main(void)
{
    int qtde;

    printf("Informe quantas pessoas deseja inserir: ");
    scanf("%d", &qtde);

    Pessoa * pessoa = (Pessoa *)malloc(qtde * sizeof(Pessoa));

    cadastrarPessoas(pessoa, qtde);
    escreveArquivo(pessoa, qtde);

    printf("Informações cadastradas! Abra o arquivo!");

    free(pessoa);
}
