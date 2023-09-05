#include <stdio.h>

/*2. Fa�a um programa que disponibilize um menu para converter celsius para
fahrenheit ou fahrenheit para celsius. Exiba mensagens de aviso, por
exemplo: �Temperatura elevada�. Esse programa deve ser feito utilizando
apenas switch e tern�rio.*/

int main(){

    int op;
    float temp, convertido;

    printf("Selecione a op��o desejada:\n\n");
    printf("1 - Fahrenheit para Celsius\n");
    printf("2 - Celsius para Fahrenheit\n\n");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("\n\nQual a temperatura em Fahrenheit? \n");
            scanf("%f",&temp);
            convertido = (temp - 32)* 1.8;
            printf("A temperatura em Celsius �: %.2f �C", convertido);
            (convertido > 25)? printf("\nElevado") : printf("\nN�o elevado");
            break;
        case 2:
            printf("\n\nQual a temperatura em Celsius? \n");
            scanf("%f",&temp);
            convertido = (temp * 1.8) + 32;
            printf("\nA temperatura em Fahrenheit �: %.2f �F", convertido);
            (convertido > 77)? printf("\nElevado") : printf("\nN�o elevado");
            break;
        default:
            printf("\nOp��o inv�lida!");
    }
}
