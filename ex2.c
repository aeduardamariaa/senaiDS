/*Faça um programa que converta um número decimal para um número
binário utilizando recursividade*/

#include <stdio.h>

int binario(int num){

    int bit = num % 2;

    if (num == 0){
        return 0;
    }
    return bit + binario(num/2)*10;
}

int main(){

    int num;

    printf("Informe o numero: ");
    scanf("%i", &num);

    printf("%d\n", binario(num));

    return 0;

}