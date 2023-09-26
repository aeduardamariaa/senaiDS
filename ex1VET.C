/*FAÇA SOMA DE TODOS O VALORES DE UM ARRAY*/

#include <stdio.h> 

void preencheVetor(int * arr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("Informe o valor: ");
        scanf("%d", &arr[i]);

    }
}

void imprimeVetor(int * arr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int somaVetor(int * arr)
{
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        soma = arr[i] + soma;
    }
    return soma;
}

int main(void)
{
    int array[5];

    preencheVetor(array);
    imprimeVetor(array);
    printf("\nA soma do vetor eh: %d", somaVetor(array));

    return 0;
}