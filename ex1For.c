/*1) Faça um programa que imprima todos os números pares até o valor que foi
inserido pelo usuário.*/

#include <stdio.h>

int main(){
	
	int valor, i;
	
	printf("Insira um valor: ");
	scanf("%i", &valor);
	
	for(i=1;i<=valor;i++){
		if (i % 2 == 0){
			printf("\n%i", i);
		}
	}
}
