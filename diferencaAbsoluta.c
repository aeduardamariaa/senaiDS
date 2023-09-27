/*Faça um programa que receba dois arrays e calcule a diferença absoluta
deles.*/

#include <stdio.h>

void somar(int * arr, int * soma)
{
    for (int i = 0; i < 3; i++)
    {
        *soma = *soma + *(arr + i);
    }

}

int main(void)
{
    int vetor1[] = {1, 2, 3}, vetor2[] = {4, 5, 6}, soma1 = 0, soma2 = 0;
    int * arr1 = vetor1;
    int * arr2 = vetor2;

    somar(arr1, &soma1);
    somar(arr2, &soma2);

    printf("Diferenca absoluta eh: %i", (soma1 - soma2));

    return 0;
}