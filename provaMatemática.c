#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * arquivo;

    int a, b, resposta, pontos = 0;

    srand(time(NULL));

    arquivo = fopen("resultado.txt", "w");

    for (int i=0;i<=4;i++){

        a = rand() % 100;
        b = rand() % 100;

        printf("Qual a soma de %d e %d? ", a, b);
        scanf("%d", &resposta);

        if (resposta == (a+b)){
            printf("Voc� acertou!\n");
            pontos = pontos + 1;
        }else{
            printf("Voc� errou!\n");
        }
    }

    fprintf(arquivo, "Sua pontua��o foi: %i",pontos);
    printf("\n\nSua pontua��o �: %d", pontos);

    fclose(arquivo);

}
