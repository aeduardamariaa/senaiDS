/*Faça uma função que inverta uma string.*/

#include <stdio.h>

int main(void)
{
    int vetor[] = {1, 2, 3};
    int * arr = vetor;

    for (int i = 2; i > -1; i--)
    {
        printf("%d ", *(arr + i));
    }
    
}