/*Faça um programa que exiba a tabuada de um valor inserido por um
usuário.*/

#include <stdio.h>

int tabuada(int num, int i){

    if (i < 11){
        return (num * i);
    }else{
        int result = num * tabuada(num, i+1);
        return result;
    }
}
int main(){
    int num;

    printf("Informe um número para saber a tabuada: ");
    scanf("%i", &num);

    for (int i = 0; i <=10; i++)
    {
        printf("\n%i X %i = %i", num, i, tabuada(num, i));
    }
    
}
