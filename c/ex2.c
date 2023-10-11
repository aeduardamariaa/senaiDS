/*1 - Faça um programa que simule uma agenda telefonica. Utilize struct para as informações de usuários e armazene dentro de um arquivo 
de texto, formatado. Permita ao usuário encontrar um determinado contato dentro do programa utilizando seu nome.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char nome[50];
    char numero[15];

}Contato;

void adicionarContato(Contato agenda[5], int * x)
{
    printf("\nInforme o nome do contato:");
    scanf("%s", agenda[*x].nome);
    printf("\nInforme o numero do contato: ");
    scanf("%s", agenda[*x].numero);

    *x = *x + 1;
}

void imprimirContato(Contato agenda[5], int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("\n\nNome: %s \nTelefone: %s", agenda[i].nome, agenda[i].numero);
    }

    
}

void escreverArquivo(Contato agenda[5], int x, FILE * arquivo)
{
    for (int i = 0; i < x; i++)
    {
        fprintf(arquivo,"\n%s\n%s\0", agenda[i].nome, agenda[i].numero);
    }
    
}

void menu()
{
    printf("\n\n\n*** M E N U ***\n\n");
    printf("1 - Adicionar contato\n");
    printf("2 - Imprimir contatos\n");
    printf("3 - SAIR\n\n");
}

void buscaArquivo(Contato agenda[5], FILE * arquivo )
{ 
    char * linha = (char*) malloc(1000 * sizeof(char));
    char * numero = (char*) malloc(1000 * sizeof(char));

    //retorna todo o arquivo numa string
    int stop = 1;
    while (stop)
    {
        fgets(linha, 1000, arquivo);
        if (fgets(numero, 1000, arquivo) == NULL) {
            stop = 0;
        }

        printf("Nome: %s\t\t Numero: %s\n", linha, numero);
    }

    free(linha);
    free(numero);
}

int main(void)
{
    Contato agenda[5];
    int contadorContatos = 0, op = 0;
    FILE * arquivo;

    arquivo = fopen("Agenda.txt", "a+");
    
    do{
        menu();
        printf("\nQual opção deseja: ");
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            adicionarContato(agenda, &contadorContatos);
            escreverArquivo(agenda, contadorContatos, arquivo);
            break;

        case 2: 
            buscaArquivo(agenda, arquivo);
            break;

        default:
            printf("\nSAINDO!");
            break;
        }

    } while (op != 3);
    
    fclose(arquivo);
    return 0;
}