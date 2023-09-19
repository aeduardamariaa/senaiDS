/*Faça um programa que exiba a tabuada de um valor inserido por um
usuário.*/

#include <stdio.h>

int tabuada(int num, int i){

    if (i == 10){
        return (1);
    }else{
        printf("\n%i X %i = %i", num, i+1, (num*(i+1)));
        return tabuada(num, i+1);
    }
}
int main(){
    int a;
    int i = 0;

    printf("Informe um número para saber a tabuada: ");
    scanf("%i", &a);
    
    tabuada(a, i);
}