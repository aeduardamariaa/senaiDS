/*Crie uma função que receba um ponteiro de um array e exiba todas os
valores armazenados nas posições.*/

#include <stdio.h> 

void imprimeVetor(int * arr);

int main(void)
{
    int vetor[] = {52, 69, 85, 89, 32};
    int *arr = vetor;

    imprimeVetor(arr);
}

void imprimeVetor(int * arr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", *(arr+i));
    }
}