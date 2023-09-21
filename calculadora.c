/*Atividade: Faça uma calculadora utilizando funções void e ponteiros.*/

#include <stdio.h>

// função que printa o menu
void menu(int * a, int * b, int * op)
{
    printf("=====================CALCULADORA=====================\n");
    printf("Qual o primeiro valor: ");
    scanf("%i", a); //não colocopu o & porque já recebeu o endereço no parametro 
    printf("Qual o segundo valor: ");
    scanf("%i", b);
    printf("\n1 - ADICAO");
    printf("\n2 - SUBTRACAO");
    printf("\n3 - MULTIPLICACAO");
    printf("\n4 - DIVISAO");
    printf("\n0 - SAIR\n");
    scanf("%i", op);
}

// função que soma
void adicao(int a, int b, int * result)
{
    *result = a + b;
    printf("%d", *result);
}

// função que subtrai
void subtracao(int a, int b, int * result)
{
    *result = a - b;
    printf("%d", *result);
}

// função em multiplicação
void multiplicacao(int a, int b, int * result)
{
    *result = a * b;
    printf("%d", *result);
}

// função que divide
void divisao(int a, int b, int * result)
{
    *result = a / b;
    printf("%d", *result);
}


int main()
{
    int a = 0, b = 0, op = 0, result = 0;

    menu(&a, &b, &op);
    
    // printf("op: %i\n", op);
    // printf("&op: %p\n", &op);

    switch (op)
    {
    case 1:
        adicao(a, b, &result);
        break;
    
    case 2:
        subtracao(a, b, &result);
        break;

    case 3:
        multiplicacao(a, b, &result);
        break;

    case 4:
        divisao(a, b, &result);
        break;

    case 0:
        break;

    default:
        printf("Deu ruim!");
        break;
    }

}