/*Escreva um programa que contenha uma função que receba dois
valores inteiros. Leia esses valores do teclado. Em seguida, compare
seus endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h>

void qualMaior(int  *a, int *b)
{
    if (&a > &b)
    {
        printf("O endereço %d é maior: %x", *a, &a);
    }
    else
    {
        printf("O endereço %d é maior: %x", *b, &b);
    }
}

int main(void)
{
    int a = 0, b = 0;

    printf("Informe o primeiro valor: ");
    scanf("%i", &a);
    printf("Informe o segundo valor: ");
    scanf("%i", &b);

    qualMaior(&a, &b);

    return 0;
}