/*Faça um programa que aloque memória o suficiente para ler uma sequência de valores. Caso chegue no limite 
e o usuário decidir continuar a inserção, aloque novamente memória para a inserção de novos valores um a um.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void preencheVetor(int * vetor, int qtde, int  * cont)
// {
//     for (int i = 0; i < qtde; i++)
//     {
//         printf("\nInforme o %i valor: ", i+1);
//         scanf("%i", &vetor[i]);

//         (*cont)++;
//     }
// }
void imprimeVetor(int vetor[], int cont)
{
    printf("\n\n");
    for (int i = 0; i < cont; i++)
    {
        printf("[ %i ]", vetor[i]);
    }
    
}

int main(void)
{
    int qtde, cont = 0;
    char op;

    printf("\nInforme o tamanho do vetor: ");
    scanf("%i", &qtde); 

    int * vetor = (int *)malloc(qtde * sizeof(int));

    // preencheVetor(vetor, qtde, cont);

    for (int i = cont; i < qtde; i++)
    {
        printf("\nInforme o %i valor: ", i+1);
        scanf("%i", &vetor[i]);

        (cont)++;
    }
    imprimeVetor(vetor, cont);

    while (1)
    {
    printf("\nDeseja aumentar seu vetor? [s/n]");
    scanf(" %c", &op);

        switch (op)
        {
        case 's':
            printf("\nInforme o tamanho do vetor: ");
            scanf("%i", &qtde); 

            vetor = (int *)realloc(vetor, qtde * sizeof(int));

            for (int i = cont; i < qtde; i++)
            {
            printf("\nInforme o %i valor: ", i+1);
            scanf("%i", &vetor[i]);

            (cont)++;
            }
            imprimeVetor(vetor, cont);
            break;
        
        default:
            printf("Saindo");
            return 0;
            break;
        }
    }
    free(vetor);
    return 0;
}