#include <stdio.h>

/*2.Utilizando operadores l�gicos, desenvolva um c�digo para pegar os
valores individuais de cada bit de um n�mero inteiro qualquer.*/

int main(){


    int a;
    int qtde;
    int cont = 1;
    int guarda;
    int resultado;

    printf("Informe um n�mero: ");
    scanf("%d", &a);
    printf("Informe o bit: ");
    scanf("%d", &qtde);

    guarda = (1 << (qtde-1));


    resultado = a & guarda;
     int resultado_final = resultado > 0;


    printf("%i", resultado_final);
    return 0;
}
