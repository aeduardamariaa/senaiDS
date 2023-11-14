/*Desenvolva uma função recursiva de soma. Esta função deve ir de número em número somando-os até chegar a um resultado.(2,0)*/

#include<stdio.h>

int calculaSoma(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num + calculaSoma(num-1);
    }
}

int main(){

    int num;

    printf("\nInforme o numero: ");
    scanf("%i", &num);

    int resul = calculaSoma(num);

    printf("%i", resul);
}