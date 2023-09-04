#include <stdio.h>

/*2.Utilizando operadores lógicos, desenvolva um código para pegar os
valores individuais de cada bit de um número inteiro qualquer.*/

int main(){


    int a;
    int qtde;
    int guarda;
    int resultado;

    printf("Informe um número: ");
    scanf("%d", &a);
    printf("Informe o bit: ");
    scanf("%d", &qtde);

    guarda = (1 << (qtde-1));

    resultado = a & guarda;
    int resultado_final = resultado > 0;
    
    printf("%i", resultado_final);
    return 0;
}
