/*Crie um programa que receba um ponteiro de uma estrutura de um imóvel e insira dentro de um arquivo de texto as informações que serão lidas.

(Valor, Local, Qtd de peças, c/s piscina)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float valor;
    char local[50];
    int pecas;
    char piscina;
}Imovel;

void preencheInfo(Imovel * imovel1)
{
    printf("\nInforme o valor: ");
    scanf("%f", &imovel1->valor);
    printf("\nInforme o local: ");
    scanf(" %[^\n]", imovel1->local);
    printf("\nInforme a quantidade de pecas: ");
    scanf("%i", &imovel1->pecas);
    printf("\nPiscina: [s/n] ");
    scanf(" %c", &imovel1->piscina);

    preencheArquivo(imovel1);
}
void preencheArquivo(Imovel * imovel1)
{
    FILE * arquivo;
    arquivo = fopen("imovel.txt", "a+");

    fprintf(arquivo, "VALOR: %f\nLOCAL: %s\nQUANTIDADE DE PEÇAS: %i\nPISCINA: %c", imovel1->valor, imovel1->local, imovel1->pecas, imovel1->piscina);

    fclose(arquivo);
}
int main(void)
{
    Imovel * imovel1 = (Imovel *)malloc(1 * sizeof(Imovel));

    preencheInfo(imovel1);

    free(imovel1);

    return 0;
}