#include <stdio.h>
#include <stdlib.h>

/*Uma empresa de bebidas lida diariamente com o problema de classificar bebidas como alco�licas ou n�o alco�licas.  Fa�a um programa em C
 onde o usu�rio insira informa��es de uma bebida e  armazene em um arquivo de texto as bebidas n�o alco�licas e em outro arquivo as alco�licas.*/

int main(){

    char nome[50];
    char alcool;
    float valor;

    FILE * arquivoAlcool;
    FILE * arquivoNAlcool;

    arquivoAlcool = fopen("alcool.txt", "a");
    arquivoNAlcool = fopen("semAlcool.txt", "a");

    printf("\n\n***********CADASTRO DE BEBIDAS***********\n\n");
    printf("\nInsira S para alcoolica e N para n�o alcoolica: ");
    scanf("%c", &alcool);
    printf("\nInsira o nome da bebida: ");
    scanf("%s", &nome);
    printf("\nInsira o valor: ");
    scanf("%f", &valor);

    switch(alcool){
        case 's':
            fprintf(arquivoAlcool, "Nome da bebida:%s\nValor:%.2f\n\n",nome,valor);
            printf("Chegou no sim");
            break;
        case 'S':
            fprintf(arquivoAlcool, "Nome da bebida:%s\nValor:%.2f\n\n",nome,valor);
            printf("Chegou no sim");
            break;
        case 'n':
            fprintf(arquivoNAlcool, "Nome da bebida:%s\nValor:%.2f\n\n",nome,valor);
            printf("Chegou no n�o");
            break;
        case 'N':
            fprintf(arquivoNAlcool, "Nome da bebida:%s\nValor:%.2f\n\n",nome,valor);
            printf("Chegou no n�o");
            break;

    }
    fclose(arquivoAlcool);
    fclose(arquivoNAlcool);
    return 0;
}
