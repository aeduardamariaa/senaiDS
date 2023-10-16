/*Crie um programa que peça ao usuário para inserir elementos em um
array dinamicamente redimensionado usando realloc. O array deve
crescer à medida que o usuário insere mais elementos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tamanho, x = 0;
    
    int op = 1;


    printf("Informe o tamanho inicial do vetor: ");
    scanf("%i", &tamanho);

    int * vetor = (int *) malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%i", &vetor[i]);
        x = x + 1;
    }
    
    do
    {
        printf("\nDeseja aumentar seu vetor? 0/1");
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            printf("\nInforme o tamanho: ");
            scanf("%i", &tamanho);

            vetor = (int *) realloc(vetor, tamanho * sizeof(int));

                for (int i = x; i < tamanho; i++)
                {
                    scanf("%i", &vetor[i]);
                }
            break;
        default:
                for (int i = 0; i < tamanho; i++)
                {
                    printf("[ %i ]", vetor[i]);
                }
            break;
        }
    } while (op==1);

    free(vetor);

    return 0;
}