/*1. Uma empresa de peças mecânicas chamada  hcsob procura um sistema que faça o cálculo dos valores recebidos durante o mês. 
Esse sistema deve funcionar enquanto o valor não atingir a meta de R$250.000,00. ao Atingir a meta, será exibida a mensagem de 
meta atingida dentro do programa. E caso esse valor exceda a meta, deverá ser feita uma divisão entre funcionários da empresa.  
Vale ressaltar que deveremos receber a quantidade de funcionários dentro do sistema.*/

#include <stdio.h>

double somaValores(double valor, double total_recebidos)
{
    total_recebidos += valor;
    return total_recebidos;
}

int verificaMeta(double total_recebidos, float qtde_funcionario)
{
    if (total_recebidos == 250000)
    {
        printf("Meta atingida dentro do programa!");
        return 1;
    }
    else if (total_recebidos > 250000)
    {
        printf("Como a meta foi passada, cada funcionário receberá: %f", ((total_recebidos - 250000)/qtde_funcionario));
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    float qtde_funcionario;
    double total_recebidos = 0, valor = 0 , total = 0;

    printf("Informe a quantidade de funcionários: ");
    scanf("%f", &qtde_funcionario);

    while (1)
    {
        printf("Qual valor deseja somar: ");
        scanf("%d", &valor);

        total += somaValores(valor, total_recebidos);
        printf("%d", total);

        if (verificaMeta(total, qtde_funcionario) == 1)
        {
            break;
        }
    }
    return 0;
}
