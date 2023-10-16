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

void adicionarContato(Contato * agenda)
{
    printf("\nInforme o nome do contato:");
    scanf("%s", agenda->nome);
    printf("\nInforme o numero do contato: ");
    scanf("%s", agenda->numero);// a setinha faz com que eu não tenha que usar (*agenda).nome
}

// void imprimirContato(Contato agenda, int x)
// {
//     printf("\n\nNome: %s \nTelefone: %s", agenda.nome, agenda.numero);
// }

void escreverArquivo(Contato agenda)
{   
    FILE * arquivo;
    arquivo = fopen("Agenda.txt", "a+");
    fprintf(arquivo,"%s\t\t %s\n", agenda.nome, agenda.numero);
    fclose(arquivo);
}

void menu()
{
    printf("\n\n\n*** M E N U ***\n\n");
    printf("0 - Imprime agenda\n");
    printf("1 - Adicionar contato\n");
    printf("2 - Buacar contatos\n");
    printf("3 - SAIR\n\n");
}

void buscaArquivo(Contato agenda)
{ 
    FILE * arquivo;
    arquivo = fopen("Agenda.txt", "a+");
    char find[50];
    int encontrado = 0;

    printf("\nQual nome deseja buscar: ");
    scanf("%s", find);

    while (fscanf(arquivo, "%s %s", agenda.nome, agenda.numero)!= EOF){
        if (strcmp(agenda.nome, find)==0)
        {
            printf("\nNome: %s, Telefone: %s\n", agenda.nome, agenda.numero);
            encontrado = 1;
        }
    }
    if (encontrado == 0)
    {
            printf("Contato não encontrado!\n");
    }
    fclose(arquivo);
}

void imprimeArquivo()
{ 
    FILE * arquivo;
    arquivo = fopen("Agenda.txt", "a+");
    char * linha = (char*) malloc(1000 * sizeof(char));

    //retorna todo o arquivo numa string
    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        printf("%s", linha);
    }
    free(linha);
    fclose(arquivo);
}

int main(void)
{
    Contato agenda;
    int op = 0;
    
    do{
        menu();
        printf("\nQual opção deseja: ");
        scanf("%i", &op);

        switch (op)
        {
        case 0:
            system("cls");
            imprimeArquivo();
            break;
        case 1:
            adicionarContato(&agenda);
            escreverArquivo(agenda);
            system("cls");
            break;

        case 2: 
            system("cls");
            buscaArquivo(agenda);
            break;
        default:
            printf("\nSAINDO!");
            break;
        }

    } while (op != 3);

    return 0;
}