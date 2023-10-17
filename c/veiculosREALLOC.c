/*1 - Aloque memória dinamicamente para ler um novo tipo de dados criado por você. Você deverá ler 
veículos(Modelo, Fabricante ,Cor, Ano, Valor). Quem decide a quantidade de veículos a serem lidos é 
o usuário do programa. Insira em um arquivo de texto os veículos e mostre dentro do programa a lista inserida.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char modelo[50];
    char fabricante[50];
    char cor[50];
    int ano;
    float valor;
}Veiculo;

void menu()
{
    printf("\n\n******** M E N U ********\n\n");
    printf("\n1 - Cadastrar veiculos");
    printf("\n2 - Imprime veiculos");
    printf("\n3 - Adicionar número de veiculos");
    printf("\n0 - SAIR\n\n");
}

void cadastraVeiculo(Veiculo * veiculos, int quantidade_carros, int * x)
{
    for (int i = *x; i < quantidade_carros; i++)
    {
        printf("\n Informe o modelo do carro:");
        scanf(" %[^\n]", veiculos[i].modelo);
        printf("\n Informe o fabricante do carro:");
        scanf(" %[^\n]", veiculos[i].fabricante);
        printf("\n Informe a cor do carro:");
        scanf(" %[^\n]", veiculos[i].cor);
        printf("\n Informe o ano do carro:");
        scanf(" %i", &veiculos[i].ano);
        printf("\n Informe o valor do carro:");
        scanf(" %f", &veiculos[i].valor);

        *x = *x + 1;
    }
}

void imprimeVeiculo(Veiculo * veiculos, int quantidade_carros)
{
    for (int i = 0; i < quantidade_carros; i++)
    {
        printf("\nMODELO: %s\tFABRICANTE: %s\tCOR: %s\tANO: %i\tVALOR: %.2f", veiculos[i].modelo, veiculos[i].fabricante, veiculos[i].cor,veiculos[i].ano, veiculos[i].valor);
    }
}

void escreveArquivo(Veiculo * veiculos, int quantidade_carros, int * x)
{
    FILE * arquivo;
    arquivo = fopen("Agenda.txt", "a+");
    for (int i = x; i < quantidade_carros; i++)
    {
        fprintf(arquivo, "%s\t%s\t%s\t%i\t%f", veiculos[i].modelo, veiculos[i].fabricante, veiculos[i].cor,veiculos[i].ano, veiculos[i].valor);
    }
    fclose(arquivo);
}

int main(void)
{
    int quantidade_carros, op=5, x=0; 

    printf("\nQuantos carros deseja cadastrar: ");
    scanf("%i", &quantidade_carros);

    Veiculo * veiculos = (Veiculo*)malloc(quantidade_carros * sizeof(Veiculo));

    do
    {
        menu();
        printf("Qual operação deseja: ");
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            cadastraVeiculo(veiculos, quantidade_carros, &x);
            escreveArquivo(veiculos, quantidade_carros, &x);
            break;
        case 2:
            imprimeVeiculo(veiculos, quantidade_carros);
            break;
        case 3:
            printf("Quantos veiculos deseja: ");
            scanf("%i", &quantidade_carros);

            veiculos = (Veiculo*)realloc(veiculos, quantidade_carros * sizeof(Veiculo));
            break;
        default:
        printf("TCHAU");
            break;
        }

    } while (op != 0);
    
    
    return 0;
}