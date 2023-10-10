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

}Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct
{
    Horario agora;
    Data hoje;
    char desc_compromisso[50];
}Compromisso;

void preencher(Compromisso * evento)
{
    printf("\nInforme a hora:");
    scanf("%i", &evento -> agora.hora);
    printf("\nInforme a minutos:");
    scanf("%i", &evento -> agora.minutos);
    printf("\nInforme a segundos:");
    scanf("%i", &evento -> agora.segundos);
    printf("\nInforme o dia:");
    scanf("%i", &evento -> hoje.dia);
    printf("\nInforme o mes:");
    scanf("%i", &evento -> hoje.mes);
    printf("\nInforme o ano:");
    scanf("%i", &evento -> hoje.ano);
    printf("\nInforme o compromisso:");
    scanf(" %s", evento -> desc_compromisso);
}

void imprime(Compromisso evento)
{
    printf("\n\n%d:%d:%d\t", evento.agora.hora, evento.agora.minutos, evento.agora.segundos);
    printf("%d/%d/%d\n", evento.hoje.dia, evento.hoje.mes, evento.hoje.ano);
    printf("Descrição: %s", evento.desc_compromisso);//arrumar impressão do compromisso
}


int main(void)
{       
    Compromisso evento;

    preencher(&evento);
    system("cls");
    imprime(evento);

}
