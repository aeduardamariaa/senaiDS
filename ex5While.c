/*Faça um programa que leia três valores. Enquanto a soma desses três valores
não resultarem em 45 o sistema repetirá seu processo.*/

#include <stdio.h>

int main(){
    const int VALOR = 45;
    int a, b, c, soma = 0;

    while (soma != VALOR){

        printf("\nInforme 3 valores: ");
        scanf("%i %i %i", &a, &b, &c);

        soma = a + b + c;

        if (soma == VALOR){
            printf("\nVocê acertou o valor da soma deveria ser %i!", VALOR);
        }else{
            printf("\nVocê errou, tente novamente");
        }
        
    }
    
}