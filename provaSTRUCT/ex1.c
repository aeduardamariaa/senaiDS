/*Um estacionamento está atrás de um sistema para fazer facilitar o dia-a-dia. Esse sistema deverá manter as informações de seus clientes.
O estacionamento trabalha somente com mensalistas e diaristas.

Crie uma estrutura para veículo e cliente. Lembrando que um cliente possui um veículo.
Exiba o preço do estacionamento baseado no tipo de veículo do cliente

Tabela de preços:

Diaria pequeno - R$40,00
Diaria medio - R$50,00
Diaria grande - R$100,00
Mensal pequeno - R$400,00
Mensal medio - R$800,00
Mensal Grande - R$1200,00

O máximo de vagas é 80. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char tipoVeiculo;
}Veiculo;

typedef struct
{
    char nome[10];
    Veiculo veiculo;
    char tipo;
}Cliente;

int main(void)
{
    int qtde;

    Cliente cliente;

    printf("\n*****************Informações de cadastro*****************\n");

    printf("Informe o nome do cliente: ");
    scanf(" %[^\n]", cliente.nome);
    printf("Informe o tipo: [m - mensalista/ d - diarista]");
    scanf(" %c", &cliente.tipo);
    printf("Informe o tipo do véiculo: {p/m/g} ");
    scanf(" %c", &cliente.veiculo.tipoVeiculo);

    if (cliente.tipo == 'm')
    {
        switch (cliente.veiculo.tipoVeiculo)
        {
        case 'p':
            printf("\nValor mensal: R$400,00");
            break;
        case 'm':
            printf("\nValor mensal: R$800,00");
            break;
        case 'g':
            printf("\nValor mensal: R$1200,00");
            break;
        default:
            break;
        }
    }else if(cliente.tipo == 'd')
    {

        switch (cliente.veiculo.tipoVeiculo)
        {
        case 'p':
            printf("\nValor diario: R$40,00");
            break;
        case 'm':
            printf("\nValor diario: R$50,00");
            break;
        case 'g':
            printf("\nValor diario: R$100,00");
            break;
        default:
        printf("Não encontrado classificação");
            break;
        }

    }else{
        printf("Não encontradoooooooooooooooo");
    }

    return 0;
}