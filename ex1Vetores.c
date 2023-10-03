/*1- Leia um array com 10 posições e identifique se existem valores iguais neste array. se existirem, envie para um outro array e o exiba na tela.*/

#include <stdio.h>

void preencheArray(int array[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Informe um valor para inserir no array: ");
        scanf("%i", &array[i]);
    }
}

void testaIgualdade(int array[10], int arrayIguais[10])
{   
    for (int i = 0; i < 10; i++)
    {
        int guarda = 0;
        for (int j = 0; j < 10; j++)
        {
            if (array[i] == array[j])
            {
                guarda = guarda + 1;
            }
            if (guarda >= 2)
            {
                arrayIguais[i] = array[i];
            }
        }
    }
}

void imprimeArray(int array[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("[ %d ]", array[i]);
    }
    
}

int main()
{
    int array[10];
    int arrayIguais[10] = {0};

    // array padrão
    preencheArray(array);
    imprimeArray(array);

    // testando valores iguais
    testaIgualdade(array, arrayIguais);

    // imprimindo array padrão
    printf("\n\nIguais:  ");
    imprimeArray(arrayIguais);
}