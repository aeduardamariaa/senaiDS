/*Implementar uma função que receba dois valores e utilize ponteiros para
trocar o valor das variáveis. Defina um valor inicial e exiba o valor inicial
e o valor após a alteração.*/

#include <stdio.h>


void trocarValores(int *valor1, int *valor2){
    int temp = *valor1;
    *valor1 = *valor2;
    *valor2 = temp;
}

int main(){
    int a, b;

    printf("Informe o primeiro valor: ");
    scanf("%i", &a);
    printf("Informe o segundo valor: ");
    scanf("%i", &b);

    trocarValores(&a, &b);

    printf("\nPrimeiro valor: %i", a);
    printf("\nSegundos valor: %i", b);
}