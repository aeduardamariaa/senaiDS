/*1. Escreva um trecho de codigo para fazer a criação dos novos tipos de
dados conforme solicitado abaixo:

• Horário: composto de hora, minutos e segundos.

• Data: composto de dia, mês e ano.

• Compromisso: composto de uma data, horario e texto que descreve o
compromisso.*/

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int hora;
    int minutos;
    int segundos;
    int dia;
    int mes;
    int ano;

}Data;

void preencher(Data * hoje)
{
    printf("\nInforme a hora:");
    scanf("%i", &hoje -> hora);
    printf("\nInforme a minutos:");
    scanf("%i", &hoje -> minutos);
    printf("\nInforme a segundos:");
    scanf("%i", &hoje -> segundos);
    printf("\nInforme a dia:");
    scanf("%i", &hoje -> dia);
    printf("\nInforme a mes:");
    scanf("%i", &hoje -> mes);
    printf("\nInforme a ano:");
    scanf("%i", &hoje -> ano);
}

void imprime(Data hoje)
{
    printf("\n\n%d:%d:%d\t", hoje.hora, hoje.minutos, hoje.segundos);
    printf("%d/%d/%d\n", hoje.dia, hoje.mes, hoje.ano);
}


int main(void)
{       
    Data hoje;

    preencher(&hoje);
    system("cls");
    imprime(hoje);

}