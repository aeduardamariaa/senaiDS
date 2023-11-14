/*Crie uma calculadora de valores inteiros. Sua calculadora deverá possuir as operações básicas. 
Todos os cálculos devem ser feitos em funções e chamadas pelo switch case.(1,0)*/

#include <stdio.h>
#include <stdlib.h>

float adicao(float a, float b)
{
    return a + b;
}

float subtracao(float a, float b)
{
    return a - b;
}

float multiplicacao(float a, float b)
{
    return a * b;
}

float divisao(float a, float b)
{
    return a / b;
}

void menu()
{
    printf("\n************** M E N U **************\n\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("0 - SAIR");
}

int main(void)
{
    int op = 10;
    float a, b;

    while (op != 0)
    {
        menu();
        printf("Qual operacao deseja realizar: ");
        scanf("%d", &op);

        printf("Informe os valores para a operação: ");
        scanf("%f %f", &a, &b);

        switch (op)
        {
        case 1:
            printf("Resultado: %2.f", adicao(a,b)); 
            break;
        case 2:
            printf("Resultado: %2.f", subtracao(a,b)); 
            break;
        case 3:
            printf("Resultado: %2.f", multiplicacao(a,b)); 
            break;
        case 4:
            printf("Resultado: %2.f", divisao(a,b)); 
            break;
        default:
            printf("Saindo...");
            break;
        }
    }
}