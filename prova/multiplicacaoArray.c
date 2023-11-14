/*Faça um programa que leia n valores e armazene esses valores em um array[n]. Depois, multiplique todos esses valores.(2,0)*/

#include <stdio.h>
#include <stdlib.h>

int multiplicarVetor(int vetor[], int tamanho){
    int mult = vetor[0];

    for (int i = 0; i < tamanho; i++)
    {
       mult = vetor[i] * mult;
    }
    return mult;
}
void preencherVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Informe o numero na posicao %i: ", i);
        scanf("%d", &vetor[i]);
    }
}

int main(void)
{
    int tamanho, mult;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor = (int *)malloc(tamanho * sizeof(int));

    preencherVetor(vetor, tamanho);

    mult = multiplicarVetor(vetor, tamanho);

    system("cls");

    printf("A multiplicação eh: %d", mult);

    free(vetor);
}