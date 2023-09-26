/*Identifique o maior valor dentro de uma sequência de valores armazenadas em um array.*/

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

int maiorValor(int * array)
{
    int maior = 0;

    for (int i = 0; i < 5; i++)
    {
        if(array[i] > maior)
        {
            maior = array[i];
        }
    }
    return maior;
}

int main(void)
{
    int array[5];

    preencheVetor(array);
    imprimeVetor(array);

    printf("\nO maior eh: %d", maiorValor(array));

}