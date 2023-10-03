/*2 - Faça um programa que contenha um array de 10 posições. O usuário poderá selecionar duas posições para 
fazer algum dos cálculos básicos (soma, subtração, divisão, multiplicação) .*/

#include <stdio.h>
#include <stdlib.h>

void preencheArray(int array[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Informe um valor para inserir no array: ");
        scanf("%i", &array[i]);
    }
}

void imprimeArray(int array[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("[ %d ]", array[i]);
    }
}

void menu()
{
    printf("\n\n******************* M E N U *******************\n");
    printf("\n1 - SOMA");
    printf("\n2 - SUBTRAÇÃO");
    printf("\n3 - DIVISÃO");
    printf("\n4 - MULTIPLICAÇÃO");
}

int soma(int array[10], int p1, int p2)
{
    return array[p1] + array[p2];
}

int subtracao(int array[10], int p1, int p2)
{
    return array[p1] - array[p2];
}

int multiplicacao(int array[10], int p1, int p2)
{
    return array[p1] * array[p2];
}

int divisao(int array[10], int p1, int p2)
{
    return array[p1] / array[p2];
}

int main(void)
{
    int vetor[10], op=0;
    int p1=0, p2=0;

    preencheArray(vetor);
    imprimeArray(vetor);

    menu();

    printf("\nQual o operação deseja realizar? ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Informe duas posições: ");
        scanf("%i %i", &p1, &p2);

        printf("%i", soma(vetor, p1, p2));

        break;
    case 2:
        printf("Informe duas posições: ");
        scanf("%i %i", &p1, &p2);

        printf("%i", subtracao(vetor, p1, p2));

        break;
    case 3:
        printf("Informe duas posições: ");
        scanf("%i %i", &p1, &p2);

        printf("%i", divisao(vetor, p1, p2));

        break;
    case 4:
        printf("Informe duas posições: ");
        scanf("%i %i", &p1, &p2);

        printf("%i", multiplicacao(vetor, p1, p2));
        break;
    default:
        break;
    }
}