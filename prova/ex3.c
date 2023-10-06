/*Uma imobiliária deseja um sistema para armazenar apenas o valor de imóveis vendidos no período de um mês. 
Seu programa deve perguntar ao usuário quantos imóveis foram vendidos e alocar memória para fazer o armazenamento de valores.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int vendidos;
    float soma = 0;

    printf("\nQuantos imoveeis foram vendidos neste mês: ");
    scanf("%i", &vendidos);

    float *valores = (float *) malloc(vendidos * sizeof(float));

    for (int i = 0; i < vendidos; i++)
    {
        printf("\nInforme valor:");
        scanf("%f", &valores[i]);
        soma = soma + valores[i];
    }

    system("cls");

    for (int i = 0; i < vendidos; i++)
    {
        printf("[  %.2f  ]", valores[i]);
    }

    printf("\n\nA soma do total vendido: %.2f", soma);

    free(valores);
    
    return 0;

}