/*Implemente uma função recursiva para calcular a potência de um número positivo. A base e o expoente são inseridos.*/

#include <stdio.h>

int potenciaNumeros(int base, int expoente)
{
    if (expoente > 0)
    {
        int result = base * potenciaNumeros(base, base * expoente - 1);
        return result;
    }
    else
    {   
        return 0;
    }
}

int main()
{
    int base, expoente;

    printf("Informe a base: ");
    scanf("%i", &base);

    printf("Informe o expoente: ");
    scanf("%i", &expoente);

    for (int i = expoente; i = 0; i--)
    {
        printf("%i", potenciaNumeros(base, i));
    }

    return 0;
}