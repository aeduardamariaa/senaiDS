#include <stdio.h>

int calculaPotencia(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    else
    {
        return base * calculaPotencia(base, exp - 1);
    }
}
int main(){
    int base, exp;

    printf("\nInforme a base: ");
    scanf("%i", &base);

    printf("\nInforme o expoentes: ");
    scanf("%i", &exp);

    int resul = calculaPotencia(base, exp);

    printf("%i", resul);
}