/* O chefe da empresa onde você trabalha lhe deu uma atividade: desenvolver um
programa que faça a verificação de valores bancários e permita o saque ou o
depósito. O saque só pode ser feito se o valor total da conta for maior que 60
reais.*/

#include <stdio.h>



void menu(){
    printf("\n\n********************MENU********************\n\n");
    printf("1 - Consultar valor\n");
    printf("2 - Sacar\n");
    printf("3 - Depositar\n");
    printf("0 - SAIR\n");
}

int main(){
    float valor=0, saque, deposito;
    int op=-1;

    while (op != 0)
    {
        menu();
        printf("\nQual operação você deseja realizar? " );
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            printf("\nSeu saldo é de: %.2f", valor);
            break;
        case 2:
            printf("\nQual valor você deseja sacar? " );
            scanf("%f", &saque);

            if(valor > 60){
                if (valor > saque)
                {
                    valor = valor - saque;
                    printf("Saque feito!");
                }else{
                    printf("Saldo insuficiente!");
                }
            }else{
                printf("\nNão é possível realizar o saque, pois saldo menor que 60!\n");
            }
            break;
        case 3:
            printf("\nQual valor você deseja depositar? \n" );
            scanf("%f", &deposito);

            valor = valor + deposito;

            printf("\nDeposito feito! \n");
            break;
        case 0:
            printf("Encerrando...");
            break;

        default:
            printf("Opção na encontrada, digite novamente!");
        }
    }
}


